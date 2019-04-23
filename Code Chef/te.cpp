#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll P[1000][1000]; //P[i...j] = 1 if S[i...j] is a palindrome, 0 otherwise
ll LR[1000][1000]; //LR[i...j] = #palindromes S[i...k] where i <= k <= j
ll RL[1000][1000]; //RL[i...j] = #palindromes S[k...j] where i <= k <= j
ll D[1000][1000]; //D[i...j] = #pairs S[i...k] S[w...j] where 1<=k<w<=j such that S[i...k]S[w...j] is a palindrome
ll n;
string S;

void computeP(){
    for(int j=0;j<n;j++){
        for(int i=j;i>=0;i--){
            if(i == j) P[i][j] = 1;
            else if(i > j) P[i][j] = 0;
            else{
                if(S[i] == S[j]){
                    if(abs(j-i) == 1) P[i][j] = 1;
                    else P[i][j] = P[i+1][j-1];
                }
                else P[i][j] = 0;
            }
        }
    }
}

void computeLR(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j == 0){
                LR[i][j] = P[i][j];
            }
            else{
                LR[i][j] = P[i][j] + LR[i][j-1];
            }
        }
    }
}

void computeRL(){

    for(int j=0;j<n;j++) {
        for (int i = n - 1; i >= 0; i--) {
            if(i == n-1){
                RL[i][j] = P[i][j];
            }
            else{
                RL[i][j] = P[i][j] + RL[i+1][j];
            }
        }
    }

}

void print(ll t[1000][1000]){
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<S[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"  ";
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<" ";
        for(int j=0;j<n;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(void){

    cin>>S;
    n = S.size();
    computeP();
    computeLR();
    computeRL();
    ll res = 0;
    for(int j=0;j<n;j++){
        for(int i=j;i>=0;i--){
            if(i == j)
                D[i][j] = 0;
            else if(i > j)
                D[i][j] = 0;
            else{
                if(S[i] != S[j]) D[i][j] = 0;
                else{
                    D[i][j] = 1 + D[i+1][j-1] + LR[i+1][j-1] + RL[i+1][j-1];
                }
            }
            res += D[i][j];
        }
    }
    cout<<res<<endl;
    for(int i=0;i<n;i++)
    	{for
    	(int j =0;j<n;j++){cout << P[i][j] << ' ';} cout << '\n';}
        cout << '\n';
        for(int i=0;i<n;i++)
        {for
        (int j =0;j<n;j++){cout << LR[i][j] << ' ';} cout << '\n';}

cout << '\n';
        for(int i=0;i<n;i++)
        {for
        (int j =0;j<n;j++){cout << RL[i][j] << ' ';} cout << '\n';}

    return 0;
}