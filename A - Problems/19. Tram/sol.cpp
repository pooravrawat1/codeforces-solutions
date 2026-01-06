#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int curr_passengers = 0;
    int capacity = 0;
    while (n--) {
        int exit, enter;
        cin >> exit >> enter;
        curr_passengers = curr_passengers - exit + enter;
        capacity = max(capacity, curr_passengers);    
    }
    cout << capacity << endl;
    return 0;
}