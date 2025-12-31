#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int ans = 0;
        int balance = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                balance++;
            } 
            else {
                balance--;
            }
            if (balance < 0) {
                ans++;      
                balance = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}