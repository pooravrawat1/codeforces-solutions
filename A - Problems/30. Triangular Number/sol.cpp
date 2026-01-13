#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    int curr = 0;
    while(curr < n) {
        curr = i * (i + 1) / 2;
        if (curr == n) {
            cout << "YES" << endl;
            return 0;
        }
        i++;
    }
    cout << "NO" << endl;
    return 0;
}