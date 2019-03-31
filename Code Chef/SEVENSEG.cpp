#include<bits/stdc++.h>
 
using namespace std;
 
int mask[10]={119, 36, 93, 109, 46, 107, 123, 37, 127, 111};
int n;
int x[11], y[11];
 
int check(int msk)
{
    for (int i=1;i<=n;i++)
    {
	int bed = 0;
	for (int j=0;j<7;j++)
	if ((mask[x[i]]&(1<<j)) && !(msk&(1<<j))) bed++;
	if (bed!=y[i]) return false;
    }
 
     return true;
}
void solve()
{
    assert(n<=10);
    cin>>n;
 
    for (int i=1;i<=n;i++){
	cin>>x[i]>>y[i];
	assert(x[i]>=0 && x[i]<=9);
	assert(y[i]<=7 && y[i]>=0);
 
	for (int j=i-1;j>0;j--)
	    assert(x[i]!=x[j]);
    }
 
    int ok = 0;
    int mini = 10;
    int maxi = 0;
    for (int i=0;i<1<<7;i++)
	if (check(i)){
	    if (!ok)
	    {
	        ok = 1;
	        mini = __builtin_popcount(i);
	        maxi = mini;
	    } else
	    {
	        mini = min(mini, __builtin_popcount(i));
	        maxi = max(maxi, __builtin_popcount(i));
	    }
	}
 
    if (!ok) printf("invalid\n"); else
    printf("%d %d\n",mini,maxi);
}
 
int main()
{
    int t;
 
    cin>>t;
    while(t--)
	solve();
 
    return 0;
}