// https://codeforces.com/contest/2200/problem/B
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
        vector<int>a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (is_sorted(a.begin(), a.end())) {
            cout << n << "\n";
        }
        else {
            cout << 1 << "\n";
        }
    }
}