#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long current_max = 0; 
    
    for (int i = 0; i < n; ++i) {
        long long b_i;
        cin >> b_i;
        long long a_i = b_i + current_max;
        cout << a_i << " ";
        current_max = max(current_max, a_i);
    }

    cout << endl;
    return 0;
}