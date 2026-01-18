#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n, m;
        cin >> x >> n >> m;
        while (x > 20 && n > 0) {
            x = (x / 2) + 10;
            n--;
        }
        x -= m * 10;
        if (x <= 0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}