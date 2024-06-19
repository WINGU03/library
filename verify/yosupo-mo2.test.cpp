#define PROBLEM "https://judge.yosupo.jp/problem/static_range_frequency"

#include <bits/stdc++.h>
#include "template.hpp"
#include "other/cc.hpp"
#include "other/Mo.hpp"

int main() {
    static int n, q;
    cin >> n >> q;
    static vector<int> a(n);
    cin >> a;

    static CC c;
    rep(i, n) c.add(a[i]);
    rep(i, n) a[i] = c(a[i]);
    static vector<int> cnt(c.size());
    static vector<int> l(q), r(q), x(q);
    rep(i, q) cin >> l[i] >> r[i] >> x[i];
    struct M {
        using T = int;
        static void add_left(int pos) {
            cnt[a[pos]]++;
        }
        static void add_right(int pos) {
            cnt[a[pos]]++;
        }
        static void del_left(int pos) {
            cnt[a[pos]]--;
        }
        static void del_right(int pos) {
            cnt[a[pos]]--;
        }
        static T res(int i) {
            if (n == 0) return 0;
            if (c(x[i]) == 0 and c[0] != x[i]) return 0;
            return cnt[c(x[i])];
        }
    };

    Mo<M> mo(n, q);
    rep(i, q) {
        mo.add_query(l[i], r[i]);
    }
    auto res = mo.run();
    for (auto i : res) cout << i << '\n';
    return 0;
}