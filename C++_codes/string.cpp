#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a;
    string b;
    
    cin >>a;
    cin >> b;
    cout << a.size() <<" "<<b.size()<<endl;
    cout << a + b<< endl;
    cout <<b.front() + a.substr(1, a.size()-1) << " "<< a.front() + b.substr(1, b.size()-1); 
    return 0;
}
