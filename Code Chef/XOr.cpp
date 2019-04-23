#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize "-O3"

#define watch(x) cout << (#x) << " is " << (x) << endl

#define rep(i,a,b)  for(lli i=a;i<b;i++)
#define repd(i,a,b) for(lli i=a-1;i>=b;i--)
#define nl          cout<<endl;
#define test()      lli t;cin>>t;while(t--)
#define sp(n)       setprecision(n)

#define lli     long long int
#define ulli    unsigned long long int
#define ld      long double
#define uld     unsigned long double
#define S       string
#define C       char
#define elif    else if

#define pb      push_back
#define pp      pop_back
#define mp      make_pair
#define plli    pair<lli,lli>
#define vlli    vector<lli>
#define vulli   vector<ulli>
#define vld     vector<ld>
#define vs      vector<string>

#define bs      binary_search
#define ub      upper_bound
#define lb      lower_bound

#define vsort(v) sort(v.begin(),v.end())

#define max1 1000001    //10^6 + 1
#define max2 10000001   //10^7 + 1
#define max3 1000000007 //10^9 + 7
#define inf  1000000009 //10^9 + 9

const int N = 1e5+5;

vlli V[N];
lli w[N];
lli vis[N]={0};

lli n,q;
lli v,k;

lli ma,unit;

void dfs(lli node)
{
    if(vis[node]==1)
        return;
    else
        vis[node]=1;

  
  if((w[node]^k) >= ma)
  {
      if((w[node]^k)==ma)
      {
          unit=min(node,unit);
      }
      else
      {
          ma=w[node]^k;
          unit =node;
      }
  }

  rep(i,0,V[node].size())
  {
      if(vis[V[node][i]]!=1)
        dfs(V[node][i]);
  }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  //freopen("input.txt", "r", stdin); // redirects standard input
  //freopen("output.txt", "w", stdout); // redirects standard output
    int t;
    cin >> t;
    while(t--)
    {

      cin >> n >> q;

      
      
      rep(i,1,n+1)
      {
          cin>>w[i];
      }

      rep(i,0,n-1)
      {
          lli x,y;
          cin>>x>>y;
          V[x].pb(y);
          V[y].pb(x);
      }

      lli x1=0;
      lli v1=0;
      lli pa[N+1]={0};
      dfs(1);
      rep(i,1,n+1)
      {
          vis[i]=0;
      }
      rep(i,0,q)
      {
          lli a,b;
          cin>>a>>b;
           v=a^v1;
           k=b^x1;
          vis[pa[v]]=1;

          ma=-9999999;
          unit=999998;

          dfs(v);
          v1=unit;
          x1=ma;
          cout<<v1<<" "<<x1;
          nl;;
          for (int i = 0; i < n+1; ++i)
          {
              V[i].clear();
              vis[i] = 0;
          }
      }

    

    // return 0;
    }
}