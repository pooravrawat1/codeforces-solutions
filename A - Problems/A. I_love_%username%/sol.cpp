#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    int max = INT_MIN;
    int min = INT_MAX;
    bool first = true;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > max) {
            max = x;
            if (!first) {
            ans++;
            }
        }
        if (x < min) {
            min = x;
            if (!first) {
            ans++;
            }
        }
        first = false;
    }
    cout << ans << endl;
    return 0;
}