#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int n, k, ans = 0;
        cin >> n >> k;
        while (n--) {
            int a;
            cin >> a;
            if ((a + k) % 7 == 0) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
