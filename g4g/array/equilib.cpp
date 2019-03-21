#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int sum=0;
		int ar[n];
		for(int i=0;i<n;i++){
			cin >> ar[i];
			sum += ar[i];
		}
		int f=0,i,prev_sum=0;
		for(i=0;i<n;i++){
			int sum2=sum;
			sum2-=ar[i];
			if(i>=1)	prev_sum += ar[i-1];
			if (prev_sum == sum2 - prev_sum){
				cout << i+1 << '\n';
				f=1;
				break;
			}
		}
		if(!f){
			cout << -1 << '\n';
		}
	}
}