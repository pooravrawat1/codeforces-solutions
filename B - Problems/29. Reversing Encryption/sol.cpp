#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string t;
    cin >> n >> t;
    vector <int> a;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);
        }
    }
    for (int d : a) {
        reverse(t.begin(), t.begin() + d);
    }

    cout << t << endl;
    return 0;
}