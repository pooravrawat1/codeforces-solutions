#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int percentage = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        percentage += p;
    }
    cout << (double)percentage / n << endl;
    return 0;
}
