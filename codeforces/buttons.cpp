#include <bits/stdc++.h>
#define MAX 20000
#define mm(a, n) memset(a, n, sizeof(a))
using namespace std;

int bfs(int src, int dest)
{
    int vis[MAX]; mm(vis, 0);
    queue<int> q; q.push(src);
    while(!q.empty())
    {
        src=q.front(); q.pop();
        if(src==dest) return vis[src];
        
        int t=src*2;
        if(t<dest*2)
        {
        if(!vis[t])
        {
            vis[t]=vis[src]+1;
            q.push(t);
        }
        }
        t=src-1;
        if(t>=0)
        if(!vis[t])
        {
            vis[t]=vis[src]+1;
            q.push(t);
        }
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #else
    #endif
    int a, b; cin>>a>>b;
    cout<<bfs(a, b)<<endl;
    return 0;
}