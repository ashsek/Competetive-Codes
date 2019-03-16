#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n,m,i=0;
vector<int> V[N];
int visited[N];

void dfs(int u){
	if (visited[u]==1) return;
	visited[u] = 1;
	for(int i=0;i<V[u].size();i++){
		if (visited[V[u][i]] != 1){
		dfs(V[u][i]);
		// cout << u << '\n';
		}
	}
	cout << u << ' '; 
}

int main(){
	cin >> n >> m;
	int x,y;
	
	for(i=0;i<m;i++){
		cin >> x >> y;
		V[x].push_back(y);
		// V[y].push_back(x);
	}

	int cc = 0;
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			dfs(i);
			cc++;
		}
	}

	dfs(1);
}



