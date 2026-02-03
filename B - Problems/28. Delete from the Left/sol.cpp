#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int lenS = s.length();
    int lenT = t.length();
    int total = lenS + lenT;
    int i = lenS - 1;
    int j = lenT - 1;
    while (i >= 0 && j >= 0) {
        if (s[i] == t[j]) {
            total = total - 2;
            i--;
            j--;
        } else {
            break;
        }
    }
    cout << total << endl;
    return 0;
}