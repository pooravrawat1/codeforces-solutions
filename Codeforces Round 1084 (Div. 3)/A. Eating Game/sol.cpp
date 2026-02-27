// https://codeforces.com/contest/2200/problem/A
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
        vector<int> a(n);
        int dishes = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > dishes) {
                dishes = a[i];
            }
        }
        int possible = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == dishes) {
                possible++;
            }
        }
        cout << possible << "\n";
    }
}