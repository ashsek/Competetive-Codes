#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		int max_tot = INT_MIN;
		int max_yet = 0;
		for(i=0;i<n;i++){
			max_yet += a[i];
			if(max_yet > max_tot){
				max_tot = max_yet;
			}
			if(max_yet<0) max_yet = 0;
		}
		cout << max_tot << '\n';
	}
}