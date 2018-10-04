#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin >> t;
	while(t--){
	long long int n,i=0;
		cin >> n;
		long long int n2 = n;
		long long int arr[n];
		bool y = true;
		while(n2--){
			cin >> arr[i];
			i+= 1;
		}
		if(n%2 != 0){
			cout << "NO"<<'\n';
		}
		else{
			i=0;
			while(i<n/2){
				if(arr[i]!=-1 && arr[i+n/2]!=-1){
	    			if(arr[i]!=arr[i+n/2])
	    				y=false;
	    		}
	    		else if(arr[i]==-1 && arr[i+n/2]==-1){
	    			arr[i]=arr[i+n/2]=1;
	    		}
	    		else if(arr[i]==-1){
	    			arr[i]=arr[i+n/2];
	    		}
	    		else{
	    			arr[i+n/2]=arr[i];
	    		}
	    		i++;
			}
			if(y){
			 	i=0;
				cout << "YES" << '\n';
				while(i<n){
					cout << arr[i] << " ";
					i++;
				}
				cout << '\n';
			}
			else {cout << "NO" << '\n';}

		}
	}
}