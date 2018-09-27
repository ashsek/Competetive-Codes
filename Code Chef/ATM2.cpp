#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,i=0;
        cin >> n >> k;
        long long int a[n];
        string s = "";
        while(i < n){
            cin >> a[i];
            i++;
        }
        for(i=0; i<n ; i++){
        	if(a[i] <= k) {k -= a[i];
        		s += "1";}
        	else s += "0";
        }
        cout << s << '\n';
    }
}
