#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<int> v[N];

queue<int> qu; 

int visited[N];

int edges[N];

int height[N];

int isprime(int z){
	for(int i=2;i<=sqrt(z);i++){
		if (z%i == 0) return 0;
	}
	return 1;
}


void clearq(){
	while(!qu.empty()) qu.pop();
}


void addegges(int n){
		// cout << n <<'\n';
		if(edges[n] == 1) return;
		edges[n] = 1;
		int u = n%10,n2 = n;
		n -= u; 
		// ones place
		for(int i=0;i<10;i++){
			if (isprime(n+i) && (n+i != n2)) v[n2].push_back(n+i);
		}
		// tens place
		int t = n2%100;
		n = n2;
		n = n - t + u; 
		for (int i=0;i<10;i++){
			if (isprime(n+i*10) && (n+i*10 != n2)) v[n2].push_back(n+i*10);
		}

		// hundreds place
		int h = n2%1000;
		n = n2;
		n = n - h + t; 
		for (int i=0;i<10;i++){
			if (isprime(n+i*100) && (n+i*100 != n2)) v[n2].push_back(n+i*100);
		}

		//thousands place
		int th = n2%10000;
		n = n2;
		n = n - th + h; 
		for (int i=1;i<10;i++){
			if (isprime(n+i*1000) && (n+i*1000 != n2)) v[n2].push_back(n+i*1000);
		}
	}

void bfs(int u, int z){
	int h =0;
	if (visited[u]==1) return;
	qu.push(u);
	if (u == z) {
		cout << height[u] << '\n';
		clearq();
		return;
	}
	while(!qu.empty()){
		// cout <<'s';
		u = qu.front();
		qu.pop();
		// cout << u;
		if(u == z) {
			cout << height[u] << '\n';
			clearq();
			return;

		}
		// cout<<'l';
		// cout<<v[u].size();
		for(int i=0;i<v[u].size();i++){
			// cout<<'u';
			if(edges[v[u][i]] != 1) addegges(v[u][i]);
			if (visited[v[u][i]] != 1){
				qu.push(v[u][i]);
				height[v[u][i]] = min(height[u] + 1, height[v[u][i]]);
				if(v[u][i] == z){
					cout << height[v[u][i]] << '\n';
					clearq();
					return;
				}
			}
		}
	}

}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n1,n2,i;
		for(i=0;i<N;i++){
			height[i] = 999;
			visited[i] = 0;
			edges[i] = 0;
		}
		cin >> n1 >> n2;
		height[n1] = 0;
		addegges(n1);
		// for(i=0;i<v[n1].size();i++) cout << v[n1][i] << '\n';
		bfs(n1,n2);
		for(i=0;i<N;i++){
			v[i].clear();
		}
	}
}