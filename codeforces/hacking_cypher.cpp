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

int check(string s, string s2, lli a, lli b){
	lli x1 = atoi(s.c_str());
	lli x2 = atoi(s2.c_str());
	watch(x1);
	watch(x2);
	if(x1%a == 0 && x2%b == 0) return 1;
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin); // redirects standard input
	// freopen("output.txt", "w", stdout); // redirects standard output
    string s;
    cin >> s;
    lli a, b;
    cin >> a >> b;
    for (int i = 0; i < s.length()-1; ++i)
    {
    	if(s[i+1] != '0'){
    		// cout << s.substr(0,i) << endl;
    		watch(s.substr(0,i+1));
    		watch(s.substr(i+1,s.length()+1));
    		if(check(s.substr(0,i+1),s.substr(i+1,s.length()+1),a,b)){
    			cout << "YES\n";
    			cout << s.substr(0,i+1) << '\n' << s.substr(i+1,s.length()+1);
    			cout << endl;
    			return 0;
    		}
    	}
    }
    cout << "NO\n";
       
    
    return 0;
}
