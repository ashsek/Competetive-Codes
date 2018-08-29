#include<bits/stdc++.h>
using namespace std;

long int calculate(int x){
    if(x==0 || x==1 || x==2|| x==3){
        return 0;
    }
    else{
        return x/2 -1 + calculate(x-2);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int b;
        cin >>b;
        cout << calculate(b) << '\n';
    }
    return 0;
}
