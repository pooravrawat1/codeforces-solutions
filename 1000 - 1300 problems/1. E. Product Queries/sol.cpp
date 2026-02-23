// https://codeforces.com/problemset/problem/2193/E
#include <bits/stdc++.h>
using namespace std;
int a[300010],dp[300010];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            dp[i] = 1e9;
        }
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            dp[a[i]]=1;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j+=i) {
                dp[j] = min(dp[j], dp[i] + dp[j/i]);
            }
        }
        for (int i = 1; i <= n; i++) {
            if (dp[i] == 1e9) {
                dp[i] = -1;
            }
            cout<<dp[i]<<" ";
        }
        cout << endl;
    }
}
