#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    string combined = a + b;
    sort(combined.begin(), combined.end());
    sort(c.begin(), c.end());
    if (c == combined) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}