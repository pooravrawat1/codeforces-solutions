#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool simon_turn = true;

    while (true) {
        int sub;
        if (simon_turn) {
            sub = gcd(a, c);
        } else {
            sub = gcd(b, c);
        }

        if (c < sub) {
            cout << (simon_turn ? "1" : "0") << endl;
            break;
        }

        c -= sub;
        simon_turn = !simon_turn;
    }

    return 0;
}