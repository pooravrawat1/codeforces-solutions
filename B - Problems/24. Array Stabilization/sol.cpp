#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    cout << min((s[n-1] - s[1]), (s[n-2] - s[0])) << endl;
    return 0;
}