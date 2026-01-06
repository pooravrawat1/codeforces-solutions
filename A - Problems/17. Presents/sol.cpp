#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> given(n + 1);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        given[a] = i + 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << given[i] << (i == n ? "\n" : " ");
    }
    cout << endl;
    return 0;
}