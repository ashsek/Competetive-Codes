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
    // freopen("input.txt", "r", stdin); // redirects standard input
    // freopen("output.txt", "w", stdout); // redirects standard output
    lli t;
    cin >> t;
    while(t--){
        lli n,x;
        cin >> n >> x;
        lli a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        int f=0;
        for (int i = 0; i < n; ++i)
        {
            int k;
            // watch(i);
            // watch(a[i]);
            k = a[i];
            a[i] = 0;
            if(x-k > 0){
                if (binary_search(a,a+n,x-k))
                {
                    // watch(k);
                    // watch(i);
                    // watch(x-k);
                    // watch(binary_search(a,a+n,x-k));
                    f = 1;
                    break;
                }}
            if(x-k == 0 && i != 0 && a[0] == 0) {
                // cout << "Hello\n";
                f =1;
                 break;}
            a[i] = k;
        }
        if(f) cout << "Yes\n";
        else cout << "No\n";

    }
       
    
    return 0;
}
