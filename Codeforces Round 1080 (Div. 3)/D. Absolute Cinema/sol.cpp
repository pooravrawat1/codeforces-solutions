// https://codeforces.com/contest/2195/problem/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> f(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> f[i];
        }
        vector<ll> a(n + 1, 0);
        ll wsum = 0;
        ll msum = 0;

        for (int i = 2; i < n; i++) {
            a[i] = (f[i + 1] - 2 * f[i] + f[i - 1]) / 2;
            msum += a[i];
            wsum += a[i] * (i - 1);
        }

        a[n] = (f[1] - wsum) / (n - 1);
        
        ll wf = 0;
        for (int i = 2; i < n; i++) {
            wf += a[i] * (n - i);
        }
        a[1] = (f[n] - wf) / (n - 1);

        for (int i = 1; i <= n; i++) {
            cout << a[i];
            if (i < n) {
                cout << " ";
            }
        }
        cout << "\n";
    }
}