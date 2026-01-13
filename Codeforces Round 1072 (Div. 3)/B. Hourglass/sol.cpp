#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s, m, k;
        cin >> s >> k >> m;
        if(m/k & 1){
            s = min(s,k);
        }
        cout << max(0,s - m%k) << '\n';
    }
    return 0;
}