#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        long long min_a = 1e9;
        long long min_b = 1e9;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            min_a = min(min_a, a[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            min_b = min(min_b, b[i]);
        }
        long long total_moves = 0;
        for (int i = 0; i < n; i++) {
            long long diff_a = a[i] - min_a;
            long long diff_b = b[i] - min_b;
            total_moves += max(diff_a, diff_b);
        }
    cout << total_moves << endl;
    }
    return 0;
}