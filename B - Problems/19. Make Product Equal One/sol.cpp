#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long total_cost = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        if (a == 0) {
            zero_count++;
            total_cost += 1;
        } else if (a > 0) {
            total_cost += (a - 1);
        } else {
            total_cost += (-1 - a);
            negative_count++;
        }
    }

    if (negative_count % 2 != 0 && zero_count == 0) {
        total_cost += 2;
    }

    cout << total_cost << endl;

    return 0;
}