#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long base_per_kid = n / k;
        long long total_given = base_per_kid * k;

        long long remainder = n % k;
        long long max_extra_allowed = k / 2;

        total_given += min(remainder, max_extra_allowed);

        cout << total_given << "\n";
    }

    return 0;
}