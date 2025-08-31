#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count_0 = 0, count_5 = 0;
    
    for (int i = 0; i < n; i++) {
        int digit;
        cin >> digit;
        if (digit == 0) count_0++;
        else count_5++;
    }
    
    if (count_0 == 0) {
        cout << -1 << endl;
        return 0;
    }
    
    int fives_to_use = (count_5 / 9) * 9;
    
    if (fives_to_use == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    string result = string(fives_to_use, '5') + string(count_0, '0');
    cout << result << endl;
    
    return 0;
}