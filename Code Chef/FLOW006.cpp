#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t,z,res;
    cin >> t;
    while(t>0){
        res = 0;
        cin >> z;
        while(z>=1){
            res += z%10;
            z = z/10;
        }
        cout << res << "\n";
        t-=1;
    }
    return 0;

}
