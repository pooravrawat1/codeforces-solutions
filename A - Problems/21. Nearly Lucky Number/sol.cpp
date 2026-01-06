#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count_four = 0;
    int count_seven = 0;
    for (char c : s) {
        if (c == '4') {
            count_four ++;
        }
        else if (c == '7') {
            count_seven ++;
        }
    }
    int total_lucky = count_four + count_seven;
    
    bool is_lucky = false;
    if (total_lucky > 0) {
        is_lucky = true;
        string lucky_str = to_string(total_lucky);
        for (char c : lucky_str) {
            if (c != '4' && c != '7') {
                is_lucky = false;
                break;
            }
        }
    }
    
    if (is_lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}