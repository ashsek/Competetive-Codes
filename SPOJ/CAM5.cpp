#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<long long int> V[N]; 

int visited[N];

void dfs(long long int u){
	if (visited[u] == 1) return;
	visited[u] = 1;
	for(int i=0;i<V[u].size();i++){
		if (visited[V[u][i]] != 1){
			dfs(V[u][i]);
		}
	}
}

int main(){
	int t,i;
	cin >> t;
	// cout << "\nt" << t;
	while(t--){
		long long int n,e;
		cin >> n >> e;
		// cout << '\n'<<n << e;
		if (e > 0){
			for(int i=0;i<e;i++){
				long long int a,b;
				cin >> a >> b;
			// cout << "yo";
			// cout << 'o';
				V[a].push_back(b);
				// V[b].push_back(a);
			}
		}
		// cout << 'yolo';
		for(int i=0;i<n;i++){
			visited[i] = 0;
		}
		long long int cc = 0;
		for(int i=0;i<n;i++){
			if (visited[i] != 1){
				dfs(i);
				cc++;
			}
		}
		cout << cc << '\n';
		for(i=0;i<=n;i++){
		V[i].clear();}
	}
}