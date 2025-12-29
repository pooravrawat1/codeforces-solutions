#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int answer =  ;
    set<int> unique_colors;
    for (int i = 0; i < 4; i++) {
        int a;
        cin >> a;
        unique_colors.insert(a);
    }
    answer = 4 - unique_colors.size();
    cout << answer << endl;
    return 0;
}