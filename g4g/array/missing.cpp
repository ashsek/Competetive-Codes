#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int z,sum = 0;
		for(int i=0;i<n-1;i++){
			cin >> z;
			sum += z;
		}
		cout << n*(n+1)/2 - sum << '\n';
	}
}