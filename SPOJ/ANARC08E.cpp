#include<bits/stdc++.h>
#define lli     long long int
#define test()  lli t;cin>>t;while(t--)
using namespace std;
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int T, X, Y;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  while(1){
    int a,b;
    cin >> a >> b;
    if(a==-1 && b == -1){
      break;
    }
    if(a==1 or b==1){
      cout << a << '+' << b << '=' << a+b;
    }
    else{
         cout << a << '+' << b << "!=" << a+b;
    }
    cout << '\n';
  }
  return 0;
}