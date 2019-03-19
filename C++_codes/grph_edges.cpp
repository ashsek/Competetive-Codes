#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> V[N];
int visited[N];
int edges[N];
float ed = 0;


void dfs(int u){
	if (visited[u] == 1) return;
	visited[u] = 1;
	for(int i =0;i < V[u].size();i++){
		// if (V[u][i] == u) ed++;
		ed+= 0.5;
		if (visited[V[u][i]] != 1)
			dfs(V[u][i]);
	}
}


int main(){
	int n,m,i;
	for(i=0;i<n+1;i++) edges[i] = 0;
	cin >> n >> m;
	int t = m, a,b;
	while(t--){
		cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}
	for(i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i);
			edges[i] = ed;
			ed = 0;
		}}
	int z;
	sort(edges,edges+n+1);
	z = edges[n];
	cout << z  << '\n';
}