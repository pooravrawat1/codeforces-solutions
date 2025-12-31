#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<pair<int, int>> coordinates;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char s;
            cin >> s;
            if (s == '*') {
                coordinates.push_back({i+1, j+1});
            }
        }
    }
    int x4 = coordinates[0].first ^ coordinates[1].first ^ coordinates[2].first;
    int y4 = coordinates[0].second ^ coordinates[1].second ^ coordinates[2].second;

    cout << x4 << " " << y4 << endl;
    return 0;
}