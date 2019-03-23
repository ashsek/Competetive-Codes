#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int z;
		if(k<=n){
		for (int i = 0; i < n-k; i+=k)
		{
// 			cout << i << ' ' << k << ' '<<n << '\n';
			reverse(a+i,a+k+i);
			z = i;
		}
		}
		else{
		    reverse(a,a+n);
		}
		if(z<n-1){
		    z+=k;
    		reverse(a+z,a+n);
		}
		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << ' ';
		}
		cout << '\n';
	}
}