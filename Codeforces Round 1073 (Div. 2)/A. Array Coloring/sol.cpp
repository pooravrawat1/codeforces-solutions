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
        vector <int> position(n+1);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            position[a] = i;
        }
        bool possible = true;
        for (int i = 1; i < n; i++) {
            if (position[i] % 2 == position[i+1] % 2) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}