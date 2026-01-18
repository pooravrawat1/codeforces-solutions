#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector <int> robots(n);
        vector<int> spikes(m);
        for (int i = 0; i < n; i++) {
            cin >> robots[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> spikes[i];
        }
        sort(spikes.begin(), spikes.end());

        string s;
        cin >> s;

        vector<int> leftReach(k + 1, 0);
        vector<int> rightReach(k + 1, 0);
        int currentOffset = 0;
        int maxL = 0;
        int maxR = 0;

        for (int i = 0; i < k; i++) {
            if (s[i] == 'L') {
                currentOffset--;
            }
            else {
                currentOffset++;
            }

            maxL = max(maxL, -currentOffset);
            maxR = max(maxR, currentOffset);

            leftReach[i + 1] = maxL;
            rightReach[i + 1] = maxR;
        }

        vector<int> death_on_step(k + 2, 0);

        for (int i = 0; i < n; i++) {
            int pos = robots[i];
            int time_to_die = k + 1;

            auto it = lower_bound(spikes.begin(), spikes.end(), pos);

            if (it != spikes.begin()) {
                int leftSpike = *prev(it);
                int dist = pos - leftSpike;
                auto stepIt = lower_bound(leftReach.begin(), leftReach.end(), dist);
                if (stepIt != leftReach.end()) {
                    int step = (int)distance(leftReach.begin(), stepIt);
                    time_to_die = min(time_to_die, step);
                }
            }
            
            if (it != spikes.end()) {
                int rightSpike = *it;
                int dist = rightSpike - pos;
                auto stepIt = lower_bound(rightReach.begin(), rightReach.end(), dist);
                if (stepIt != rightReach.end()) {
                    int step = (int)distance(rightReach.begin(), stepIt);
                    time_to_die = min(time_to_die, step);
                }
            }
            
            if (time_to_die <= k) {
                death_on_step[time_to_die]++;
            }
        }
        int alive = n;
        for (int i = 1; i <= k; i++) {
            alive -= death_on_step[i];
            cout << alive;
            if (i < k) {
                cout << " ";
            }
        }
        cout << "\n";
    }
}