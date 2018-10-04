#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i=0,ny=0,ni=0,y = -1;
		string s;
		cin >> n >> s;
		for(i=0;i<n;i++){
			if(s[i] == 'Y'){
				cout << "NOT INDIAN"  << '\n';
				y = 1;
				break;
			}
			if(s[i]=='I'){
				cout << "INDIAN" << '\n';
				y = 1;
				break;
			}
		}
		if(y == -1){
		cout << "NOT SURE" << '\n';
	}
	}
}