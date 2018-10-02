#include<bits/stdc++.h>
using namespace std;
const int MX = (1<<20);
int n , T , K;
int main(){
    cin>>T;
    while(T--){
        cin>>n>>K;
        int sum = 0;
        for(int j = 1 ; j <= n ; j++){
            int x;
            scanf("%d",&x);
            if(x == 0) continue;
            if(j % 2){
                if(sum < 0) --sum;
                else ++sum;
            }
            else{
                if(sum < 0)++sum;
                else --sum;
            }
        }
        if(abs(sum) >= K) puts("1");
        else puts("2");
    }
}