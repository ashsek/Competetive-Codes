#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize "-O3"

#define lli     long long int


const lli N = 1e5+5;
lli light[N];
lli n,l;

bool check(lli d){
	lli arr[l+1];
	for (lli i = 0; i < l; ++i)
	{
		arr[i] = light[i];
	}
	for (lli i = 0; i < l; ++i)
	{
		lli o =0;
		if (arr[i]  == 1){
			arr[min(i-d,o)] = 1;
			arr[max(l,i+d+1)] = -1;
		}
	}
	for (lli i = 1; i < l; ++i)
	{
		arr[i] = arr[i]+arr[i-1];
	}
	for (lli i = 0; i <l; ++i)
	{
		if (arr[i] == 0) return false;
	}
	return true;
}


float binary(){
	lli low=0;
	lli high=15;
	float mid;
	while(low<high){
		mid = (low+high)/2;
		cout << mid << '\n' << low << 'h' <<high << '\n';
		if (check(mid)){
			low = mid;
		}
		else {
			high = mid;
		}
	}
	return mid;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> l;
    cout << 'y';
    lli a[n];
    cout << 'n'<<n << '\n';
    for (lli i = 0; i < n; ++i)
    {

    	cin >> a[i];
    }
    cout << 'y';
    for (lli i = 0; i <= l; ++i)
    {
    	light[i] = 0;
    }
    for (lli i = 0; i < n; ++i)
    {
    	light[a[i]] = 1;
    }
    cout << 'o';
	float z;
	z = binary();
	cout << z << '\n';
    return 0;
}
