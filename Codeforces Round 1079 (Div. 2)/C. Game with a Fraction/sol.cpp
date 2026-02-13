#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
	while(t--) {    
        long long p, q;
        cin >> p >> q;
        if (p < q && min(p / 2, q / 3) >= q - p){
            cout << "Bob" << "\n";
        }
        else{
            cout << "Alice" << "\n";
        }
    }
}