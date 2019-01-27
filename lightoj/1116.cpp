#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t,i=1;
	cin >> t;
	while(t--){
		long long int w,j,n,t=0;
		cin >> w;
		for(j=pow(w,0.5)+1;j>=2;j--){ //Add the checking for odd/even numbers
			n = w/j;
			if(n*j == w){
				printf("Case:%lld: %lld %lld\n",i,n,j);
				t=1;
				break;
			}
		}
		if(!t)
			printf("Case:%lld: Impossible\n",i);
		i++;
	}
}