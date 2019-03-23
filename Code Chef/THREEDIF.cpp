#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long int a[3];
		for(int i=0;i<3;i++){
			cin >> a[i];
		}
		sort(a,a+3);
		long long int z,k=1000000007;
		// z = ((a[0]%k)*(a[1]%k)*(a[2]%k))%k - ((a[0]%k)*(min(a[1],a[2])%k))%k - ((a[1]%k)*min((a[0]%k),(a[2]%k)))%k - ((a[2]%k)*(min(a[0],a[1])%k))%k + (2*(min(min(a[0],a[1]),a[2])%k))%k;
		z = (a[0] % k) * ((a[1] - 1) % k) % k * ((a[2] - 2) % k) % k;
		cout << z%k << '\n';
	}
}