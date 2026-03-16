//https://codeforces.com/contest/2204/problem/E
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() == 1) { 
            cout << s << "\n"; 
            continue; 
        }
        int total = 0;
        int cnt[10] = {0};
        for (char c : s) { 
            total += c-'0'; 
            cnt[c-'0']++; 
        }
        bool found = false;
        for (int s1 = total; s1 >= max(1, total-100); s1--) {
            string tail = "";
            int curr = s1;
            int tailsum = 0;
            while (true) {
                string str = to_string(curr);
                tail += str;
                int nxt = 0;
                for (char c : str) { 
                    tailsum += c-'0'; 
                    nxt += c-'0'; 
                }
                if (curr <= 9) {
                    break;
                }
                curr = nxt;
            }

            if (s1 + tailsum == total) {
                int rem[10];
                for (int i = 0; i < 10; i++) {
                    rem[i] = cnt[i];
                }
                bool yes = true;
                for (char c : tail) {
                    if (rem[c - '0'] == 0) { 
                        yes = false; 
                        break; 
                    }
                    rem[c - '0']--;
                }
                if (yes) {
                    string x = "";
                    for (int i = 1; i < 10; ++i) {
                        if (rem[i]) { 
                            x += to_string(i); 
                            rem[i]--; 
                            break; 
                        }
                    }
                    for (int i = 0; i < 10; i++) {
                        for (int j = 0; j < rem[i]; j++) {
                            x += to_string(i);
                        }
                    }
                    cout << x << tail << "\n";
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << s << "\n";
        }
    }
}