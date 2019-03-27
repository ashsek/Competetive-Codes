#include<bits/stdc++.h>
using namespace std;

long long int paper(long long int a, long long int b){
	if(a==b) return 1;
	return 1+ paper(min(a,b), max(a,b) - min(a,b));
}
// const long long int N = 1e12+5;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int a,b;
    cin >> a >> b;
    long long int co = 0,c;
    while(a>0 && b >0){
    	if(a>b){
    	co += a/b;
    	a = a%b;
    	}
    	else{
    		co += b/a;
    		b = b%a;
    	}
    }
    cout << co << '\n';
}