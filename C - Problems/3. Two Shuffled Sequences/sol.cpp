#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> counts;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        counts[a[i]]++;
        if(counts[a[i]] > 2) {
            cout << "NO" << endl;
            return 0;
        }
    }

    vector<int> inc, dec;
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        if(i > 0 && a[i] == a[i-1]) {
            dec.push_back(a[i]);
        } else {
            inc.push_back(a[i]);
        }
    }

    sort(dec.rbegin(), dec.rend());

    cout << "YES" << endl;
    cout << inc.size() << endl;
    for(int i = 0; i < inc.size(); i++) cout << inc[i] << (i == inc.size()-1 ? "" : " ");
    cout << endl;
    
    cout << dec.size() << endl;
    for(int i = 0; i < dec.size(); i++) cout << dec[i] << (i == dec.size()-1 ? "" : " ");
    cout << endl;

    return 0;
}