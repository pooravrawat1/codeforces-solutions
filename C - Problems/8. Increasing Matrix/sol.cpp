#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = n - 2; i >= 1; i--) {
        for (int j = m - 2; j >= 1; j--) {
            if (a[i][j] == 0) {
                a[i][j] = min(a[i + 1][j], a[i][j + 1]) - 1;
            }
        }    
    }
    long long total_sum = 0;
    bool possible = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            if (j + 1 < m && a[i][j] >= a[i][j + 1]) {
                possible = false;
                break;
            }
            if (i + 1 < n && a[i][j] >= a[i + 1][j]) {
                possible = false;
                break;
            }
            total_sum += a[i][j];
        }
        if (!possible) {
            break;
        }
    }
    if (possible) {
        cout << total_sum << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;

}