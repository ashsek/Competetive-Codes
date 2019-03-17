// //#3325, +4 ,+4, -6 
// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e5+5;

// long long int f,s,g,u,d,i;

// int visited[N];
// int edges[N];
// long long int height[N];
// int exist[N];

// vector<long long int> V[N];
// queue<long long int> qu;

// void addedges(long long int z){
// 	if (edges[z]==1) return;
// 	edges[z] = 1;
// 	if(z + u <= f && visited[z+u] != 1){
// 		// visited[z+u] = 1;
// 		V[z].push_back(z+u);
// 	}
// 	if(z-d >= 1 && visited[z-u] != 1){
// 		// visited[z-u] = 1;
// 		V[z].push_back(z-d);
// 	}
// }

// void bfs(long long int u){
// 	// if(exist[g] == 1){
// 	long long int flag=0,z;
// 	qu.push(u);
// 	visited[u] = 1;
// 	if(u == g) cout << 0 << '\n';

// 	while(!qu.empty()){
// 		z = qu.front();
// 		qu.pop();
// 		if(z == g){
// 			flag = 1;
// 			cout << height[V[z][i]];
// 			return;
// 			}
// 		if (edges[z] != 1)
// 		 {addedges(z);
// 		 	edges[z] = 1;}		
// 		for(i=0;i<V[z].size();i++){
// 			qu.push(V[z][i]);
// 			// cout << V[z][i] << ' ';
// 			// addedges(V[z][i]);
// 			visited[V[z][i]] = 1;
// 			height[V[z][i]] = min(height[z]+1, height[V[z][i]]);
// 			if (V[z][i] == g) {
// 				flag = 1;
// 				cout << height[V[z][i]];
// 				return;
// 			} 
// 		}
// 		// cout << '\n';
// 	}
// 		if(height[g]==9999999){
// 			cout  << "use the stairs" <<'\n';
// 	// }
// 		}
// 	// if(flag==0){
// 		// cout  << "use the stairs" <<'\n';
// 	// }
// } 

// int main(){
// 	cin >> f >> s >> g >> u >> d;
// 	for(i=0;i<N;i++){
// 		height[i] = 9999999;
// 	}
// 	height[s] = 0;
// 	addedges(s);
// 	edges[s] = 1;
// 	bfs(s);
// }
#include <bits/stdc++.h>

using namespace std;

int f, src, dest, up, down, moves;
int vis[1000001];
int height[1000001];

void bfs()
{
    int cur, nextUp, nextDown;
    queue<int> q;
    vis[src] = 1;
    height[src] = 0;
    q.push(src);
    while(!q.empty())
    {
        cur = q.front();
        q.pop();
        nextUp = cur + up;
        nextDown = cur - down;
        if(nextUp<=f && !vis[nextUp])
        {
            vis[nextUp] = 1;
            height[nextUp] = height[cur]  + 1;
            q.push(nextUp);
        }
        if(nextDown>=1 && !vis[nextDown])
        {
            vis[nextDown] = 1;
            height[nextDown] = height[cur]  + 1;
            q.push(nextDown);
        }
    }
}

int main()
{
    cin>>f>>src>>dest>>up>>down;
    
    height[dest] = -1;
    bfs();
    if(height[dest] == -1)
    {
        cout<<"use the stairs";
    }
    else
    {
        cout<<height[dest];
    }

}