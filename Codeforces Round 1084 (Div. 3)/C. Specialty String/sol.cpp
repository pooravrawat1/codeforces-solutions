// https://codeforces.com/contest/2200/problem/C#
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
        if (n % 2 == 1) {
            cout << "no" << "\n";
            continue;
        }
        stack<int>stk;
        for (char c: s) {
            if (!stk.empty() && stk.top() == c) {
                stk.pop();
            }
            else {
                stk.push(c);
            }
        }
        if (stk.empty()) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }
}