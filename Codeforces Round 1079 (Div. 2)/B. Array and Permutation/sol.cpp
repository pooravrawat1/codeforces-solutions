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
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> first_pos(n + 1, -1), last_pos(n + 1, -1), count(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int val = a[i];
            if (first_pos[val] == -1) {
                first_pos[val] = i;
            }
            last_pos[val] = i;
            count[val]++;
        }

        bool possible = true;
        for (int i = 1; i <= n; i++) {
            if (count[i] > 0) {
                if (last_pos[i] - first_pos[i] + 1 != count[i]) {
                    possible = false;
                    break;
                }
            }
        }

        if (!possible) {
            cout << "no" << '\n';
            continue;
        }

        vector<int> no_duplicates;
        for (int i = 0; i < n; i++) {
            if (i == 0 || a[i] != a[i - 1]) {
                no_duplicates.push_back(a[i]);
            }
        }

        int p_index = 0;
        int a_index = 0;
        while (p_index < n && a_index < no_duplicates.size()) {
            if (p[p_index] == no_duplicates[a_index]) {
                a_index++;
            }
            p_index++;
        }
        if (a_index == no_duplicates.size()) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
}