#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int totalPrimes = 15;

    int nextPrimeAfterN = -1;

    for (int i = 0; i < totalPrimes - 1; i++) {
        if (primes[i] == n) {
            nextPrimeAfterN = primes[i + 1];
            break;
        }
    }

    if (nextPrimeAfterN == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}