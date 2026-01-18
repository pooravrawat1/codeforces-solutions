#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];            
        }
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int longest = 0;
        int curr = 0;

        for (int i = 0; i < a.size(); i++) {
            if (i > 0 && a[i] == a[i-1] + 1) {
                curr ++;
            }
            else {
                curr = 1;
            }
            if (curr > longest) {
                longest = curr;
            }
        }
        cout << longest << "\n";
    }
    return 0;
}