#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> diff;
    long long sum = 0;
    int songs_compressed = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        sum += a;
        diff.push_back(a-b);
    }
    sort(diff.begin(), diff.end(), greater<long long>());

    int j = 0;
    while (j < n) {
        if (sum <= m) {
            cout << songs_compressed << "\n";
            return 0;
        }
        sum -= diff[j];
        songs_compressed++;
        j++;
    }
    
    if (sum <= m) {
        cout << songs_compressed << "\n";
    } else {
        cout << -1 << "\n";
    }
    return 0;
}