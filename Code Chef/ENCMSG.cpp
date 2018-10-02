#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i=0;
		cin >> n;
		string s;
		cin >> s;
		if(n%2==0){
			for(i=0;i<n;i+=2){
				swap(s[i],s[i+1]);
				s[i] = 'z' - s[i] + 'a';
				s[i+1] = 'z' - s[i+1] + 'a';

			}
		}
		else{
			for(i=0;i<n-1;i+=2){
				swap(s[i],s[i+1]);
				s[i] = 'z' - s[i] + 'a';
				s[i+1] = 'z' - s[i+1] + 'a';
			}
			s[n-1] = 'z' - s[n-1] + 'a';
		}
		cout << s <<'\n';
	}
}