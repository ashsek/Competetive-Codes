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

// #define max1 1000001    //10^6 + 1
// #define max2 10000001   //10^7 + 1
// #define max3 1000000007 //10^9 + 7
#define inf  1000000009 //10^9 + 9

const int N = 1e5+5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli n,w;
 	cin >> n >> w;
 	// vector<lli> dp(w+1,0);
 	vlli value(n);
 	vlli weight(n);
 	for (int i = 0; i < n; ++i)
 	{
 		cin >> weight[i] >> value[i];
 	}	
 	lli sum_values = 0;

 	for (int i = 0; i < n; ++i)
 	{
 		sum_values += value[i];
 	}

 	vlli dp(sum_values+3, inf);
 	dp[0] = 0;

 	// dp[i] stores max value when weight is i
 	for (lli i = 0; i < n; ++i)
 	{
 		for (lli value_alr= sum_values-value[i]; value_alr >= 0 ; --value_alr)
 		{
 			dp[value_alr + value[i]] = min(dp[value_alr + value[i]], dp[value_alr] + weight[i]);
 		}
 	}
 	lli ans=0;
 	for (lli i = 0; i <= sum_values; ++i)
 	{
 		if(dp[i] <= w)
 			ans = max(i ,ans);
 	}
 	cout << ans << '\n';
 	// lli a[n],b[n],c[n];
 	// lli ite[n];
    
    return 0;
}
