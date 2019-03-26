#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int initial = 1;
    int m = s.length();
    int i,v;
    int score=0;
    for(i=0;i<m;i++){
    	v = (int) s[i]-96;
    	// cout << v << '\n';
    	// cout << abs(initial-v) << ' ' << 26-max(initial,v) + min(initial,v)<< '\n';
    	score += min(abs(initial-v), 26-max(initial,v) + min(initial,v));
    	// cout << "sc " << score << '\n';
    	initial = v;
    	// cout << (int) s[i] - 96 << ' ';
    }
    cout << score << '\n';
}