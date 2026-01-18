#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxNum = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a > maxNum) {
                maxNum = a;
            }
        }
        int res = maxNum * n;
        cout << res << "\n";
    }
    return 0;
}