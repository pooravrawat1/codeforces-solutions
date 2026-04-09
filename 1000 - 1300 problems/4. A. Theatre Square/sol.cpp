// https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    ll res = (ll) ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << res << "\n";
    return 0;
}