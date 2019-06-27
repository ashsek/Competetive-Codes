#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// using boost::multiprecision::cpp_int;

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

const int N = 2e5+5;

vector<int> v[N];
int visited[N];
int pa;
int size[N];
int pow(int a, int b, int m)
{
	int ans=1;
	while(b)
	{
		if(b&1)
			ans=(ans*a)%m;
		b/=2;
		a=(a*a)%m;
	}
	return ans;
}

void dfs(int u){
	// watch(u);
	if(visited[u]) return;
	visited[u] = 1;
	size[pa]++;
	for(int i=0; i < v[u].size(); i++)
		dfs(v[u][i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin); // redirects standard input
	// freopen("output.txt", "w", stdout); // redirects standard output

    lli n,k;
    cin >> n >> k;
    for (int i = 0; i < n-1; ++i)
    {
    	lli u,v2,x;
    	cin >> u >> v2 >> x;
    	if(!x){
    		v[u].push_back(v2);
    		v[v2].push_back(u);
    	}
    }
    for (int i = 1; i <= n; ++i)
    {
    	/* code */
    	size[i] = 0;
    }
    for (int i = 1; i <= n; ++i)
    {
    	pa = i;
    	if(!visited[i]){
    		dfs(i);
    	}
    }
    lli diff=0;
    lli w = pow(n,k,max3);
    for (int i = 0; i <=n; ++i)
    {
    	/* code */
    	if(size[i] > 0){
    		lli q = pow(size[i],k);
    		w -= q%1000000007;
    		w += max3;
    		w %=max3;
    	}
    }
    
    // w -= pow(diff, k, MOD);
	// ans += MOD;

    cout << w << endl;
    
    
    return 0;
}
