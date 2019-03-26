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
  int res;
  const char *str[2] = {"NO", "YES"};
 
  scanf("%d",&T);
  while(T--){
    scanf("%d%d",&X,&Y);

    res = 0; // set the answer = NO
    if(Y<=0 && Y%2==0 &&    Y<=X && X<=-Y+1) res=1; // on moves toward East
    if(X>0  && X%2==1 && -X+1<=Y && Y<=X+1 ) res=1; // on moves toward North
    if(Y>0  && Y%2==0 &&   -Y<=X && X<=Y-1 ) res=1; // on moves toward West
    if(X<0  && X%2==0 &&    X<=Y && Y<=-X  ) res=1; // on moves toward South
 
    printf("%s\n",str[res]);
  }
 
  return 0;
}