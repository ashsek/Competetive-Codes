#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,d;
    cin >> n;
    cin >> d;
    long long int l[n],i;
    for(i=0;i<n;i++){
        cin >> l[i];
    }
    sort(l,l+n);
    long long int c =0;
    for(i=0;i<n;){
    if(l[i+1]-l[i] <=d){
            c += 1;
            i +=2;
        }
    else i+= 1;
    }
    cout << c<<'\n';
    return 0;
}
