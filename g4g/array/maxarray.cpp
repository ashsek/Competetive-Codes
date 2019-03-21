#include<bits/stdc++.h>
using namespace std;
// int max2(int i, int j){
// 	ma = -1;
// 	for(int o = i ; o < j ; o++){

// 	}
// }
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int i;
		int ar[n];
		for(i=0;i<n;i++){
			cin >> ar[i];
			// max = max(max,ar[i]);
			// if(k%i == 0){
			// 	cout << max << ' ';
			
			// 	max = -1;
			// }
		}
		for (i = 0; i < n-k+1; i++)
		{
			/* code */
			int* max;
			max = max_element(ar+i,ar+i+k);

			cout << *max <<' ';
		}
		cout << '\n';

	}
	
}