#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
        int changes = 0;
        for (int i = 0; i < n; i++) {
            if (grid[i][m-1] == 'R') {
                changes++;
            }
        }
        for (int j = 0; j < m; j++) {
            if (grid[n-1][j] == 'D') {
                changes++;
            }
        }
        cout << changes << endl;
    }
    return 0;
}