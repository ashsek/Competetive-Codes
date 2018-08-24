#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n,i,ones=0;
        string s;
        cin >> n;
        cin >> s;
        for(i=0;i<n;i++){
            if(s[i] == '1'){
                ones += 1;
            }
        }
        cout << (ones*(ones-1))/2 + ones << '\n';
    }
    return 0;
}
