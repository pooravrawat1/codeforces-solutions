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

        for (int i = 0; i < n; i++) {
            int target = n - i;
            if (p[i] != target) {
                int j = i;
                while (j < n && p[j] != target) {
                    j++;
                }
                reverse(p.begin() + i, p.begin() + j + 1);
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << p[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}