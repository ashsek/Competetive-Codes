#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
	lli t,i=1,a[3];
	cin >> t;
	while(t--){
		cin >> a[0] >> a[1] >> a[2];
		sort(a,a+3);
		if(pow(a[0],2) + pow(a[1],2) == pow(a[2],2)) cout << "Case "<<i++ <<": " << "yes" << '\n';
		else cout << "Case "<<i++ <<": " << "no" << '\n';
	}

}