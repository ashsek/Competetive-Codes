#include<bits/stdc++.h>
 
using namespace std;
 
const int maxN=20005;
int p[maxN];
 
long long add(long long n, long long x)
{
    return (n*(n-1)-(n-x)*(n-x-1))/2;
}
 
void solve()
{
    int n,k,x;
    scanf("%d%d%d",&n,&k,&x);
 
    long long ans=0;
 
    for (int i=1;i<=k;i++){
        scanf("%d",&p[i]);
        ans+=p[i];
    }
 
    if (n==k){
        printf("%lld\n",ans);
        return;
    }
 
    n-=k;
 
    sort(p+1,p+k+1);
 
    if (p[k]!=p[1]+x){
        k++;
        p[k]=p[1]+x;
        ans+=p[k];
        n--;
    }
 
    for (int i=k;i>1;i--){
        assert(p[i]!=p[i-1]);
        int dif=min(n,max(0,p[i]-p[i-1]-1));
        ans+=add(p[i],dif);
        n-=dif;
    }
 
    cout<<ans<<"\n";
    return;
}
int main()
{
    int t;
    cin>>t;
 
    while(t--)
        solve();
 
  return 0;
}
