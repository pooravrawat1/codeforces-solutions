#include <bits/stdc++.h>
using namespace std;

bool check(int even, int odd) {
    if (even % 2 == 0 && odd % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

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
        int even = 0;
        int odd = 0;
        for (int c : a) {
            if (c % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (check(even, odd)) {
            cout << "Yes" << endl;
        }
        else {
            bool found = false;
            for (int i = 0; i < n - 1; i++) {
                if (abs(a[i] - a[i+1]) == 1) {
                    found = true;
                    break;
                }
            }
            if (found) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }   
    }
    return 0;
}