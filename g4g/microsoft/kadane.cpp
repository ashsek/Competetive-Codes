
#include<bits/stdc++.h> 

using namespace std; 

#define lli     long long int

lli maxSubArraySum(lli a[], lli size) 
{ 
	lli max_so_far = INT_MIN, max_ending_here = 0; 

	for (lli i = 0; i < size; i++) 
	{ 
		max_ending_here = max_ending_here + a[i]; 
		if (max_so_far < max_ending_here) 
			max_so_far = max_ending_here; 

		if (max_ending_here < 0) 
			max_ending_here = 0; 
	} 
	return max_so_far; 
} 


int main() 
{ 
	lli t;
	cin >> t;
	while(t--){
		lli n;
		cin >> n;
		lli a[n];
		for (lli i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		lli max_sum = maxSubArraySum(a, n);
		cout << max_sum << '\n';  
	}
	// int n = sizeof(a)/sizeof(a[0]); 
	return 0; 
} 
