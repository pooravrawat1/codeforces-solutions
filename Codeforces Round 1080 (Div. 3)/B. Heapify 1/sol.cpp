// https://codeforces.com/contest/2195/problem/B
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
        vector <int> a(n+1);
        vector <int> parent(n+1);
        iota(parent.begin(), parent.end(), 0);
        auto find = [&](auto self, int i) -> int {
            if (parent[i] == i) {
                return i;
            }
            return parent[i] = self(self, parent[i]);
        };

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; 2 * i <= n; i++) {
            int root_i = find(find, i);
            int root_2i = find(find, 2 * i);
            if (root_i != root_2i) {
                parent[root_i] = root_2i;
            }
        }

        bool possible = true;
        for (int i = 1; i <= n; i++) {
            if (find(find, i) != find(find, a[i])) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
}