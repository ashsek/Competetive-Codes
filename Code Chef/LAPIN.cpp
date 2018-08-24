#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        l = s.size();
        int arr1[26]={0},arr2[26]={0},i;
        if(l%2==0){
            int half=l/2;
            for(i=0;i<half;i++){
                arr1[((int) s[i]) - 97] += 1;
            }
            for(i=half;i<l;i++){
                arr2[((int) s[i]) - 97] += 1;
            }
            int f=1;
            for(i=0;i<26;i++){
                if( arr1[i] != arr2[i]){
                    cout<< "NO" << '\n';
                    f = 0;
                    break;
                }
            }
            if(f) cout << "YES" <<'\n';
        }
        
        else{
        int half = l/2+1;
            for(i=0;i<half-1;i++){
                arr1[((int) s[i]) - 97] += 1;
            }
            for(i=half;i<l;i++){
                arr2[((int) s[i]) - 97] += 1;
            }
            int f=1;
            for(i=0;i<26;i++){
                if( arr1[i] != arr2[i]){
                    cout<< "NO" << '\n';
                    f = 0;
                    break;
                }

            }
            if(f) cout << "YES" <<'\n';
        }
    }
    return 0;
}
