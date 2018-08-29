#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;
        long long int w[n];
        int i;
        for(i=0;i<n;i++){
            cin >> w[i];
        }
        sort(w,w+n);
        long long int s = 0;
        for(i=0;i<k;i++){
            s+= w[i];
        }
        cout << abs(accumulate(w, w+n, 0) - 2*s);
    }
    return 0;
}
