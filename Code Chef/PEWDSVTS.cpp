#include <iostream>
#include <math.h>
#include <vector>
#include <string.h>
#include <limits.h>
#include <queue>

using namespace std;

#include <utility>
// #include <algorithm>
// #include <unordered_set>
// typedef map<int,int> mii;
typedef long long int ll;
typedef vector<int> vi;
// typedef vector< vi > vvi;
// typedef pair<int,int> ii;
// typedef vector< ii > vii;
// typedef vector<long long int> vll;

// #define pb push_back;
// #define all(c) (c).begin(),(c).end()
// #define tr(c,i) for(typefof((c).begin()) i = (c).begin();i != (c).end();i++)
// #define present(c,x) ((c).find(x) != (c).end())

#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007

int main()
{
	FIO
	int T;
	cin>>T;
	while(T--)
	{
		priority_queue<long long int> pq;
		long long int N,A,B,X,Y,Z;
		cin>>N>>A>>B>>X>>Y>>Z;
		long long int sum = 0;
		for(int i = 0;i < N;i++)
		{
			ll tmp;
			cin>>tmp;
			pq.push(tmp);
			sum+= tmp;
		}
		ll times;
		if((Z-B)%Y == 0)
			times = ((Z-B)/Y)- 1;
		else
			times = (Z-B)/Y;
		ll no = A + X*times;
		// cout<<times<<" "<<no<<endl;
		if(no >= Z)
			cout<<"0"<<endl;
		else
		{
			if(2*sum <= Z-no)
				cout<<"RIP\n";
			else
			{
				ll count = 0;
				while(no < Z)
				{
					ll a = pq.top();
					no+=a;
					pq.pop();
					pq.push(a/2);
					count++;
				}
				cout<<count<<endl;
			}
		}
	}
	return 0;
}