#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sec_card = n - 10;
    if (sec_card <= 0 || sec_card > 11) {
        cout << 0 << endl;
    }
    else if ((sec_card >= 2 && sec_card <= 9) || sec_card == 1 || sec_card == 11) {
        cout << 4 << endl;
    }
    else if (sec_card == 10) {
        cout << 15 << endl;
    }
    return 0;

    
}