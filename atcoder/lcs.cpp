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
    string s;
    string t;
    cin >> s >> t;
    int m,n;
    m = s.length();
    n = t.length();
    int dp[m+1][n+1];
    for (int i = 0; i <= m; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            if(i==0 || j == 0) dp[i][j] = 0;
            else{
                if (s[i-1] == t[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    // cout << s[i-1];
                }
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int i = m;
    int j = n;
    int z = dp[m][n];
    char arr[z];
    while(i>0 && j > 0){
        if(s[i-1] == t[j-1]) {arr[z-1]= s[i-1]; i--; j--; z--;}
        else{
            if (dp[i][j-1] > dp[i-1][j]) j = j-1;
            else i = i-1;
        } 
    }
    for (int i = 0; i < dp[m][n]; ++i)
    {
        cout << arr[i];
    }
    cout << '\n';
    // cout << dp[m][n] <<'\n';
    
    return 0;
}
