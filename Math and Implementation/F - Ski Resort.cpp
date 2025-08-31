#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long count = 0;
        int i = 0;
        
        while (i < n) {
            if (a[i] <= q) {
                int j = i;
                while (j < n && a[j] <= q) {
                    j++;
                }
                int len = j - i;
                if (len >= k) {
                    long long ways = 0;
                    for (int l = k; l <= len; l++) {
                        ways += (len - l + 1);
                    }
                    count += ways;
                }
                i = j;
            } else {
                i++;
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}