#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize "-O3"

#define watch(x) cout << (#x) << " is " << (x) << endl

#define rep(i,a,b)  for(lli i=a;i<b;i++)
#define repd(i,a,b) for(lli i=a-1;i>=b;i--)
#define nl          cout<<endl;
#define test()      lli t;cin>>t;while(t--)
#define sp(n)       setprecision(n)

#define lli     long long int
#define ulli    unsigned long long int
#define ld      long double
#define uld     unsigned long double
#define S       string
#define C       char
#define elif    else if

#define pb      push_back
#define pp      pop_back
#define mp      make_pair
#define plli    pair<lli,lli>
#define vlli    vector<lli>
#define vulli   vector<ulli>
#define vld     vector<ld>
#define vs      vector<string>

#define bs      binary_search
#define ub      upper_bound
#define lb      lower_bound

#define vsort(v) sort(v.begin(),v.end())

#define max1 1000001    //10^6 + 1
#define max2 10000001   //10^7 + 1
#define max3 1000000007 //10^9 + 7
#define inf  1000000009 //10^9 + 9

bool prime (lli n)
{
    if(n==1)
    return false;

    if(n==2||n==3)
    return true;

    lli k=sqrt(n)+1;

    rep(i,2,k)
    {
        if(n%i==0)
        return false;
    }

    return true;

}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    lli N=104800;
    vlli v;
    rep(i,1,N)
    {

        if(prime(i))
        {

            v.pb(i);
        }
    }
    cout << v[10000] << '\n';

    // lli n;
    // cin>>n;
    // rep(i,0,n)
    // {

    //     cout<<v[i]<<" ";
    // }
    // nl;;
    return 0;
}