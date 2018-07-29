// Evening of the Living Dead
// Solution by Jacob Plachta

#define DEBUG 0

#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <sstream>
using namespace std;

#define LL long long
#define LD long double
#define PR pair<int,int>

#define Fox(i,n) for (i=0; i<n; i++)
#define Fox1(i,n) for (i=1; i<=n; i++)
#define FoxI(i,a,b) for (i=a; i<=b; i++)
#define FoxR(i,n) for (i=(n)-1; i>=0; i--)
#define FoxR1(i,n) for (i=n; i>0; i--)
#define FoxRI(i,a,b) for (i=b; i>=a; i--)
#define Foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
#define Min(a,b) a=min(a,b)
#define Max(a,b) a=max(a,b)
#define Sz(s) int((s).size())
#define All(s) (s).begin(),(s).end()
#define Fill(s,v) memset(s,v,sizeof(s))
#define pb push_back
#define mp make_pair
#define x first
#define y second

template<typename T> T Abs(T x) { return(x<0 ? -x : x); }
template<typename T> T Sqr(T x) { return(x*x); }
string plural(string s) { return(Sz(s) && s[Sz(s)-1]=='x' ? s+"en" : s+"s"); }

const int INF = (int)1e9;
const LD EPS = 1e-12;
const LD PI = acos(-1.0);

#if DEBUG
#define GETCHAR getchar
#else
#define GETCHAR getchar_unlocked
#endif

bool Read(int &x)
{
	char c,r=0,n=0;
	x=0;
		for(;;)
		{
			c=GETCHAR();
				if ((c<0) && (!r))
					return(0);
				if ((c=='-') && (!r))
					n=1;
				else
				if ((c>='0') && (c<='9'))
					x=x*10+c-'0',r=1;
				else
				if (r)
					break;
		}
		if (n)
			x=-x;
	return(1);
}

#define LIM 3003
#define MOD 1000000007

int A[LIM],B[LIM];

PR GCD(int a,int b)
{
		if (!b)
			return(mp(1,0));
	PR p=GCD(b,a%b);
	return(mp(p.y,p.x-p.y*(a/b)));
}

int Add(int a,int b)
{
	return((a+b)%MOD);
}

int Sub(int a,int b)
{
	return((a-b+MOD)%MOD);
}

int Mult(int a,int b)
{
	return((LL)a*b%MOD);
}

int Div(int a,int b)
{
	int inv=GCD(b,MOD).x;
		if (inv<0)
			inv+=MOD;
	return(Mult(a,inv));
}

int Prob(int i,int a,int b)
{
	Max(a,A[i]);
	Min(b,B[i]);
		if (a>b)
			return(0);
	return(Div(b-a+1,B[i]-A[i]+1));
}

int main()
{
		if (DEBUG)
			freopen("in.txt","r",stdin);
	// vars
	int T,t;
	int N,M;
	int i,j,h,z,d,p,ans;
	int mH[LIM];
	int nh,H[LIM];
	static int dynSafe[LIM][LIM]; // [yard][max fence height protecting safe yard]
	static int dynZomb[LIM][LIM]; // [yard][max active zombie height]
	int aggr[LIM];
	// testcase loop
	Read(T);
		Fox1(t,T)
		{
			// input
			Read(N),Read(M);
				Fox(i,N-1)
					Read(A[i]),Read(B[i]);
			Fill(mH,0);
				Fox(i,M)
				{
					Read(j),Read(h);
					Max(mH[j-1],h);
				}
			// coordinate compress zombie heights
			nh=0;
			H[nh++]=0;
			H[nh++]=INF;
				Fox(i,N)
					if (mH[i])
						H[nh++]=mH[i];
			sort(H,H+nh);
			nh=unique(H,H+nh)-H;
				Fox(i,N)
					mH[i]=lower_bound(H,H+nh,mH[i])-H;
			// DP
			Fill(dynSafe,0);
			Fill(dynZomb,0);
				if (mH[0])
					dynZomb[1][mH[0]]=1;
				else
					dynSafe[1][0]=1;
				Fox1(i,N-1)
				{
					Fill(aggr,0);
						Fox(h,nh)
						{
							z=mH[i];
								if (d=dynSafe[i][h])
								{
									// new zombie's lower anyway?
									if ((!z) || (z<h))
									{
										// new fence is no taller?
										p=Prob(i-1,0,H[h]);
										dynSafe[i+1][h]=Add(dynSafe[i+1][h],Mult(d,p));
										// new fence is taller?
										aggr[h+1]=Add(aggr[h+1],d); // aggregate
									}
									else
									{
										// new fence is no taller than the zombie?
										p=Prob(i-1,0,H[z]);
										dynZomb[i+1][z]=Add(dynZomb[i+1][z],Mult(d,p));
										// new fence is taller?
										aggr[z+1]=Add(aggr[z+1],d); // aggregate
									}
								}
								if (d=dynZomb[i][h])
								{
									// new zombie's at least as tall?
									if (z>=h)
										dynZomb[i+1][z]=Add(dynZomb[i+1][z],d);
									else
									{
										// prev zombie carrying over?
										p=Prob(i-1,0,H[h]);
										dynZomb[i+1][h]=Add(dynZomb[i+1][h],Mult(d,p));
										// not carrying over?
										p=Sub(1,p);
											if (z) // new zombie
												dynZomb[i+1][z]=Add(dynZomb[i+1][z],Mult(d,p));
											else // now safe
												dynSafe[i+1][0]=Add(dynSafe[i+1][0],Mult(d,p));
									}
								}
						}
					// handle aggregated transitions
					d=0;
						Fox1(j,nh-1)
						{
							d=Add(d,aggr[j]);
								if (d)
								{
									p=Prob(i-1,H[j-1]+1,H[j]);
									dynSafe[i+1][j]=Add(dynSafe[i+1][j],Mult(d,p));
								}
						}
				}
			// compute answer
			ans=0;
				Fox(h,nh)
					ans=Add(ans,dynSafe[N][h]);
			// output
			printf("Case #%d: %d\n",t,ans);
		}
	return(0);
}