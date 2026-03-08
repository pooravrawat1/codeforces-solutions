#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                bool left_empty = (i == 0 || s[i - 1] == '0');
                bool right_empty = (i == n - 1 || s[i + 1] == '0');
                if (left_empty && right_empty) {
                    if (i + 1 < n && (i + 2 >= n || s[i + 2] == '0')) {
                        s[i + 1] = '1';
                    } else {
                        s[i] = '1';
                    }
                }
            }
        }
        int total = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                total++;
            }
        }
        cout << total << "\n";
    }
}