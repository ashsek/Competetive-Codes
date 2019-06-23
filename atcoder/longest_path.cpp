#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize "-O3"

#define watch(x) cout << (#x) << " is " << (x) << endl

#define lli     long long int

#define max1 1000001    //10^6 + 1
#define max2 10000001   //10^7 + 1
#define max3 1000000007 //10^9 + 7
#define inf  1000000009 //10^9 + 9

const lli N = 1e5+5;

// std::vector<char> v;
vector<lli> edges[N];
lli in_degree[N];
lli dist[N];
bool visited[N];

void dfs(lli a){
	assert(!visited[a]);
	visited[a] = true;
	for(int b : edges[a]){
		dist[b] = max(dist[b], dist[a]+1);
		--in_degree[b];
		if(in_degree[b] == 0) dfs(b);
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli n,m;
    cin >> n >> m;
    lli x,y;
    
    for (lli i = 0; i < m; ++i)
    {
    	cin >> x >> y;
    	edges[x].push_back(y);
    	++in_degree[y];
    }

    for (int i = 1; i <= n; ++i)
    {
		if(!visited[i] && in_degree[i] == 0){
			dfs(i);
		}    	
    }

    lli ma = 0;
    for (lli i = 1; i <= n; ++i)
    {
    		ma = max(ma,dist[i]);
    }
    cout << ma << '\n';
    return 0;
}
