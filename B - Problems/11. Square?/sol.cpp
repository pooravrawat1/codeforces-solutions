#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        bool valid = false;
        if (a == c && b + d == a) valid = true;
        if (a == d && b + c == a) valid = true;
        if (b == c && a + d == b) valid = true;
        if (b == d && a + c == b) valid = true;

        if (valid) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}