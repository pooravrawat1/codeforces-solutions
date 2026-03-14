// https://codeforces.com/contest/2208/problem/A
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
        int maxfreq = 0;
        unordered_map<int,int>freq;
        for (int i = 0; i < n*n; i++) {
            int a;
            cin >> a;
            freq[a]++;
            if (freq[a] > maxfreq) {
                maxfreq = freq[a];
            }
        }
        if (maxfreq <= (n * (n-1))) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }
}