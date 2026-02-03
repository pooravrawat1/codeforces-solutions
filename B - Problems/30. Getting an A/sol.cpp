#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> grades(n);
    int curr_sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> grades[i];
        curr_sum += grades[i];    
    }
    sort(grades.begin(), grades.end());
    int res = 0;
    while (curr_sum * 10 < n * 45) {
        curr_sum = curr_sum + 5 - (grades[res]);
        res ++;
    }
    cout << res << endl;
}