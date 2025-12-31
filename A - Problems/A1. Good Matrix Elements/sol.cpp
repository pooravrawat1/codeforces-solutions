#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int total_sum = 0;
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val;
            cin >> val;
            if (i == j || (i+j) == n-1 || i == mid || j == mid) {
                total_sum += val;
            }
        }
    }
    cout << total_sum << endl;
    return 0;
}