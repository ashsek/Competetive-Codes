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
    int n;
 	cin >> n;
 	// lli a[n],b[n],c[n];
 	vector<int> dp(3); // store the value if i th task on last day
 	for (int days = 0; days < n; ++days)
 	{
 		vector<int> val(3);
 		cin >> val[0] >> val[1] >> val[2];
 		vector<int> dp_n(3, 0);
 		for (int i = 0; i < 3; ++i)
 		{
 			for (int j = 0; j < 3; ++j)
 			{
 				if(i!=j){
 				 dp_n[j] = max(dp_n[j], dp[i]+ val[j]);
 				 	// watch(j);
 				 	// watch(dp_n[j]);
 				 	// watch(val[j])
 				}
 			}
 		}
 		dp = dp_n;
 	}
 	printf("%d\n", max(max(dp[0],dp[1]),dp[2]));
 	// lli ite[n];
    
    return 0;
}
