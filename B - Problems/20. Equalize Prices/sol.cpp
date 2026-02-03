#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        long long k;
        cin >> n >> k;
        vector <long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long min_a = *min_element(a.begin(), a.end());
        long long max_a = *max_element(a.begin(), a.end());

        long long B = min_a + k;

        if (abs(max_a - B) <= k) {
            cout << B << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}