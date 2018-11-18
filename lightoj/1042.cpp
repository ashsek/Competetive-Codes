// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // 	int t;
// // 	int i = 1;
// // 	int a,b;
// // 	cin >>t;
// // 	while(t--){
// // 		cin >> a>>b;
// // 		cout << "Case "<<i++<<": "<< a+b << '\n';
// // 	}	
// // }

// #include<bits/stdc++.h> 
  
// using namespace std; 
  
// typedef unsigned long long int uint_t;
// typedef long long int lli; 
// lli snoob(lli x) 
// { 
  
//   lli rightOne; 
//   lli nextHigherOneBit; 
//   lli rightOnesPattern; 
  
//   lli next = 0; 
  
//   if(x) 
//   { 
//     rightOne = x & -(signed)x; 

//     nextHigherOneBit = x + rightOne; 

//     rightOnesPattern = x ^ nextHigherOneBit; 
  

//     rightOnesPattern = (rightOnesPattern)/rightOne; 
  

//     rightOnesPattern >>= 2; 
  
//     next = nextHigherOneBit | rightOnesPattern; 
//   } 
  
//   return next; 
// } 
  
// int main() 
// { 
//   int t,i=0;
//   cin >> t;
//   while(t--){
//   	lli x;
//   	cin << x;
//   	cout<< "Case :"<<i++ << " "<<snoob(x)<<'\n'; 
//   }
// } 
#include<bits/stdc++.h>
using namespace std; 

typedef unsigned int uint_t; 
typedef long long int lli;
// this function returns next higher number with same number of set bits as x. 
uint_t snoob(uint_t x) 
{ 

uint_t rightOne; 
uint_t nextHigherOneBit; 
uint_t rightOnesPattern; 

uint_t next = 0; 

if(x) 
{ 
	rightOne = x & -(signed)x; 
	nextHigherOneBit = x + rightOne; 
	rightOnesPattern = x ^ nextHigherOneBit; 
	rightOnesPattern = (rightOnesPattern)/rightOne; 
	rightOnesPattern >>= 2; 
	next = nextHigherOneBit | rightOnesPattern; 
} 

return next; 
} 

int main() 
{ 
	int t,i=1;
	cin >> t;
	while(t--){
		lli x;
		cin >> x;
		cout<<"Case "<<i++<<": "<<snoob(x)<<"\n"; 
} }
