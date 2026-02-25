// https://codeforces.com/contest/2203/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int currSum = 0;
        vector<int> r;
        for (int i = 0; i < x.length(); i++) {
            int d = x[i] - '0';
            currSum += d;
            r.push_back(d - (i == 0));
        }
        if (currSum <= 9) {
            cout << 0 << "\n";
            continue;
        }
        sort(r.rbegin(), r.rend());
        int moves = 0;
        int removals = currSum-9;
        int pot_removals = 0;

        for (int i : r) {
            pot_removals += i;
            moves ++;
            if (pot_removals >= removals) {
                break;
            }
        }
        cout << moves << "\n";
    }
}