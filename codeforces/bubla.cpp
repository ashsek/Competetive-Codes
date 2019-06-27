#include<iostream>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

inline void boostIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}



int main() {
	boostIO();
	int ans = 1000000000;
	map<char, int> strng;
	string s1, s2 = "Bulbasaur";
	cin >> s1;

	for (int i = 0; i < s1.size(); ++i) ++strng[s1[i]];
	for (int i = 0; i < s2.size(); ++i) {
		if (s2[i] == 'a' || s2[i] == 'u') 
			ans = min(ans, strng[s2[i]] / 2);
		else 
			ans = min(ans, strng[s2[i]]);
		}
	cout << ans << endl;

	return 0;
}