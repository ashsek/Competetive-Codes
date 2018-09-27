#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long int i=0;
		long long int n;
		cin >> n;
		long long int a[n];
		while(i < n){
			cin >> a[i];
			i++;
		}
		int record[n] = {0};
		for(i=0;i<n;i++){
			if(a[i]<=n){
				record[a[i]-1] = 1;
			}
		}
		int count = 0;
		for(i=0;i<n;i++){
			if(record[i] == 0) count++;
		}
		cout << count << '\n';
	}
}