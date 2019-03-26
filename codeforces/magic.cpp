#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
   	long long int a;
   	cin >> a;
   	cout << setprecision(100) <<pow(2,__builtin_popcount (a)) << '\n'; 
   	// cout << __builtin_popcount (15); 
  	
  	}
   return 0; 
} 