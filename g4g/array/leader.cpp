#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i;
		cin >> n;
		int a[n];
		for (int i= 0; i< n; i++)
		{
			cin >> a[i];
		}
		int max=-1;
		int ar2[n],c =0;
		for(i=n-1;i>=0;i--){
			if(a[i]>=max){
				max = a[i];
				ar2[c] = max;
				c++;
			}
		}
		for(i=c-1;i>=0;i--){
			cout << ar2[i] << ' ';
		}
		cout << '\n';
	}
	
}