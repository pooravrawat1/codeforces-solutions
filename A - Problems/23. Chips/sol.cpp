#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void circle(int n, int m) {
    while (true) {
        for (int i = 1; i <= n; i++) {
            if (m >= i) {
                m -= i;
            }
            else {
                cout << m << endl;
                return;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    circle(n, m);
    return 0;

}