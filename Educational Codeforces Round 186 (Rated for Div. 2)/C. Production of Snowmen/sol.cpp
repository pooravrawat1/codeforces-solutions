#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        long long countAB = 0;
        for (int i = 0; i < n; i++) {
            bool possible = true;
            for (int j = 0; j < n; j++) {
                if (a[j] >= b[(i+j) % n]) {
                    possible = false;
                    break;
                }
            }
            if (possible) {
                countAB++;
            }
        }
        long long countBC = 0;
        for (int i = 0; i < n; i++) {
            bool possible = true;
            for (int j = 0; j < n; j++) {
                if (b[j] >= c[(i+j) % n]) {
                    possible = false;
                    break;
                }
            }
            if (possible) {
                countBC++;
            }
        }
        long long total = (long long)n * countAB * countBC;
        cout << total << "\n";
    }
    return 0;
}