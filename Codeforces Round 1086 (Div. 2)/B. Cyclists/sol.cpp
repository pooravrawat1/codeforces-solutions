//https://codeforces.com/contest/2208/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll n, k, p , m;
        cin >> n >> k >> p >> m;
        vector<ll>a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll x = a[p-1];
        ll c = x;
        if (p > k) {
            vector<ll>v;
            for (int i = 0; i < p - 1; i++) {
                v.push_back(a[i]);
            }
            sort(v.begin(), v.end());
            for (int i = 0; i < p - k; i++) {
                c += v[i];
            }
        }
        if (m < c) {
            cout << 0 << "\n";
            continue;
        }
        vector<ll>v2;
        for (int i = 0; i < n; i++) {
            if (i == p-1) {
                continue;
            }
            v2.push_back(a[i]);
        }
        sort(v2.begin(), v2.end());
        ll c2 = x;
        for (int i = 0; i < n-k; i++) {
            c2 += v2[i];
        }
        ll res = 1 + (m-c) / c2;
        cout << res << "\n";
    }
}