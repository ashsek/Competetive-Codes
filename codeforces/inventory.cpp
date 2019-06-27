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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin); // redirects standard input
	// freopen("output.txt", "w", stdout); // redirects standard output
    lli n;
    cin >> n;
    lli a[n+1];
    lli b[n];
    // memset(a,0,(n+1)*sizeof(lli));
    for (int i = 0; i < n+1; ++i)
    {
    	a[i] = 0;
    }
    for (int i = 0; i < n; ++i)
       {
       		lli k;
       		cin >> k;
       		if(k <= n)
       			a[k] = 1;
       		b[i] = k;
       }
    
    queue<lli> q;
    for (int i = 1; i < n+1; ++i)
    {
    	if(!a[i]) q.push(i);
    }
    lli d[n+1];
    for (int i = 0; i < n+1; ++i)
    {
    	d[i] = 0;
    }
    for (int i = 0; i < n; ++i)
    {
    	if(b[i] <= n){
    		if(d[b[i]] == 0) d[b[i]] = 1;
    		else{
    			    		b[i] = q.front();
    		q.pop();
    		d[b[i]] = 1;
    		}

    	}
    	else{	
    		b[i] = q.front();
    		q.pop();
    		d[b[i]] = 1;
    	}
    }
    for (int i = 0; i < n; ++i)
    {
    	cout << b[i] << ' ';
    }
cout << endl;

    return 0;
}
