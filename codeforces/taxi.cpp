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
	lli a[5] = {0};
	lli n;
	cin >> n;
	while(n--){
		int k;
		cin >> k;
		a[k]++;
	}
	lli ans =0;
	//4's will be in one car,
	ans += a[4];
	// watch(ans);
	a[4]=0;
	//2-2 will be in one car,
	if(a[2] > 1){
		ans += a[2]/2;
		a[2] -= (int (a[2]/2))*2;
	}
	// watch(ans);
	// 3 and 1 in a car
	ans += min(a[1],a[3]);
	int k = min(a[1],a[3]);
	a[1] -=k;
	a[3] -= k;
	// watch(ans);

	// 2 and 1;
	k = min(a[2],a[1]);
	a[2] -= k;
	a[1] -= 2*k;
	ans += k;
	// watch(ans);
	// watch(ans);
	ans += a[1]/4;
	a[1] -= (int (a[1]/4))*4;
	// watch(ans);

	ans += a[3];
	a[3] =0;

	for(int i=0; i < 5;i++){
		if(a[i] !=0 && a[i]>0){
			// watch(i);
			// watch(a[i]);
			ans += 1;
		}
	}
	// watch(ans);
	cout << ans << endl;
    return 0;
}
