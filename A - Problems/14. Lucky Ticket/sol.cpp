#include <iostream>
#include <string>


using namespace std;

int main() {
    int n;
    string m;
    cin >> n >> m;
    int f_half = 0;
    int s_half = 0;
    for (int i = 0; i < n; i++) {
        if (m[i] != '4' && m[i] != '7') {
            cout << "NO" << endl;
            return 0;
        }
        if (i < n / 2) {
            f_half += (m[i] - '0');
        } else {
            s_half += (m[i] - '0');
        }
    }

    if (f_half == s_half) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}