// https://codeforces.com/contest/2195/problem/E
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

struct Node {
    int l, r;
};

void calc_S(int n, const vector<Node>& tree, vector<ll>& S) {
    vector<pair<int, int>> stack;
    stack.reserve(n);
    stack.push_back({1, 0});

    while (!stack.empty()) {
        int u = stack.back().first;
        int st = stack.back().second;
        stack.pop_back();

        if (st == 0) {
            stack.push_back({u, 1});
            if (tree[u].r != 0) stack.push_back({tree[u].r, 0});
            if (tree[u].l != 0) stack.push_back({tree[u].l, 0});
        } else {
            if (tree[u].l == 0 && tree[u].r == 0) {
                S[u] = 1;
            } else {
                ll sl;
                if (tree[u].l != 0) {
                    sl = S[tree[u].l];
                } else {
                    sl = 0;
                }
                ll sr;
                if (tree[u].r != 0) {
                    sr = S[tree[u].r];
                } else {
                    sr = 0;
                }
                S[u] = (sl + sr + 3) % MOD;
            }
        }
    }
}

void calc_T(int n, const vector<Node>& tree, const vector<ll>& S, vector<ll>& T) {
    T[1] = S[1];
    vector<int> stack;
    stack.reserve(n);
    if (tree[1].l != 0) stack.push_back(tree[1].l);
    if (tree[1].r != 0) stack.push_back(tree[1].r);
    stack.push_back(1);
    
    while(!stack.empty()){
        int u = stack.back();
        stack.pop_back();
        
        int lc = tree[u].l;
        int rc = tree[u].r;
        
        if(lc != 0) {
            T[lc] = (T[u] + S[lc]) % MOD;
            stack.push_back(lc);
        }
        if(rc != 0) {
            T[rc] = (T[u] + S[rc]) % MOD;
            stack.push_back(rc);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Node> tree(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> tree[i].l >> tree[i].r;
        }
        if (n == 0) {
            continue;
        }
        vector<ll> S(n + 1);
        calc_S(n, tree, S);

        vector<ll> T(n + 1);
        calc_T(n, tree, S, T);

        for (int i = 1; i <= n; i++) {
            cout << T[i];
            if (i == n) {
                cout << "";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}