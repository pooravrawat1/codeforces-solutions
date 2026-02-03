#include <bits/stdc++.h>
using namespace std;

long long get_sum(long long n) {
    if (n % 2 == 0) {
        return n / 2;
    }
    else {
        return -(n + 1) / 2;
    }
}
int main() {
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        int res = 0;
        cout << get_sum(b) - get_sum(a - 1) << "\n";
    }
    return 0;
}