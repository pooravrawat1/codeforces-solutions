#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int count256 = min({k2, k5, k6});
    k2 -= count256;
    int count32 = min(k2, k3);
    int result = count256 * 256 + count32 * 32;
    cout << result << endl;
    return 0;
}