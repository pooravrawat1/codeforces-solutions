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

        int balance = 0;
        bool zeroBalance = false;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '(') {
                balance++;
            }
            else {
                balance--;
            }

            if (balance == 0) {
                zeroBalance = true;
                break;
            }
        }

        if (zeroBalance || n == 2) {
            cout << -1 << "\n";
        }
        else {
            cout << n - 2 << "\n";
        }
    }
    return 0;
}
