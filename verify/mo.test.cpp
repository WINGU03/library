#define PROBLEM "https://judge.yosupo.jp/problem/static_range_inversions_query"

#include <bits/stdc++.h>
#include "template.hpp"
#include "misc/mo.hpp"
#include "misc/cc.hpp"
#include <atcoder/fenwicktree>

int main() {
    static int n, q;
    cin >> n >> q;
    static vector<int> a(n);
    cin >> a;
    static CC c;
    rep(i, n) c.add(a[i]);
    rep(i, n) a[i] = c(a[i]);

    static fenwick_tree<long long> f(n + 1);
    static long long ans = 0;
    struct M {
        using T = long long;
        static void add_left(int i) {
            ans += f.sum(0, a[i]);
            f.add(a[i], 1);
        }
        static void add_right(int i) {
            ans += f.sum(a[i] + 1, n);
            f.add(a[i], 1);
        }
        static void del_left(int i) {
            ans -= f.sum(0, a[i]);
            f.add(a[i], -1);
        }
        static void del_right(int i) {
            ans -= f.sum(a[i] + 1, n);
            f.add(a[i], -1);
        }
        static T res(int i) {
            return ans;
        }
    };

    Mo<M> mo(n, q);
    rep(i, q) {
        int l, r;
        cin >> l >> r;
        mo.add_query(l, r);
    }
    auto res = mo.run();
    for (auto i : res) cout << i << '\n';
    return 0;
}