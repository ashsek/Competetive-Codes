#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <conio.h>
#include <set>
 const double pi= acos(-1.0);
 using namespace std;
 int main(){
    long long n;
    cin>>n;
    long long b=n;
	if(b%2==0){
		cout<<n/2;
    }
   else{
	cout<<((n/2)+1)*-1;
   }//1000000000
 cout<<endl;
 return 0;
}