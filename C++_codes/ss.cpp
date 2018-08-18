#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);   //traverses through string 
    vector<int> result;
    char ch;
    int tmp;
    while(ss >> tmp) {      //checks if ss and temp have same int value and if true assigns it to temp
        result.push_back(tmp);
        ss >> ch;           //??
    }
    return result;
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
