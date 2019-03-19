#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,s,f=0;
		cin >> n >> s;
		int i,a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		int st=0,e = 0,sum=0;
		for(e=0;e<n;e++){
			sum += a[e];
			while(sum>s){
				sum -= a[st];
				st += 1;
			}
			if(sum==s){
				f = 1;
				cout << st+1 << ' '<< e+1 << '\n';
				break;
			}
		}
		if(!f){
			cout << -1<<'\n';
		}
	}
}