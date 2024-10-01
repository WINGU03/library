#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B"

#include <bits/stdc++.h>
#include "template.hpp"
#include "graph/dynamic-bfs.hpp"

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    int n = 3;
    vector p(n, vector<int>(n));
    cin >> p;

    vector ans(n, vector<int>(n));
    rep(i, n) rep(j, n) if (i != 2 or j != 2) ans[i][j] = i * n + j + 1;

    auto f = [&](vector<vector<int>> &x) {
        vector<vector<vector<int>>> res;
        rep(i, n) rep(j, n) if (x[i][j] == 0) {
            rep(d, 4) {
                int ni = i + dx[d], nj = j + dy[d];
                if (ni < 0 or nj < 0 or ni >= n or nj >= n) continue;
                auto nex = x;
                swap(nex[i][j], nex[ni][nj]);
                res.push_back(nex);
            }
        }
        return res;
    };

    cout << dynamic_bfs(p, f, ans) << endl;
    return 0;
}