#include <bits/stdc++.h>

using namespace std;    

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool sorted = true;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] > s[i + 1]) {
                sorted = false;
                break;
            }
        }
        if (sorted) {
            cout << "Bob" << endl;
            continue;
        }
        int total_zeros = 0;
        for (char c : s) {
            if (c == '0') total_zeros++;
        }

        vector<int> indices;
        for (int i = 0; i < n; ++i) {
            if (i < total_zeros && s[i] == '1') {
                indices.push_back(i + 1);
            }
            else if (i >= total_zeros && s[i] == '0') {
                indices.push_back(i + 1);
            }
        }

        cout << "Alice" << endl;
        cout << indices.size() << endl;
        for (int i = 0; i < indices.size(); ++i) {
            cout << indices[i] << (i == indices.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}