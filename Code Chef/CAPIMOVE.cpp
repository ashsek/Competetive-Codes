#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize "-O3"

#define watch(x) cout << (#x) << " is " << (x) << endl

#define rep(i,a,b)  for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=a-1;i>=b;i--)
#define nl          cout<<endl;
#define test()      lli t;cin>>t;while(t--)
#define sp(n)       setprecision(n)

#define lli     long long int
#define elif    else if
 
#define pb      push_back

#define vsort(v) sort(v.begin(),v.end())

#define max1 1000001    //10^6 + 1
#define max2 10000001   //10^7 + 1
#define max3 1000000007 //10^9 + 7
#define inf  1000000009 //10^9 + 9

const int N = 1e5+5;

vector <lli> V[N];
lli parent[N], visited[N];

void dfs(lli u){
	if(visited[u] == 1) return;
	visited[u] = 1;
	for (int i = 0; i < V[u].size(); ++i)
	{
		if (visited[V[u][i]] != 1) parent[V[u][i]] = u;
	}
}

void solve(lli i){
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    lli P[N];
    cin >> t;
    while(t--){
    	cin >> n;
    	for (int i = 1; i <= n; ++i)
    	{
    		cin >> P[i];
    	}
    	lli u,v;
    	for (int i = 0; i < n-1; ++i)
    	{
    		cin >> u >> v;
    		V[u].pb(v);
    		V[v].pb(u);
    	}
    	dfs(1);
    	for (int i = 1; i < n+1; ++i)
    	{
    		solve(i);
    	}
    }
    return 0;
}
