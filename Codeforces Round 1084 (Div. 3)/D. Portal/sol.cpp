// https://codeforces.com/contest/2200/problem/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int>middle;
        middle.reserve(y-x);
        for (int i = x; i < y; i++) {
            middle.push_back(a[i]);
        }
        vector<int>s;
        s.reserve(n-(y-x));
        for (int i = 0; i < x; i++) {
            s.push_back(a[i]);
        }
        for (int i = y; i < n; i++) {
            s.push_back(a[i]);
        }
        int min_idx = 0;
        for (int i = 1; i < (int)middle.size(); i++) {
            if (middle[i] < middle[min_idx]) {
                min_idx = i;
            }
        }
        vector<int> mOpt;
        mOpt.reserve(middle.size());

        for (int i = min_idx; i < (int)middle.size(); i++){
            mOpt.push_back(middle[i]);
        }
        for (int i = 0; i < min_idx; i++){
            mOpt.push_back(middle[i]);
        }
        int m0 = mOpt[0];
        int insert_pos = s.size();
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] > m0) {
                insert_pos = i;
                break;
            }
        }
        for (int i = 0; i < insert_pos; i++) {
            cout << s[i] << " ";
        }
        for (int i = 0; i < (int)mOpt.size(); i++) {
            cout << mOpt[i] << " ";
        }
        for (int i = insert_pos; i < (int)s.size(); i++) {
            cout << s[i] << " ";
        }
        cout << "\n";
    }
}