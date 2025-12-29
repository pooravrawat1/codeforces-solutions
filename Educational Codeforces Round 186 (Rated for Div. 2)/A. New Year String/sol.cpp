#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int a;
        string s;
        cin >> a >> s;
        
        int opt1 = INT_MAX;
        for (int i = 0; i <= a - 4; i++) {
            int cost = 0;
            if (s[i] != '2') {
                cost++;
            }
            if (s[i+1] != '0') {
                cost++;
            }
            if (s[i+2] != '2') {
                cost++;
            }
            if (s[i+3] != '6') {
                cost++;
            }
            opt1 = min(opt1, cost);
        }
        
        int opt2 = 0;
        for (int i = 0; i <= a - 4; i++) {
            if (s.substr(i, 4) == "2025") {
                opt2++;
                i += 3;
            }
        }
        
        cout << min(opt1, opt2) << endl;
    }
    
    return 0;
}