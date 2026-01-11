#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int wrong_even = 0;
        int wrong_odd = 0;
        
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            
            if (i % 2 != a % 2) {
                if (i % 2 == 0) {
                    wrong_odd++;
                } else {
                    wrong_even++;
                }
            }
        }
        
        if (wrong_even == wrong_odd) {
            cout << wrong_even << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
