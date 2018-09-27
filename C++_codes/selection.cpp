#include<bits/stdc++.h>

using namespace std;

int main(){
    int y[6] = {5,2,1,4,6,3};
    int i=0,j=0;
    int min,index;
    int k;
    for(i=0;i<6;i++){
        index = i;
        min = y[i];
        for(j=i+1;j<6;j++){
            if (min > y[j]){
                min = y[j];
                index = j;
            }
        }
        k = y[i];
        y[i] = y[index];
        y[index] = k;
    }
    for(i=0;i<6;i++){
        printf("%d",y[i]);
    }
    return 0;
}
