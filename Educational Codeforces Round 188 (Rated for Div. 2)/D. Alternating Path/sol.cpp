// https://codeforces.com/contest/2204/problem/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>>adj(n + 1);
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>clr(n + 1, -1);
        int maxbeau = 0;

        for (int i = 1; i <= n; i++) {
            if (clr[i] != -1) {
                continue;
            }
            int countclr[2] = {0, 0};
            bool bpt = true;
            queue<int> q;
            q.push(i);
            clr[i] = 0;
            countclr[0]++;

            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int v : adj[u]) {
                    if (clr[v] == -1) {
                        clr[v] = 1 - clr[u];
                        countclr[clr[v]]++;
                        q.push(v);
                    } else if (clr[v] == clr[u]) {
                        bpt = false;
                    }
                }
            }
            if (bpt) {
                maxbeau += max(countclr[0], countclr[1]);
            }
        }
        cout << maxbeau << "\n";
    }
}