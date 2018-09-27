#include<bits/stdc++.h>

using namespace std;

int merge(arr1, arr2){


}

int main(){
    int n1,n2,i;
    //first array
    cin >> n1;
    int a1[n1];
    for( i = 0; i < n1;i++){
        cin >> a1[i]; 
    }
    //second array
    cin >> n2;
    int a2[n2];
    for(i=0;i<n2;i++){
        cin >> a2[i]; 
    }
    int j=0,k=0;
    
    int a3[n1+n2];
    
    for(i=0;i<n1+n2;i++){
        if(k >= n2){
            a3[i] = a1[j];
            j += 1;
        }
        else if(j >= n1){
            a3[i] = a2[k];
            k +=1;
        }
        else if(a1[j] < a2[k]){
            a3[i] = a1[j];
            j+= 1;
        }
        else if(a1[j] >= a2[k]){
            a3[i] = a2[k];
            k += 1;
        }
    }

    for(i=0;i<n1+n2;i++){
        printf("%d ", a3[i]);
    }
}