#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> odd;
    vector <int> even;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            even.push_back(a);
        }
        else {
            odd.push_back(a);
        }
    }
    
    int len_even = even.size();
    int len_odd = odd.size();
    if (abs(len_even - len_odd) <= 1) {
        cout << 0 << endl;
        return 0;
    }
    
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    long long sum = 0;
    if (len_even > len_odd) {
        int diff = len_even - len_odd - 1;
        for (int i = 0; i < diff; i++) {
            sum += even[i];
        }
    }
    else {
        int diff = len_odd - len_even - 1;
        for (int i = 0; i < diff; i++) {
            sum += odd[i];
        }
    }
    cout << sum << endl;
    return 0;
}