#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int i = 1;
	int a,b,n;
	cin >>t;
	while(t--){
		cin >> n;
		int sand=0;
		while(n--){
			cin >> a;
			if(a>0) sand+= a;
		}
		cout << "Case "<<i++<<": "<< sand << '\n';
	}	
}