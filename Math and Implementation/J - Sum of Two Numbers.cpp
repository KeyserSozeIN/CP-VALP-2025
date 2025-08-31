#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int sum_digits(int n) {
    int sum = 0;
    std::string s = std::to_string(n);
    for (char c : s) {
        sum += c - '0';
    }
    return sum;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int x = 0, y = 0;
        int power_of_10 = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit % 2 == 0) {
                x += (digit / 2) * power_of_10;
                y += (digit / 2) * power_of_10;
            } else {
                if (sum_digits(x) <= sum_digits(y)) {
                    x += ((digit + 1) / 2) * power_of_10;
                    y += ((digit - 1) / 2) * power_of_10;
                } else {
                    x += ((digit - 1) / 2) * power_of_10;
                    y += ((digit + 1) / 2) * power_of_10;
                }
            }
            n /= 10;
            power_of_10 *= 10;
        }
        std::cout << x << " " << y << std::endl;
    }
    return 0;
}
