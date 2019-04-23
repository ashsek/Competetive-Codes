#include <bits/stdc++.h>
using namespace std;
#define lli long long int

const int N = 1e5+5;

vector<lli> V[N];
lli visited[N] = {0};
lli parent[N];
lli v2[N];

lli gcd(lli a, lli b){
	if(b==0) return a;
	return gcd(b,a%b);
}

void dfs2(lli u){
	if(visited[u]==1) return;
	visited[u] = 1;
	v2[u] = gcd(v2[u],v2[parent[u]]);
	if(V[u].size() == 1 and u !=1){
		//append in leaf node array
	}

	for (int i = 0; i < V[u].size(); ++i)
	{
		if (visited[V[u][i]] !=1){
			parent[V[u][i]] = u;
			dfs2(V[u][i]);
		}
	}
}
// lli leaf[N]
int main(){
	lli t;
	cin >> t;
	while(t--){
		lli n;
		cin >> n;
		lli i;
		for (int i = 0; i < n-1; ++i)
		{
			lli x,y;
			 cin >> x >>y;
			 V[x].push_back(y);
			 V[y].push_back(x);
		}
		lli v[n+1];
		for (int i = 1; i <= n; ++i)
		{
			cin >> v[i];
		}
		for (int i = 1; i <= n; ++i)
		{
			v2[i]= v[i];
		}
		lli m[n+1];
		for (int i = 1; i <= n; ++i)
		{
			cin >> m[i];
		}
		parent[1] = 1;

		//make a leaf list which will store the leaf nodes
		dfs2(1);

		//sort leaf nodes
		for (int i = 0; i < #size of leaf ; ++i)
		{
			lli mas = m[leaf[i]];
			cout << mas - gcd(mas,v2[leaf[i]]);
		}
		cout << '\n';

	}

}