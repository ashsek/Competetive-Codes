#include<bits/stdc++.h>
using namespace std;
/*There are N horses in the stable. The skill of the horse i is represented by an integer S[i]. The Chef needs to pick 2 horses for the race such that the difference in their skills is minimum*/
int main(){
    long long int t,n,i=0;
    cin >> t;
    while(t--){
        cin >> n;
        long long int h[n],min = INT_MAX;
        for(i=0;i<n;i++){
            cin >> h[i];
        }
        sort(h,h+n);
        for(i=0;i<n-1;i++){
            if (h[i+1] - h[i] <= min)
                min = h[i+1]-h[i];
        }
        cout << min<< '\n';

    }    return 0;}
