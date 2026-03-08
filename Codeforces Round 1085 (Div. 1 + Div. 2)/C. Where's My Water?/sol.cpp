#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 2e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll h;
        cin >> n >> h;
        vector<ll>a(n+1);
        bool valid = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < h) {
                valid = true;
            }
        }
        if (!valid) {
            cout << 0 << "\n";
            continue;
        }
        vector<ll>minL(n+1, inf);
        vector<ll>minR(n+1, inf);
        vector<ll>M(n + 1);
        minL[0] = 0; minR[n] = 0;

        for (int c = 0; c < n; c++) {
            if (a[c] >= h){ 
                continue;
            }
            ll currMax = a[c];
            for (int i = c; i < n; i++) {
                M[i+1] = currMax = max(currMax, a[i]);
            }
            currMax = a[c];
            for (int i = c; i >= 0; i--) {
                M[i+1] = currMax = max(currMax, a[i]);
            }
            ll sum = 0;
            for (int i = 1; i <= n; i++) {
                sum += M[i];
                if (sum < minL[i]) {
                    minL[i] = sum;
                }
            }
            sum = 0;
            for (int i = n - 1; i >= 0; i--) {
                sum += M[i+1];
                if (sum < minR[i]) {
                    minR[i] = sum;
                }
            }
        }
        ll minCost = inf;
        for (int i = 0; i <= n; i++) {
            if (minL[i] + minR[i] < minCost) {
                minCost = minL[i] + minR[i];
            } 
        }
        cout << (ll)n * h - minCost << "\n";
    }
}