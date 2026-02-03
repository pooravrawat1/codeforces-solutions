#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long max_sum = 0;
    while (n--) {
        long long x, y;
        cin >> x >> y;
        if (x + y > max_sum) {
            max_sum = x + y;
        }
    }
    cout << max_sum << endl;
    return 0;
}