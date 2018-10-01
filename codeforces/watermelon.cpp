#include<bits/stdc++.h>
int main(){
	int t;
	cin >>t;
	while(t--){
		long long int n,m,q;
		cin >> n >> m >> q;
		long long int y_max = 0, y_min = 9999999999;
		while(q--){
			long long int x,y,x1,x2;
			cin >> x >> y;
			if (y < y_min) y_min = y;
			if(y > y_max) y_max = y;
		}
		cout << y_max - y_min << '\n';
	}
}