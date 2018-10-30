#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef int in ;
typedef unsigned long long ull ;

int main()
{
    int t;
    cin >> t;
    int cnt =1 ;
    while(t--)
    {
        int a,b ;
        cin >> a>> b;
        if(a>b)
            swap(a,b) ;
        int x =0 ;
        if(a==1 ||b==1)
          x = a*b ;

          else if(a==2 ||b==2)
          {
              int z =0 ;
              if(a==b)
                x = a*b ;
              else if(b%2==1)
              {
                  x = b+1 ;
              }
              else if(b%2==0)
                {
                    int z =0 ;
                    z = b/2 ;
                    if(z%2==0)
                    {
                       x = (a*b)/2 ;
                    }
                    else
                        x = a+b ;
                }

          }
          else
            x = ((a*b)+1)/2 ;
          printf("Case %d: %d\n",cnt++,x) ;

    }
    return 0;
}