#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize "-O3"

#define lli     long long int

#define max1 1000001    //10^6 + 1
#define max2 10000001   //10^7 + 1
#define max3 1000000007 //10^9 + 7
#define inf  1000000009 //10^9 + 9
const int N = 1e5+5;

vector<lli> V[N];
lli a[N];
lli n,x;

lli mp(lli p){
	lli z;
	z = a[p];
	for (lli i = 0; i < V[p].size(); ++i)
	{
		z += mp(V[p][i]);
	}
	return max(-x,z);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 	//freopen("input.txt", "r", stdin); // redirects standard input
	//freopen("output.txt", "w", stdout); // redirects standard output
    int t;
    cin >> t;
    while(t--){
    	cin >> n >> x;
    	for (int i = 1; i <= n; ++i)
    	{
    		/* code */
    		cin >> a[i];
    	}
    	lli u,v;
    	for (int i = 0; i < n-1; ++i)
    	{
    		cin >> u >> v;
    		V[u].push_back(v);
    	}
    cout << mp(1) << '\n';
    for (int i = 0; i < n+1; ++i)
    {
    	V[i].clear();
    }
    
    // return 0;
    }
}
