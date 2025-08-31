#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        if (x == 1) {
            cout << 3 << "\n";
        } else if (x & (x - 1)) {
            cout << (x & -x) << "\n";
        } else {
            cout << x + 1 << "\n";
        }
    }
    return 0;
}
