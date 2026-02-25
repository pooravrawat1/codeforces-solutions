// https://codeforces.com/contest/2203/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll s, m;
        cin >> s >> m;
        ll res = 1;
        for (int i = 0; i <= 62; i++) {
            unsigned long long mask = (1ULL << i) - 1;
            unsigned long long reqS = s & mask;
            unsigned long long maxC = m & mask;
            if (reqS > 0) {
                if (maxC == 0) {
                    res = -1;
                    break;
                }
                ll n = (reqS + maxC - 1) / maxC;
                res = max(res, n);
            }
        }
        cout << res << "\n";
    }
}