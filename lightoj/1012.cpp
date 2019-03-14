#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n,m,i=0;
vector<int> V[N];
int visited[N];
int cou=0;

void dfs(int u){
	if (visited[u]==1) return;
	visited[u] = 1;
	cout << u << " -> ";
	cou +=1;
	// cout << 's';
	for(int i=0;i<V[u].size();i++){
		// cout << 'p';
		// cout << V[u][i] << " ";
		dfs(V[u][i]);
	}
	// cout << 'h';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int x,y;
		char c;
		int s;
		int f = max(n,m);
		char mat[f][f];
		for(int i=0;i<n;i++){
			for(int j = 0; j<m;j++){
				cin >> c;
				// cout << c << "xasas \n";
				// cout << c;
				if(c == '@'){
					s = max(j+1,i+1);
				}
			}
		}
		for(int i = 0;i<f;i++){
			for(int j=0;j<f;j++){
				if(c == '.' or c == '@'){
					V[i+1].push_back(j+1);
				}
			}
		}
		// cout << s;
		// cout << V[s].size();
		dfs(s); // call for main one.
		cout << cou;
		cou =0;
		// int visited[N];
	}
}



