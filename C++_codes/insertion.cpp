#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int y[n];
    int i=0,j=0;
    int mi = 100;
    int ma = 0;
    for(i=0;i<n;i++){
        cin >> y[i];
        if(y[i] < mi) mi = y[i];
        if(y[i] > ma) ma = y[i];
    }
    printf("yo");
    int l = mi - ma;
    printf("yo2");
    int c[l];

    for(i = 0; i < l; i++){
        c[i] = 0;
    }
    for(i=0;i<l;i++){
        c[y[i]-1] += 1;
    }

    for(i=0;i<l;i++){
        if(c[i] > 0){
            while(c[i]--){
                printf("%d",i+1);
            }
        }
    }
    return 0;
}
