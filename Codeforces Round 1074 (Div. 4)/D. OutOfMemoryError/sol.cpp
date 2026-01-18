#include <bits/stdc++.h>

using namespace std;

struct operations {
    int pos;
    long long val;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;
        vector<long long> inputArray(n);

        for (int i = 0; i < n; i++) {
            cin >> inputArray[i];
        }

        vector<operations> ops(m);
        for (int i = 0; i < m; i++) {
            cin >> ops[i].pos >> ops[i].val;
        }
        
        int lastCrashTime = -1;
        vector<long long> delta(n, 0);
        vector<int> timestamp(n, -1);
        
        for (int i = 0; i < m; i++) {
            int pos = ops[i].pos - 1;
            
            if (timestamp[pos] <= lastCrashTime) {
                delta[pos] = 0;
            }
            
            delta[pos] += ops[i].val;
            timestamp[pos] = i;
            
            if (inputArray[pos] + delta[pos] > h) {
                lastCrashTime = i;
            }
        }
        
        vector<long long> finalArray = inputArray;
        for (int i = 0; i < n; i++) {
            if (timestamp[i] > lastCrashTime) {
                finalArray[i] += delta[i];
            }
        }

        for (int i = 0; i < n; i++) {
            cout << finalArray[i];
            if (i < n - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}


    