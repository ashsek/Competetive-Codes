#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	    long long int n;
		cin >> n;
		long long int a[n];
		for (long long int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		long long int w=0;
		long long int* m1;
		long long int* m2;
		long long int z3;
		for (long long int i = 0; i < n; ++i)
		{
			m1 = max_element(a,a+i);
			m2 = max_element(a+i,a+n);
			z3 = min(*m1,*m2)-a[i];
			// cout << ' '<< *m1 << ' '<< *m2 << ' '<< z3 << ' '<< i << '\n';
			if (z3 >0) w += z3;
		}
		cout <<w <<'\n';
	}
	return 0;
}