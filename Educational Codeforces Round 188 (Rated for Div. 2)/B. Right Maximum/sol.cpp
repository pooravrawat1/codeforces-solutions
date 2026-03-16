// https://codeforces.com/contest/2204/problem/B
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
        int currMax = 0;
        int res = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a > currMax) {
                currMax = a;
            }
            if (a == currMax) {
                res++;
            }
        } 
        cout << res << "\n";
    }
}