#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

// long long int n,m,i=0;
vector<int> V[N];
int visited[N];
int flag;
int col[N];

void dfs(long long int u){
	if (visited[u]==1) return;
	if (flag == 1) return;
	visited[u] = 1;
	if(col[u] == -1) col[u] = 0;
	int cc = col[u];
	for(long long int i=0;i<V[u].size();i++){
		// cout << V[u][i] << " ";
		if (col[V[u][i]] == -1){
			if (cc == 0) col[V[u][i]] = 1;
			else col[V[u][i]] = 0;
		}
		else {
			if (cc == col[V[u][i]]){
				flag = 1;
				return;
			} 
		} 
	}
	// cout << u << " -> "
	for(long long int i=0;i<V[u].size();i++){
		// cout << V[u][i] << " ";
		if (flag == 1) return;
		dfs(V[u][i]);
	}
}

int main(){
	int t;
	cin >> t;
	int z=1;
	while(z<=t){
		flag = 0;
		long long int n,m,i;
		scanf("%lld%lld",&n,&m);
		long long int x,y;
		
		for(i=0;i<m;i++){
			scanf("%lld%lld",&x,&y);
			V[x].push_back(y);
			V[y].push_back(x);
		}
		for(i=0;i<=n;i++){
			col[i] = -1;
			visited[i] = 0;
		}
		long long int cc = 0;
		for (long long int i = 1; i <= n; i++) {
			if (flag == 1) break;
			if (!visited[i]) {
				dfs(i);
				cc++;
			}
		}
		if(flag) {
			printf("Scenario #%d:\n", z);
			printf("Suspicious bugs found!\n");
		}
		else{
		 	printf("Scenario #%d:\n", z);
			printf("No suspicious bugs found!\n");
		}
		for(i=0;i<=n;i++){
		V[i].clear();}
		z++;
	}
}



