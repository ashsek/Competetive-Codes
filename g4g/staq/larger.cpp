#include <bits/stdc++.h>
using namespace std;

int main() {
	    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    
	    vector<int> ans(n);
	    stack<int> s;
	    
	    // Push 1st element (index of 1st element to stack)
	    s.push(0);
	    
	    int cur;
	    
	    for(int i=1;i<n;i++){
	        
	        cur=v[i];
	        
	        // See if current element can be next larger element for any element in stack
	        while(!s.empty() && cur>v[s.top()]){
	            
	            // Found next larger element for s.top
	            ans[s.top()]=cur;
	            // Pop from stack
	            s.pop();
	            
	        }
	        // Now push current element index to stack
	        s.push(i);
	        
	    }
	    
	    // For remaining elements in stack ans is -1
	    while(!s.empty()){
	        
	        ans[s.top()]=-1;
	        s.pop();
	    }
	    
	    // Print the ans
	    for(int i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<'\n';
	}
	return 0;
}