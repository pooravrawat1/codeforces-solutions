// https://codeforces.com/contest/2200/problem/E
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const int maxa = 1000000;
    vector<int> min_prime(maxa + 1, 0);
    vector<int> max_prime(maxa+ 1, 0);

    for (int i = 2; i <= maxa; i++) {
        if (min_prime[i] == 0) {
            for (int j = i; j <= maxa; j += i) {
                if (min_prime[j] == 0) {
                    min_prime[j] = i;
                }
                max_prime[j] = i;
            }
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (is_sorted(a.begin(), a.end())) {
            cout << "Bob" << "\n";
            continue;
        }
        bool alice = false;
        vector<int> bases(n);
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                bases[i] = 1;
            }
            else {
                if (min_prime[a[i]] != max_prime[a[i]]) {
                    alice = true;
                    break;
                }
                bases[i] = min_prime[a[i]];
            } 
        }
        if (alice) {
            cout << "Alice" << "\n";
            continue;
        }

        bool basesSorted = true;
        for (int i = 1; i < n; i++) {
            if (bases[i] < bases[i-1]){
                basesSorted = false;
                break;
            }
        }

        if (basesSorted) {
            cout << "Bob" << "\n";
        }
        else {
            cout << "Alice" << "\n";
        }
    }
}