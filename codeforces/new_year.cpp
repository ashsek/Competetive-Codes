#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize "-O3"

#define watch(x) cout << (#x) << " is " << (x) << endl

#define rep(i,a,b)  for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=a-1;i>=b;i--)
#define nl          cout<<endl;
#define test()      lli t;cin>>t;while(t--)
#define sp(n)       setprecision(n)

#define lli     long long int
#define ulli    unsigned long long int
#define ld      long double
#define uld     unsigned long double
#define S       string
#define C       char
#define elif    else if

#define pb      push_back
#define pp      pop_back
#define plli    pair<lli,lli>
#define vlli    vector<lli>
#define vulli   vector<ulli>
#define vld     vector<ld>
#define vs      vector<string>

#define bs      binary_search
#define ub      upper_bound
#define lb      lower_bound

#define vsort(v) sort(v.begin(),v.end())

#define max1 1000001    //10^6 + 1
#define max2 10000001   //10^7 + 1
#define max3 1000000007 //10^9 + 7
#define inf  1000000009 //10^9 + 9

const int N=1e5+5;

vector<int> v[N];
int visited[N];
int n,t,flag = 0;
void dfs(int u){
	if (visited[u]) return;
	visited[u] = 1;
	if (u==t) {
		flag =1;
		return;
	}
	for (int i = 0; i < v[u].size(); ++i)
	{
		dfs(v[u][i]);
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin); // redirects standard input
	// freopen("output.txt", "w", stdout); // redirects standard output
    cin >> n >> t;
    int a[n-1];
    for (int i = 0; i < n-1; ++i)
    {
    	cin >> a[i];
    }
    for (int i = 0; i < n-1; ++i)
    {
    	v[i+1].push_back(i+1+a[i]);
    }
    dfs(1);
    if (flag) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    
    return 0;
}
