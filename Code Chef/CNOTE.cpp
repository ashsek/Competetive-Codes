#include<bits/stdc++.h>
using namespace std;
/*  X pages long ; Y pages hai bok mei ;
 *  N notebooks by shopkeeper;
 *  no. of pages and price are Pi and Ci
 *  K money left with chef
 *  Complete poetry < budget
 *  Can buy only one notebook
 *  Input
The first line of input contains an integer T, denoting the number of test cases. Then T test cases are follow.

The first line of each test case contains four space-separated integers X, Y, K and N, described in the statement. The ith line of the next N lines contains two space-separated integers Pi and Ci, denoting the number of pages and price of the ith notebook respectively.

Output
For each test case, Print "LuckyChef" if Chef can select such a notebook, otherwise print "UnluckyChef" (quotes for clarity).
 */
int main(){
    long long int t;
    cin >>t;
    long long int x,y,k,n;
    while(t--){
        cin >> x>>y>>k>>n;
        long long int leftpages;
        long long int n2;
        n2 = n;
        leftpages = x-y;
        long long int p[n],c[n],i=0;
        while(n2--){
            cin >> p[i] >> c[i];
            i += 1;
        }
        if(leftpages <=0 )
            cout << "LuckyChef" << '\n';
        else{
            long long int pages;
            for(i=0;i<n;i++){
                if(p[i] >= leftpages){
                    pages = i;
                    break;
                }
            }
            long long int min = INT_MAX;
            for(i=pages;i<n;i++){
                if(c[i] <= min && p[i] >= leftpages){
                    min = c[i];
                }
            }
            if(min<=k)
                cout << "LuckyChef" <<'\n';
            else
                cout << "UnluckyChef" << '\n';
        }
        
    }

    return 0;
}
