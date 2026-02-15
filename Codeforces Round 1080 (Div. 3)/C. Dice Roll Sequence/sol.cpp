// https://codeforces.com/contest/2195/problem/C
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
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> dp(7, 0);
        for (int v = 1; v <= 6; v++) {
            if (a[0] == v) {
                dp[v] = 0;
            } else {
                dp[v] = 1;
            }
        }

        for (int i = 1; i < n; i++) {
            vector<int> next_dp(7, 1e9);
            for (int v = 1; v <= 6; v++) {
                int cost;
                if (a[i] == v) {
                    cost = 0;
                } else {
                    cost = 1;
                }
                for (int u = 1; u <= 6; u++) {
                    if (u != v && u + v != 7) {
                        next_dp[v] = min(next_dp[v], dp[u] + cost);
                    }
                }
            }
            dp = next_dp;
        }
        int res = dp[1];
        for (int v = 2; v <= 6; v++) {
            res = min(res, dp[v]);
        }
        cout << res << "\n";
    }
}