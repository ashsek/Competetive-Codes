//Little monk and edge count cpp code monk
#include<bits/stdc++.h>
using namespace std;
int i,j,k;
const int N = 1e5+5;
int a[N];
int b[N];

vector <int> V[N];
int visited[N];

int dfs(int u){
	if(visited[u] == 1) return 0;
	// cout << u << " -> ";
	visited[u] = 1;
	for(int i=0;i<V[u].size();i++){
		if (visited[V[u][i]] != -99 && visited[V[u][i]] != 1){
			// cout << V[u][i]<<'\n';
			// visited[V[u][i]] = 1;
			j += 1;
			dfs(V[u][i]);
		}
	}
	return j;
}

int main(){
	int n,q;
	cin >> n >> q;
	for(int i=1;i<=n-1;i++){
		int x1,y1;
		cin >> x1 >> y1;
		a[i] = x1; // left node of edge
		b[i] = y1; // right node of edge
		V[x1].push_back(y1);
		V[y1].push_back(x1);
	}
	for(int i=0;i<q;i++){
		j = 1;
		int z,z2,z3,z4;
		cin >> z;
		visited[a[z]] = -99;
		visited[b[z]] = -99;
		// cout << a[z] <<"a \n";
		z4 = max(a[z],b[z]);
		z2 = dfs(z4);
		// cout << z2 << " z2 \n";
		// cout << j << 'j';
		// z2 = j+1;
		z3 = n-z2;
		// cout << z3 << "z3 \n";
		// cout << j << 'j';
		cout << z2*z3 << '\n';
		for(int i=0;i<n+1;i++){
			visited[i] = 0;
		}
	}

}