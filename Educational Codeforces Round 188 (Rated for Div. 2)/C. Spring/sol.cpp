// https://codeforces.com/contest/2204/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c, m;
        cin >> a >> b >> c >> m;
        ll ab = lcm(a, b);
        ll ac = lcm(a, c);
        ll bc = lcm(b, c);
        ll abc = lcm(ab, c);

        ll watera = 6 * (m / a) - 3 * (m / ab) - 3 * (m / ac) + 2 * (m / abc);
        ll waterb = 6 * (m / b) - 3 * (m / ab) - 3 * (m / bc) + 2 * (m / abc);
        ll waterc = 6 * (m / c) - 3 * (m / ac) - 3 * (m / bc) + 2 * (m / abc);
        cout << watera << " " << waterb << " " << waterc << "\n";
    }
}