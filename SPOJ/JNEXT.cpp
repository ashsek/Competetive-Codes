#include <bits/stdc++.h>
using namespace std;
int main() {
   int t,n;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d",&n);   
      int a[n];
      for(int i=0; i<n ; ++i)
         scanf("%d",&a[i]);
      if(next_permutation(a,a+n))
         for(int i=0; i<n ; ++i)   
            printf("%d",a[i]);
      else
         printf("-1");
      printf("\n");
   }
   return 0;
}
