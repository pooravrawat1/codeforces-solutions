#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> s;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            s[a]++;
        }
        int u = s.size();
        int m = 0;
        
        for (auto const& [skill, freq] : s) {
            m = max(m,freq);
        }

        cout << max(min(m, u-1), min(m-1, u)) << endl;

    }
    return 0;
}