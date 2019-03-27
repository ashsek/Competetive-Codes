#include<bits/stdc++.h>
using namespace std;

int w,h,i,sh,sw,co = 0;
const int N = 1005;
char a[N][N];
int visited[N][N];

void dfs(int x, int y){
	if(visited[x][y] == 1) return;
	visited[x][y] = 1;
	co += 1;
	if(a[min(x+1,h-1)][y] == '.') dfs(min(x+1,h-1),y);
	if(a[x][min(y+1,w-1)] == '.') dfs(x,min(y+1,w-1));
	if(a[max(x-1,0)][y] == '.') dfs(min(x-1,0),y);
	if(a[x][max(y-1,0)] == '.') dfs(x,min(y-1,0));
}

int main(){
	int t;
	cin >> t;
	while(t--){
		co = 0;
		cin >> h >> w;
		for (int i = 0; i < h; ++i)
		{
			for(int j=0;i<w;j++){
				cin >> a[i][j];
				if(a[i][j]== '@'){
					sh = i;
					sw = j;
				}
			}
		}
		dfs(sh,sw);
		cout << co << '\n';
	}
}