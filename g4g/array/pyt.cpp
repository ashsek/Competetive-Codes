#include<bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        
        int n = 0;
        cin >> n;
    
        vector<int> inputs(n);
        for (int i=0;i<n;i++)
        {
            int temp = 0;
            cin >> temp;
            element = temp * temp;
        }
        
        sort(inputs.begin(), inputs.end());
        
        bool found = false;
        
        for (int i = 0 ; i < n && found == false; i++)
        {
            for (int j = i + 1 ; j < n && found == false; j ++)
            {
                int expected = inputs[i] + inputs[j];
                found = binary_search(next(inputs.begin(), j + 1), inputs.end(), expected);
                if (found)
                {
                    break;
                }
            }
        }
        
        cout << (found ? "Yes" : "No") << '\n';

	}
	return 0;
}