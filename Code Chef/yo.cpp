#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int test,i,ValueOfCoin,j,temp,difference=0,k=0,sum=0;
    vector <int> coins;
    vector <int> differences;
    vector < vector <int> > vec;
    cout<<"Input Number of Test cases ";
    cin>>test;
    int NumberOfCoins;
    if(test>=1 && test<=100){ 
        while(test--){
            cout<<"Input number of coins ";
            cin>>NumberOfCoins;
            if(NumberOfCoins>=2 && NumberOfCoins<=100000){
                for(i=0;i<NumberOfCoins;i++){
                    cout<<"value  of  coin:  ";
                    cin>>ValueOfCoin;
                    if(ValueOfCoin>=1 && ValueOfCoin<=1000000){
                        sum=sum+ValueOfCoin;
                        if(sum<=2000){
                            coins.push_back(ValueOfCoin);
                        } 
                    }
                    else{ continue; }
                }
            }
            else{ continue; }

        if(coins.size()==1){
            coins.clear();
            continue;
        }
        else{
            vec.push_back(coins);
            for(i=0;i<coins.size()-1;i++){
                difference=abs(vec[k][i]-vec[k][i+1]);
                differences.push_back(difference);
            }
            if(NumberOfCoins>=2 && coins.size()>=2){
                difference=abs(vec[k][0]-vec[k][NumberOfCoins-1]);
                differences.push_back(difference);

                for(i=0;i<coins.size();i++){
                    for( j=0;j<coins.size()-i-1;j++){
                        if(differences[j]>differences[j+1]){
                            temp=differences[j+1];
                            differences[j+1]=differences[j];
                            differences[j]=temp;
                        }
                    }
                }
            }
            cout<<"min. difference is "<<differences[0]<<endl;
            differences.clear();
            coins.clear();
            k=k+1;
        }
    }
}
return 0;
}
