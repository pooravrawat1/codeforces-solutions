//https://codeforces.com/contest/2203/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll n, m, d;
        cin >> n >> m >> d;
        ll maxh = (d/m)+1;
        ll towers = (n + maxh - 1) / maxh;
        cout << towers << "\n";
    }
}