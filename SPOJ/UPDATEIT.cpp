#include<bits/stdc++.h>
#define lli     long long int
#define test()  lli t;cin>>t;while(t--)
using namespace std;
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test(){
    	lli n,u;
    	cin >> n >> u;
    	lli a[n+1];
    	for (lli i = 0; i < n+1; ++i)
    	{
    		a[i] = 0;
    	}
    	for (lli i = 0; i < u; ++i)
    	{
    		lli l,r,v;
    		cin >> l >> r >> v;
    		a[l] += v;
    		a[r+1] -= v;
    	}
    	for (lli i = 1; i < n+1; ++i)
    	{
    		a[i] = a[i]+ a[i-1];
    	}
    	lli q;
    	cin >> q;
    	for (lli i = 0; i < q; ++i)
    	{
    		lli z;
    		cin >> z;
    		cout << a[z]<<'\n';
    	}
    }
 }