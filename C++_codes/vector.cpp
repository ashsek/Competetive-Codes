#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int i;
    cin >> i;
    int j;
    for(j=0;j<i;j++){
        int u;
        cin >> u;
        v.push_back(u);
    }
    sort(v.begin(),v.end());
    for(j=0;j<i;j++){
        cout << v[j] << " "; 
    }
    
    return 0;
}

