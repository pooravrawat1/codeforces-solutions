#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector <long long> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }    
        
        for (int i = 0; i < n; i++) {
            a[i] = max(a[i], b[i]);
        }

        for (int i = n - 2; i >= 0; i--) {
            a[i] = max(a[i], a[i+1]);
        }
        vector <long long> p(n+1, 0);
        for (int i = 0; i < n; ++i) {
            p[i + 1] = p[i] + a[i];
        }

        for (int i = 0; i < q; ++i) {
            int l, r;
            cin >> l >> r;
            cout << p[r] - p[l - 1] << (i == q - 1 ? "" : " ");
        }
        cout << "\n";    
    }
    return 0;
}