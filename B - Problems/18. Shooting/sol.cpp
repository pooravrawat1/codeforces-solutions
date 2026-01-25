#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> cans(n);
    for (int i = 0; i < n; i++) {
        cin >> cans[i].first;
        cans[i].second = i + 1;
    }
    sort(cans.begin(), cans.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first > b.first;
    });

    long long total_shots = 0;

    for (int i = 0; i < n; i++) {
        total_shots += (long long)cans[i].first * i + 1;
    }

    cout << total_shots << endl;
    for (int i = 0; i < n; i++) {
        cout << cans[i].second << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}