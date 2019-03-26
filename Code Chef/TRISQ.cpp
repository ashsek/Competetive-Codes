#include<bits/stdc++.h>
using namespace std;

long int triangle(int x){
    if(x==0 || x==1 || x==2|| x==3){
        return 0;
    }
    if(x==4||x==5) return 1;
    else{
        return (x-2)/2 + triangle(x-2);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int b;
        cin >>b;
        cout << triangle(b) << '\n';
    }
    return 0;
}
