#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    int uppercase = 0;
    int lowercase = 0;
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            lowercase++;
        }
        else {
            uppercase++;
        }
    }
    if (lowercase >= uppercase) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}