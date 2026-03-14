//https://codeforces.com/contest/2208/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef double db;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<db>c(n);
        vector<db>p(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i] >> p[i];
        }
        vector<db>dp(n + 1, 0.0);
        for (int i = n-1; i >= 0; i--) {
            db skip = dp[i + 1];
            db take = c[i] + (1.0 - p[i] / 100.0) * dp[i + 1];
            dp[i] = max(skip, take);
        }
        cout << fixed << setprecision(9) << dp[0] << "\n";  
    }
}