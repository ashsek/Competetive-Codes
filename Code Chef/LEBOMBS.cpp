#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i=0;
		cin >> n;
		int arr[n] = {0};
		string s;
		cin >> s;
		for(i=0;i<n;i++){
			if(i==0 && s[i] == '1'){
				arr[0] = 1;
				arr[1] = 1;
			}
			else if(i==n-1 && s[i] == '1'){
				arr[i] = 1; arr[i-1] = 1;
			}
			else if(s[i] == '1'){
				arr[i-1] = 1;
				arr[i] = 1; arr[i+1] = 1;
			}
			else arr[i] == 0;
		}
		int count=0;
		for(i=0;i<n;i++){
			if(arr[i] == 0) count++;
		}
		cout << count <<'\n';
	}
}