#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,i;
    cin >> a;
    for(i=0;i<a;i++){
        cin >> b >> c;
        d = b%c;
        cout << d << "\n";
    }
    return 0;
}
