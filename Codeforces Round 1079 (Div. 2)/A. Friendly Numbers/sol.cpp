#include <bits/stdc++.h>
using namespace std;

int dig_sum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        if (x % 9 != 0) {
            cout << 0 << '\n';
            continue;
        }
        int friendly_nums = 0;
        for (long long y = x; y <= x + 100; y++) {
            if (y - dig_sum(y) == x) {
                friendly_nums ++;
            }
        }
        cout << friendly_nums << '\n';
    }
    return 0;
}