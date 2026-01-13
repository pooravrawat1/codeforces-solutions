#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n == k) {
            cout << 0 << "\n";
            continue;
        }

        int answer = -1;
        for (int d = 1; d <= 30; ++d) {
            long long divisor = 1LL << d;
            long long low = n / divisor;
            long long high = (n + divisor - 1) / divisor;

            if (low == k || high == k) {
                answer = d;
                break;
            }
            if (high < k) break;
        }
        cout << answer << "\n"; 
    }   
    return 0;
}