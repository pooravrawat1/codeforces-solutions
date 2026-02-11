#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int last_r = 0;
        int max_gap = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') {
                int curr_position = i + 1;
                max_gap = max(max_gap, curr_position - last_r);
                last_r = curr_position;
            }
        }
        max_gap = max(max_gap, (int)s.length() + 1 - last_r);
        cout << max_gap << endl;
    }
}