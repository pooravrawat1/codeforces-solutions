// https://codeforces.com/contest/2207/problem/A
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
        string s;
        cin >> s;
        int minimum = 0;
        int maximum = 0;
        int currLen = 0;
        for (int i = 0; i < n; i++) {
            bool isStuckZero = false;
            if (s[i] == '0') {
                if (i == 0 || i == n - 1 || s[i - 1] == '0' || s[i + 1] == '0') {
                    isStuckZero = true;
                }
            }
            if (!isStuckZero) {
                currLen++;
            }
            else {
                if (currLen > 0) {
                    minimum += (currLen / 2) + 1;
                    maximum += currLen;
                    currLen = 0;
                }
            }
        }
        if (currLen > 0) {
            minimum += (currLen / 2) + 1;
            maximum += currLen;
        }
        cout << minimum << " " << maximum << "\n";
    }
}