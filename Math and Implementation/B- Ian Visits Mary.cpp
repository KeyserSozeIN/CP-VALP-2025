#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (gcd(a, b) == 1) {
            cout << 1 << "\n";
            cout << a << " " << b << "\n";
        } else {
            cout << 2 << "\n";
            cout << a - 1 << " " << 1 << "\n";
            cout << a << " " << b << "\n";
        }
    }
    return 0;
}
