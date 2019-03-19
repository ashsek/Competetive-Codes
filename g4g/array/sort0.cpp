#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ar[3]={0},z;
		for(int i=0;i<n;i++){
			cin >> z;
			ar[z]++;
		}
		// for (int i = 0; i <= 2; ++i)
		// {
		// 	cout << ar[i];
		// }
		for(int i=0;i<=2;i++){
			while(ar[i]!=0){
				cout << i << ' ';
				ar[i]-=1;
			}
		}
		cout << '\n';
	}
}