#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin); // redirects standard input
	freopen("output.txt", "w", stdout); // redirects standard output
	int n,m,i=0;
	cin >> n >> m;
	if(n>m) i=0;
	else i=1;
	while(n>0 || m>0){
       if(n==0){
       		cout << 'G';
       		m--;
       		continue;
       }
       if(m==0){
       		cout << 'B';
       		n--;
       		continue;
       }
       // if(n>m){
       // 		i=1
       // }
       if(i%2==0){
       	cout << 'B';
       	n--;
       }
       else {cout << 'G'; m--;}
       i++;
    }
    cout << '\n';
    return 0;
}