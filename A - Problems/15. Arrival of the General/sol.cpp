#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_height = -1;
    int min_height = 101;
    int max_index = 0;
    int min_index = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max_height){
            max_height = a[i];
            max_index = i;
        }
        if (a[i] <= min_height) {
            min_height = a[i];
            min_index = i;
        }
    }
    int seconds = max_index + (n - min_index - 1);
    if (max_index > min_index) {
        seconds--;
    }

    cout << seconds << endl;
    return 0;

}