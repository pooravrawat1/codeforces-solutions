#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main() {
    set<char> names;
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++) {
        names.insert(s[i]);
    }
    if (names.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}