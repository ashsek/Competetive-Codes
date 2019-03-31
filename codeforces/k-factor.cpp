// Program to print all prime factors 
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
vector<int> V;


// A function to print all prime factors of a given number n 
void primeFactors(int n) 
{ 
	// Print the number of 2s that divide n 
	while (n%2 == 0) 
	{ 
		V.push_back(2); 
		n = n/2; 
	} 

	// n must be odd at this point. So we can skip 
	// one element (Note i = i +2) 
	for (int i = 3; i <= sqrt(n); i = i+2) 
	{ 
		// While i divides n, print i and divide n 
		while (n%i == 0) 
		{ 
			V.push_back(i); 
			n = n/i; 
		} 
	} 

	// This condition is to handle the case when n 
	// is a prime number greater than 2 
	if (n > 2) 
		V.push_back(n);
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin); // redirects standard input
	// freopen("output.txt", "w", stdout); // redirects standard output
    int n,k;
    cin >>n>>k;
    primeFactors(n);
    if (k > V.size()) cout << -1 << '\n';
    else if (k==1) cout << n << '\n';
    else{
    	int p;
    	for(int i=0;i<V.size();i++){
    		if(k!=1){
    			cout << V[i] << ' ';
    			k--;
    		}
    		if(k==1){
    			p = i;
    			break;
    		}
    // return 0;
    	}
    	int last=1;
    	for(int i=p+1;i<V.size();i++){
    			last*=V[i];
    	}
    	cout << last << '\n';
	}
}
