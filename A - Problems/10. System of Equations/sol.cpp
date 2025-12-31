#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int n, m;
    cin >> n >> m;
    for (int a = 0; a * a <= n; a++) {
        for (int b = 0; b * b <= m; b++) {
            if (a * a + b == n && b * b + a == m) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}