#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int countTwo = 0;
        int countThree = 0;
        while (n % 2 == 0) {
            n /= 2;
            countTwo++;
        }
        while (n % 3 == 0) {
            n /= 3;
            countThree++;
        }
        if (n == 1 && countTwo <= countThree) {
            cout << (countThree - countTwo) + countThree << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
