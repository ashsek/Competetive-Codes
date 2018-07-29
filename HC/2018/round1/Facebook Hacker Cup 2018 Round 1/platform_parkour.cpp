// Platform Parkour
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
const LD EPS = 1e-9;
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

#define LIM 200000

int N;
int H[LIM],U[LIM],D[LIM];

bool Check(LD m)
{
	int i;
	LD a=H[0]-m;
	LD b=H[0]+m;
		Fox(i,N-1)
		{
			a=max(a-D[i],H[i+1]-m);
			b=min(b+U[i],H[i+1]+m);
				if (b<a)
					return(0);
		}
	return(1);
}

int main()
{
		if (DEBUG)
			freopen("in.txt","r",stdin);
	// vars
	int T,t;
	int M,W,X,Y,Z;
	int i,j,a,b,u,d;
	LD r1,r2,m;
	// testcase loop
	Read(T);
		Fox1(t,T)
		{
			// init
			Fill(U,60);
			Fill(D,60);
			// input
			Read(N),Read(M);
			Read(H[0]),Read(H[1]),Read(W),Read(X),Read(Y),Read(Z);
				FoxI(i,2,N-1)
					H[i]=((LL)W*H[i-2]+(LL)X*H[i-1]+Y)%Z;
				Fox(i,M)
				{
					Read(a),Read(b),Read(u),Read(d);
					a--,b--;
						if (a>b)
						{
							swap(a,b);
							swap(u,d);
						}
						FoxI(j,a,b-1)
						{
							Min(U[j],u);
							Min(D[j],d);
						}
				}
			// binary search
			r1=0,r2=1e6;
				while (r2>r1+EPS)
				{
					m=(r1+r2)/2;
						if (Check(m))
							r2=m;
						else
							r1=m;
				}
			// output
			printf("Case #%d: %.8lf\n",t,(double)r2);
		}
	return(0);
}