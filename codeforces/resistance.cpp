#include <bits/stdc++.h> 
using namespace std; 
  
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  cout.tie(NULL);
  
  long long int i,j,k,l,a,b;
  cin>>a>>b;
  l=0;
  while(a>0&&b>0){
    if(a>=b){
      l+=(a/b);
      a=a%b;
    }
    else {
      l+=(b/a);
      b=b%a;
    }
  }
  cout<<l;

  return 0;
}