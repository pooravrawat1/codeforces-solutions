#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    int max = 0;
    char max_char = 'a';
    for (char c : s) {
        if (c > max_char) {
            max_char = c;
        }
    }
    for (char c: s) {
        if (c == max_char) {
            max++;
        }
    }
    for (int i = 0; i < max; i++) {
        cout << max_char;
    }
    cout << endl;
    return 0;
}