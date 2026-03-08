// https://codeforces.com/problemset/problem/2173/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll k = 0;
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        ll min_k = 0;
        ll max_k = 0;
        
        for (int i = 0; i < n; i++) {
            ll next_max = max(max_k - a[i], b[i] - min_k);
            ll next_min = min(min_k - a[i], b[i] - max_k);
            min_k = next_min;
            max_k = next_max;
        }
        cout << max_k << "\n";
    }
    
}