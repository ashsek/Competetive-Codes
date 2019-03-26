// #include<bits/stdc++.h>
// using namespace std;

// int suluck(long long int n){
// 	int a[2]={0},z;
// 	long long int k = floor(log10(n)+1);
// 	if(k%2!=0) return 0;
// 	while(n){
// 		z = n%10;
// 		n = n/10;
// 		if(z==4) a[0]++;
// 		if(z==7) a[1]++;
// 		if(z!=4){
// 			if(z!=7){			
// 		 return 0;}}
// 		if(z!=7){
// 			if(z!=4){			
// 		 return 0;
// 		}
// 	}
// 	}
// 	if(a[0]==a[1]) return 1;
// 		return 0;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     // freopen("input.txt", "r", stdin); // redirects standard input
// 	// freopen("output.txt", "w", stdout); // redirects standard output
//     long long int n;
//     cin >> n;
//     while(!suluck(n)){
//     	n++;
//     }
//     cout << n << '\n';
//     return 0;
// }
#include <iostream>

using namespace std;
long long mn  =1e12 ;
long long  x ;

void lucky(long long a  , int c ){
    if(a > 1e11) return ; 
	// cout << a << ' ' << c << endl;
    if(a>=x &&  c==0){
        mn = min( mn , a) ;
    }    
    lucky( a * 10 + 4 , c+1 );
    lucky( a * 10 + 7 , c-1 ); 
    
}
int main() {
    cin>>x;
    lucky(0,0) ;
    cout<<mn;
    return 0;
}