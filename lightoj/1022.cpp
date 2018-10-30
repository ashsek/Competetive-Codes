#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int i = 1;
	double a,b;
	cin >>t;
	while(t--){
		cin >> a;
		b = 4*a*a - 2*acos(0.0)*a*a + 0.000000001;
						// cout << "Case "<<i++<<": "<< b<< '\n';

		cout << "Case "<<i++<<": "<<fixed<<setprecision(2)<< b<< '\n';
	}	
}