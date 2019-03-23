#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin >> t;
    // while(t--){
    long long int n;
    cin >> n;

    long long int root;
    root = (-1 + pow(1+8*n,0.5))/2;
    // cout << "root" << root << endl;
    long long int num;
    num = ((root*root) + root)/2;
    // cout << "num" << num << endl;
    if(n-num > 0)
    cout << n - num << '\n';
	else cout << root << '\n';
}