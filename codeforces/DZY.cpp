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

const int N = 1e5+5;

void fastio(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
	fastio();
    // freopen("input.txt", "r", stdin); // redirects standard input
	// freopen("output.txt", "w", stdout); // redirects standard output
	S s;
	cin >>s;
	lli k;
	cin >> k;
	lli ar[26];
	for (int i = 0; i < 26; ++i)
	{
		cin >>ar[i];
	}
	lli ma = *max_element(ar,ar+26);
	// watch(ma);
	lli sol=0;
    for(lli i=0; i< s.size()+k;i++){
    	if(i>=s.size()) sol+=(i+1)*ma;
    	else{
    		sol+= (i+1)*ar[((int) s[i]) -97];
    		// watch(i+1);
    		// watch(ar[((int) s[i]) -97]);
    	}
    }
    cout << sol << endl;
    
    return 0;
}
