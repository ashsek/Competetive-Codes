#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159;

int main(){
	while(1){
		double l;
		cin >> l;
		if(l == 0){
			break;
		}
		cout << fixed;
		cout << setprecision(2) <<(l*l)/(2*pi) << '\n';
	}
}