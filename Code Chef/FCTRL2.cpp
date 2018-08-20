#include<iostream>
#include<cstdio>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
cpp_int fact(int a){
    cpp_int res = 1;
    if(a==1 || a== 0){
        return 1;
    }
    while(a>1){
        res *= a;
        a -= 1;
    }
    return res;

}
int main(){
    int t;
    cin >> t;
    int i;
    for(i=0;i<t;i++){
       cpp_int z;
       int x;
        cin >> x;
        z = fact(x);
        cout << z<< endl;
    }
    return 0;
}
