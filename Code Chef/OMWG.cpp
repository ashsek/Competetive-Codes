#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    while(t--){
    	int n,m;
    	cin >> n >> m;
    	int a[n][m],i2=0;
    	for (int i = 0; i < n; ++i)
    	{
    		i2 = i%2;
    		for(int j = i2; j<m;j+=2){
    			a[i][j] = 1;
    		}
    	}
    	int count = 0;
       	for (int i = 0; i < n; ++i)
    	{
    		for(int j = 0; j<m; ++j){
    			if(n%2==0){
	    			if (i==0){
	    				if(a[i][j] != 1 && j != m-1){
	    					count += 3;
	    				}
	       				if(a[i][j] != 1 && j == m-1){
	    					count += 2;
	    				}
	    			}
	    			else{
	    				if(a[i][j] != 1){
	    					if(j==0 or j==m-1){
	    					count += 3;
	    				}
	    					else count += 4;
	    				}
	    			}
    			}
    			else{
   	    			if (i==0 || i== n-1){
	    				if(a[i][j] != 1 && j != m-1){
	    					count += 3;
	    				}
	       				if(a[i][j] != 1 && j == m-1){
	    					count += 2;
	    				}
	    			}
	       			else{
	    				if(a[i][j] != 1){
	    					if(j==0 or j==m-1){
	    					count += 3;
	    				}
	    					else count += 4;
	    				}
	    			}

    			}

    		}
    	}
    	cout << count << '\n';

    }
    return 0;
}