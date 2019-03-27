#include<bits/stdc++.h>
#define lli     long long int
#define test()  lli t;cin>>t;while(t--)
using namespace std;
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

lli su(lli n){
	lli s = 0;
	while(n){
		s+= n%10;
		n = n/10;
	}
	return s;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli n,co=0;
    cin >> n;
    for (lli i = n-97; i <=n; i++)
    {
       	if(i + su(i) + su(su(i)) == n){
    		co += 1;
    	}
    }
    cout << co << '\n';
  }