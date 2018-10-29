#include<bits/stdc++.h>
#define max 100000
using namespace std;
 
int main()
{
 
   long long int n, h, a, t, count=1;
   cin >> t;
   while(t--)
   {
       cin >> n; 
       h = ceil(sqrt(n));
       a = n-(h-1)*(h-1);
       if(h%2 == 0)
       {
           if(a > h){
           		printf("Case %lld: %lld %lld\n", count++, h, (1+h*h-n));
           	}
           else{
				 printf("Case %lld: %lld %lld\n", count++, a, h);
				}
       }
       else
       {
           if(a > h){

           			 printf("Case %lld: %lld %lld\n", count++, (1+h*h-n), h);
           			}
           else printf("Case %lld: %lld %lld\n", count++, h, a);
       }
   }
    return 0;
}