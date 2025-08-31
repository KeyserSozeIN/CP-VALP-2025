#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        long long sum = 0;
        int ones = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 1) {
                ones++;
            }
        }
        
        // Special case: if n = 1, impossible since b[0] != a[0] but sum must be same
        if (n == 1) {
            cout << "NO\n";
            continue;
        }
        
        // For each position i where a[i] = 1, we need b[i] >= 2
        // For positions where a[i] > 1, we can set b[i] = 1
        // We need: sum of all b[i] = sum of all a[i]
        
        // Minimum possible sum of good array:
        // ones positions contribute at least 2 each: ones * 2
        // non-ones positions contribute at least 1 each: (n - ones) * 1
        long long min_sum = ones * 2 + (n - ones);
        
        if (min_sum <= sum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}