// https://codeforces.com/contest/2202/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        bool yes = true;
        if (n % 2 == 1) {
            if (s[0] == 'b') {
                yes = false;
            }
            for (int i = 1; i < n && yes; i += 2) {
                if (s[i] == s[i+1] && s[i] != '?' && s[i+1] != '?') {
                    yes = false;
                }
            }
        }
        else {
            for (int i = 0; i < n && yes; i += 2) {
                if (s[i] == s[i+1] && s[i] != '?' && s[i+1] != '?') {
                    yes = false;
                }
            }
        }
        if (yes) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }

    }
}