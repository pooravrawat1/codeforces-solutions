#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '.') {
                if (i + 2 < n && j - 1 >= 0 && j + 1 < n &&
                    grid[i+1][j] == '.' &&
                    grid[i+2][j] == '.' &&
                    grid[i+1][j-1] == '.' &&
                    grid[i+1][j+1] == '.') {
                    grid[i][j] = '#';
                    grid[i+1][j] = '#';
                    grid[i+2][j] = '#';
                    grid[i+1][j-1] = '#';
                    grid[i+1][j+1] = '#';
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '.') {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}