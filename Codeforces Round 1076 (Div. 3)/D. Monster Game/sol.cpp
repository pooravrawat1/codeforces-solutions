#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a.rbegin(), a.rend());

        long long score = 0;
        long long strikes = 0;

        for (int k = 1; k <= n; ++k) {
            strikes += b[k-1];
            
            if (strikes > n) break;

            long long current_x = a[strikes - 1];
            score = max(score, (long long)k * current_x);
        }

        cout << score << endl;
    }
    return 0;
}