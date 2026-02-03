#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> schedule(n);
    for (int i = 0; i < n; i++) {
        cin >> schedule[i];       
    }
    
    int start_count = 0;
    for (int i = 0; i < n; i++) {
        if (schedule[i] == 1) {
            start_count++;
        } else {
            break;
        }
    }
    
    int end_count = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (schedule[i] == 1) {
            end_count++;
        } else {
            break;
        }
    }
    
    if (start_count == n) {
        cout << 0 << endl;
        return 0;
    }
    
    int max_rest = max(start_count, end_count);
    int current = 0;
    for (int i = 0; i < n; i++) {
        if (schedule[i] == 1) {
            current++;
            max_rest = max(max_rest, current);
        } else {
            current = 0;
        }
    }
    
    max_rest = max(max_rest, start_count + end_count);
    
    cout << max_rest << endl;
    return 0;
}