#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_B"

#include <bits/stdc++.h>
#include "template"
#include "graph/rerooting"

int merge(int a, int b) {
    return max(a, b);
}
int e() {
    return 0;
}
int leaf() {
    return 0;
}
int apply(int a, int c, int p, int w) {
    return a + w;
}

int main() {
    int n;
    cin >> n;
    Rerooting<int, int, merge, e, leaf, apply> g(n);
    rep(i, n - 1) {
        int u, v, w;
        cin >> u >> v >> w;
        g.add_edge(u, v, w);
        g.add_edge(v, u, w);
    }
    auto ans = g.run();
    rep(i, n) {
        cout << ans[i] << endl;
    }
    return 0;
}