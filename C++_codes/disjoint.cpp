#include<bits/stdc++.h>

#define lli long long int
using namespace std;

const int N = 1e5+5;

vector<int> V[N];

int visited[N] = {0};

int coun[N] = {0};
int cc[N] = {0};
int cou = 0;
int cc_ind=0;

void dfs(int u){
	if(visited[u]) return;
	visited[u] = 1;
	cc[u]=cc_ind;
	for (int i = 0; i < V[u].size(); ++i)
	{
		if(!visited[V[u][i]]){
			dfs(V[u][i]);
			cou++;
		}
	}
	return;
}
int main(int argc, char const *argv[])
{
	lli n,m;
	cin >> n >> m;


	for (int i = 0; i < m; ++i)
		{
			lli u,v;
			cin >> u >> v;
			V[u].push_back(v);
			V[v].push_back(u);
		}
	cc_ind = 0;
	for (int i = 1; i <= n; ++i)
	{
		cou = 0;
		if(!visited[i]){
			cc_ind++;
			dfs(i);
			coun[cc_ind] = cou;
		}
		 //count in cc number i
		// cou = 0;
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<< coun[i] << ' ';
	// }
	// cout << endl;
	// 	for (int i = 0; i < n; ++i)
	// {
	// 	cout<< cc[i] << ' ';
	// }
	// cout << endl;
	for (int i = 1; i <= n; ++i)
	{
		cout << coun[cc[i]] << ' ';
	}
	cout << endl;
	return 0;
}