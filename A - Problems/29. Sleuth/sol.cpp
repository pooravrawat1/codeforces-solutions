#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    char lastLetter = ' ';
    for (int i = s.length() - 1; i >= 0; --i) {
        if (isalpha(s[i])) {
            lastLetter = tolower(s[i]);
            break; 
        }
    }

    if (lastLetter == 'a' || lastLetter == 'e' || lastLetter == 'i' || 
        lastLetter == 'o' || lastLetter == 'u' || lastLetter == 'y') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}