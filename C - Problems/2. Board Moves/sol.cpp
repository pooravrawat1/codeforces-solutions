#include <iostream> 

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long ans = 0;
        long long n;
        cin >> n;
        for (long long i = 0; i <= n/2; i++) {
            ans +=  8 * i * i;
        }
        cout << ans << endl;
    }
    return 0;
}