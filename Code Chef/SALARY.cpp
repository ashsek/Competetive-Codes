#include<bits/stdc++.h>
using namespace std;

int check(long long int w[],int len){
    int i;
    int x = w[0];
    for(i=0;i<len;i++){
        if( x != w[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,i;
        cin >> n;
        long long int w[n];
        for(i=0;i<n;i++){
            cin >> w[i];
        }
        int j;
        int step = 0;
        while(check(w,n)){
             j = distance(w, max_element(w, w + n));
            for(i=0;i<n;i++){
                if(i==j){
                //yolo
                }
                else{
                    w[i] +=1;
                }
            }
            step += 1;
        }
        cout << step << '\n';
    }
    return 0;
}
