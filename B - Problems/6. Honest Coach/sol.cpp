#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        int min_diff = s[1] - s[0];
        for (int i = 1; i < n - 1; i++) {
            int curr_diff = s[i+1] - s[i];
            if (min_diff > curr_diff) {
                min_diff = curr_diff;
            }
        }
        cout << min_diff << endl;
    }
    return 0;
}