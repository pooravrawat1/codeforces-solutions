#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector <int> blocks;
        int curr_block = 0;
        for (char c : s) {
            if (c == '1') {
                curr_block++;
            }
            else {
                if (curr_block > 0) {
                    blocks.push_back(curr_block);
                }
                curr_block = 0;
            }
        }
        if (curr_block > 0) {
            blocks.push_back(curr_block);
        }
        sort(blocks.rbegin(), blocks.rend());

        int score = 0;
        for (int i = 0; i < blocks.size(); i += 2) {
            score += blocks[i];
        }
        cout << score << endl;
    }
    return 0;
}