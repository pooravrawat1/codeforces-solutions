#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int zero_count = 0;
        int one_count = 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                zero_count++;
            }
            else {
                one_count++;
            }
        }
        int moves = min(zero_count, one_count);
        if (moves % 2 == 0) {
            cout << "NET" << endl;
        }
        else {
            cout << "DA" << endl;
        }
    }
    return 0;
}