#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        long long int n,c;
        cin >> n >> c;
        long long int arr[n],sum;
        int i;
        for(i=0; i<n; i++){
            cin >> arr[i];
        }
        sum = accumulate(arr,arr+n,0);
       // cout << sum << endl;
        if (c>=sum){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }

    }
    return 0;
}
