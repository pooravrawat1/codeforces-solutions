// https://codeforces.com/contest/2202/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        if ((x - 2 * y) >= 0 && (x + 4 * y) >=0 && (x - 2 * y) % 3 == 0) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
}