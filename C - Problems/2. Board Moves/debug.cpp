#include <iostream>
using namespace std;

int main() {
    long long n = 499993;
    long long ans = 0;
    for (long long i = 0; i < (n-1)/2; i++) {
        ans += i*i;
    }
    cout << "ans before multiply: " << ans << endl;
    cout << "8 * ans: " << 8 * ans << endl;
    
    // Check using formula: sum of i^2 from 0 to k-1 = (k-1)*k*(2k-1)/6
    long long k = (n-1)/2;
    long long formula_ans = (k-1) * k * (2*k-1) / 6;
    cout << "Using formula: " << formula_ans << endl;
    cout << "8 * formula: " << 8 * formula_ans << endl;
    
    return 0;
}
