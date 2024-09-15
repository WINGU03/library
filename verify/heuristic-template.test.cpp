#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B"

#include <bits/stdc++.h>
#include "misc/heuristic-template.hpp"

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
    int n = 3;
    vector a(n, vector<int>(3));
    rep(i, n) rep(j, n) cin >> a[i][j];

    vector<vector<int>> ans = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};

    if (ans == a) {
        cout << 0 << endl;
        return 0;
    }

    map<vector<vector<int>>, int> dist;
    map<vector<vector<int>>, bool> used;
    queue<vector<vector<int>>> q;
    used[a] = true;
    q.push(a);
    while (q.size()) {
        auto cur = q.front();
        q.pop();
        rep(i, 3) rep(j, 3) if (cur[i][j] == 0) {
            rep(d, 4) {
                int ni = i + dx[d], nj = j + dy[d];
                if (ni < 0 or ni >= n or nj < 0 or nj >= n) continue;
                auto nex = cur;
                swap(nex[ni][nj], nex[i][j]);
                if (nex == ans) {
                    cout << dist[cur] + 1 << endl;
                    return 0;
                }
                if (used[nex]) continue;
                dist[nex] = dist[cur] + 1;
                used[nex] = true;
                q.push(nex);
            }
        }
    }
    return 0;
}