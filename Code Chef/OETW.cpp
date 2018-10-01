#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n,i=0;
		cin >> n;
		int a[n];
		while(i<n){
			cin >> a[i];
			i++;
		}
	}
}

/*
1 -> 1
2 -> 2

1 1 -> 1 or 2
1 2 -> 1 or 2 or 3
2 1 -> same 
2 2 -> 2 or 4

1 1 1  -> 1 or 2 or 3
1 1 2 -> 1,2,3,4
1 2 1 -> 1, 2 3 4
1 2 2 -> 1,2,3,4,5
2 1 1 -> 1,2,3,4
2 1 2 -> 1,2,5,3
2 2 1 -> 1,2,3,4,5
2 2 2 -> 2,4,6

If all 2 or all 1 then it is equal to n;
*/