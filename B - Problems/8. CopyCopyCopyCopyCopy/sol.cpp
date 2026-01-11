#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        set <int> diff;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            diff.insert(a);
        }
        cout << diff.size() << endl;        
    }
    return 0;
}