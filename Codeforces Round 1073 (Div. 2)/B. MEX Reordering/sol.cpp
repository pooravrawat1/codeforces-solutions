#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int zero_count = 0;
        bool has_one = false;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                zero_count++;
            }
            if (a[i] == 1) {
                has_one = true;
            }
        }
        
        if (zero_count == 0) {
            cout << "NO\n";
        } else if (zero_count >= 2 && !has_one) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    
    return 0;
}