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
#define elif     if
 
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
	lli t;
	cin >>t;
	while(t--){

     lli a1,a2,a3,c1,c2,c3;
     cin >>a1>>a2>>a3>>c1>>c2>>c3;
     int f=0;
     if(a1 > a2){
     	if(c1<c2) f=1;
     }
      if (a1 < a2){
     	if(c1 > c2) f=1;
     }
      if(a2 > a3){
     	if(c2<c3) f=1;
     }
      if (a2 < a3){
     	if(c2 > c3) f=1;
     }
      if(a1 > a3){
     	if(c1<c3) f=1;
     }
      if (a1 <a3){
     	if(c1 > c3) f=1;
     }
      if(a1==a2){
     	if(c1!=c2)f=1;
     }
      if(a2==a3){
     	if(c2!=c3)f=1;
     }
      if(a1==a3){
     	if(c1!=c3)f=1;
     }
     if(f){
     	cout << "NOT FAIR\n";
     }
     else
     cout<< "FAIR\n";
     // return 0;
// urn 0;
	
	}
}
