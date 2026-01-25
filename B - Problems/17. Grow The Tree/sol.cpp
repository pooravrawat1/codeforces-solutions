#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> sticks(n);
    for (int i = 0; i < n; i++) {
        cin >> sticks[i];
    }
    sort(sticks.begin(), sticks.end());

    long long x = 0;
    long long y = 0;
    int mid = n / 2;

    for (int i = 0; i < mid; i++) {
        y += sticks[i];
    }

    for (int i = mid; i < n; i++) {
        x += sticks[i];
    }
    long long result = (x * x) + (y * y);
    cout << result << endl;
    return 0;
}