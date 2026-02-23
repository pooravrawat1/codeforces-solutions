// https://codeforces.com/contest/2202/problem/C2
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
        vector<bool> isbad(n, false);
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i-1] + 1) {
                isbad[i] = true;
            }
        }
        vector<int>badnext(n);
        badnext[n-1] = n;
        for (int i = n-2; i >= 0; i--) {
            badnext[i] = isbad[i + 1] ? (i + 1) : badnext[i + 1];
        }
        vector<int> smallernext(n);
        stack<int> stk;
        for (int i = n - 1; i >= 0; --i) {
            while (!stk.empty() && a[stk.top()] > a[i]) {
                stk.pop();
            }
            if (stk.empty()) {
                smallernext[i] = n;
            } else {
                smallernext[i] = stk.top();
            }
            stk.push(i);
        }
        vector<int> next(n);
        for (int i = 0; i < n; ++i) {
            next[i] = min(badnext[i], smallernext[i]);
        }
        vector<long long> dp(n + 1, 0);
        long long total = 0;
        
        for (int i = n - 1; i >= 0; --i) {
            dp[i] = (n - i) + dp[next[i]];
            total += dp[i];
        }
        cout << total << "\n";
    }
}