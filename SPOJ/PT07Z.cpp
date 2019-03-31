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
#define ulli    unsigned long long int
#define ld      long double
#define uld     unsigned long double
#define S       string
#define C       char
#define elif    else if

#define pb      push_back
#define pp      pop_back
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
vector<int> V[N];
int level[N];
int visited[N];

void dfs(int u){
	if (visited[u] == 1) return;
	visited[u] = 1;
	for(int i=0;i<V[u].size();i++){
		level[V[u][i]] = min(level[V[u][i]],level[u]+1);
		dfs(V[u][i]);
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i;
    cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		level[i] = 99999;	
	}
    for(i=0;i<n-1;i++){
    	int a,b;
    	cin >> a >> b;
    	V[a].push_back(b);
    	V[b].push_back(a);
    }
    level[1] = 0;
    dfs(1);
    // sort(level,level+n+1);
    int ma = -1,ind;
    for (int i = 1; i <= n; ++i)
    {
    	if(ma<level[i]){
    		ma = max(ma,level[i]);
    		ind = i;
    		// cout << ma;
    	}
    }
    // cout << level[ind] << "level\n";
    for (int i = 1; i <= n; ++i)
	{
		level[i] = 99999;	
	}
	for (int i = 0; i <= n; ++i)
	{
		visited[i] = -1;
	}
	// cout << ind << "yolo";
	level[ind] = 0;
    dfs(ind);
    for (int i = 0; i <= n; ++i)
    {
    	// cout << "lev" << level[i]<< ' ';
    }
    
    sort(level+1,level+n+1);
    cout <<level[n]<< '\n';
    return 0;
}
