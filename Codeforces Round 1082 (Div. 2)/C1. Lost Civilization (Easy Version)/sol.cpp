// https://codeforces.com/contest/2202/problem/C1
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
        int res = 0;
        for (int i = 0; i < n;) {
            res ++;
            int j = a[i];
            int k = i + 1;
            while (k < n && a[k] <= a[k-1]+1 && a[k] > j) {
                k++;
            }
            i = k;
        }
        cout << res << '\n';
    }
}