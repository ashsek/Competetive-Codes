#include<bits/stdc++.h>
using namespace std;
const int N = 2000;

int ar[N];

int fimi(int n){
	if (ar[n] != -1) return ar[n];
	if (n == 0) return 0;
	if (n==1) return 2; 
	int k = n/2;
	ar[n] = k + (n-k+1) + fimi(n/2) + fimi(n-(n/2)-1);
	return ar[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0;i<N;i++){
    	ar[i] = -1;
    }
    ar[0] = 0;
    ar[1] = 2;
    // freopen("input.txt", "r", stdin); // redirects standard input
	// freopen("output.txt", "w", stdout); // redirects standard output
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int mi = fimi(n);
		int ma = ((n+1)*(n+2)/2) - 1;
		if(m < mi) cout << -1 << '\n';
		else if(m>ma) cout << m-ma << '\n';
		else cout << 0 << '\n';
    // return 0;
	}
}