/*
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
*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  while (t) {
    /* code */
    long long int length,minimum=10001,sum=0;
    std::cin >> length;
    int input_array[length];
    for (int i = 0; i < length; i++) {
      std::cin >> input_array[i];
      if (input_array[i]<minimum) {
        /* code */
        minimum=input_array[i];
      }
      sum+=input_array[i];
    }
    std::cout << sum-(length*minimum) << '\n';
  t--;
}

  return 0;
}
