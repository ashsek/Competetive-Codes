#include <bits/stdc++.h> 
using namespace std;
#define F(i,a,b) for(int i= int(a);i<=int(b);i++)
#define ll long long

int main()
{
	ll int l,r,k,f=0;
	cin>>l>>r>>k;

	F(i,0,65)
	{
		ll int x=pow(k,i);
		if(x>=l && x<=r)
		{
			cout<<x<<" ";
			f=1;
		}
		else if(x>r)
			break;
	}
	if(f==0)
		cout<<-1;
	cout<<endl;
}