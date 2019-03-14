#include<bits/stdc++.h>
using namespace std;
// int main(){
// 	int n,m,i=0,x,y;
// 	cin >> n >> m;
// 	vector <int> V[n+1];
// 	int visited[n+1];
// 	for(i=0;i<n+1;i++){
// 		visited[i] = 0;
// 	}
// 	for(i=0;i<n;i++){
// 		cin >> x >> y;
// 		V[x].push_back(y);
// 		V[y].push_back(x);
// 	}
// 	stack <int> q;
// 	q.push(1);

// 	vector <int>:: iterator itr;

// 	while(!q.empty()){
// 		x = q.front();
// 		q.pop();
// 		cout << x << ' ';
// 		visited[x] = 1;
// 		for(itr = V[x].begin(); itr < V[x].end(); itr++){
// 			q.push(*itr);
// 		}
// 	}


// }

const int N = 1e5 + 5;

int n,m,i=0;
vector<int> V[N];
int visited[N];

void dfs(int u){
	if (visited[u]==1) return;
	visited[u] = 1;
	cout << u << " -> ";
	for(int i=0;i<V[u].size();i++){
		// cout << V[u][i] << " ";
		dfs(V[u][i]);
	}
}

int main(){
	cin >> n >> m;
	int x,y;
	
	for(i=0;i<m;i++){
		cin >> x >> y;
		V[x].push_back(y);
		V[y].push_back(x);
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



