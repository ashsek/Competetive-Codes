#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,steps=0;
		cin >> a>> b;
		while((a & -a) != a){
			a >>= 1;
			steps++;
		}
		while(a<b){
			a <<= 1;
			steps += 1;}

		while(a > b){
			a >>= 1;
			steps += 1;}

	cout << steps << '\n';
	}
}