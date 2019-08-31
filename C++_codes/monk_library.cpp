#include<bits/stdc++.h>
#include <algorithm>  
using namespace std;
// typedef long long ll;
#define lli long long int
#define watch(x) cout << (#x) << " is " << (x) << endl

void fastio(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
	fastio();
	lli n;
	cin >> n;
	lli a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	lli k = -1;
	lli o = 1;
	lli co=0;
	lli neg=0;
	lli as;
	// lli pro=
	for (int i = 0; i < n; ++i)
	{
		if(a[i]!= -1 && a[i] != 1){
			as = min(abs(a[i]-k), abs(a[i]-o));
			co += as;}
		if(a[i]<0) neg++;

	}
	if(neg%2 != 0) co += 2;
	cout << co << endl;

}