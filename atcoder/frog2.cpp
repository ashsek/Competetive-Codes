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

const int N = 1e5+5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli n,k;
    cin >> n >> k;
    lli h[n+1];
    for (int i = 0; i < n; ++i)
    {
    	cin >> h[i];
    }
    lli dp[n+k];
    for (int i = 0; i < n+k; ++i)
    {
        dp[i] = inf;
    }
    dp[0] = 0;
    // dp[1] = 0;
    // dp[2] = abs(h[2]-h[1]);
    // int a2;
    for (int i = 0; i < n; ++i)
    {
        // a2 = k;
        // dp[i] = 9999999;
        for(int j = i+1; j <= i+k; ++j )
        {   
         if (j < n) {
        	   dp[j] = min(dp[j], abs(h[i]-h[j])+dp[i]);
                }
            }
    }
    cout << dp[n-1] << '\n';
    
    return 0;
}
