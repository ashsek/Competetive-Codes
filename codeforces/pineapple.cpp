#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,s,x;
    cin >> t >> s >> x;

    ll k1, k2;
    k1 = (x-t-1)/s;
    k2 = (x-t)/s;
    if(x >= t){
    if(k1!=0 || k2!=0){
    	if(x == t+ k1*s +1 || x== t+ k2*s) cout << "YES\n";
    	else cout << "NO\n";
	}
	else{
		if(x == t) cout << "YES\n";
		else cout << "NO\n";
	}
	}
	else cout << "NO\n";

}