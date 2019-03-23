#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    	long long int c,d,l;
    	cin >> c >> d >> l;
    	long long int ma,mi;
    	if (l%4 != 0) {
    		cout << "no" << '\n';
    	}
    	else{
    		ma = (c+d)*4; 
    		long long int k = 0;
    		// max(k,c-2*d);
    		mi = (d + max(k,c-2*d))*4;
    		if(l >= mi && l <= ma){
    			cout << "yes" << '\n';
    		}
    		else cout << "no" << '\n';
    	}
    }
    return 0;
}