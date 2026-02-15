// https://codeforces.com/contest/2195/problem/A
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
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        bool has67 = false;
        for (int x : nums) {
            if (x == 67) {
                has67 = true;
            }
        }
        cout << (has67 ? "YES" : "NO") << '\n';
    }
}