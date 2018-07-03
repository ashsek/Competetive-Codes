#include <iostream>
using namespace std;
int main() {
	// your code goes here
	while(true){
		int i;
		cin >> i;
		if(i==0){
			break;
		}
		else{
			int y;
			y = (i*(i+1)*(2*i+1))/6;
			cout<< y<<endl;
		}
	}
	return 0;
}