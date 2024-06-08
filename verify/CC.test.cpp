#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D"

#include <bits/stdc++.h>
#include "other/Macro"
#include "other/CC"
#include <atcoder/fenwicktree>
using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    cin >> a;
    CC c;
    rep(i, n) c.add(a[i]);
    int m = c.size();
    rep(i, n) a[i] = c(a[i]);
    fenwick_tree<int> f(m);
    ll ans = 0;
    rep(i, n) {
        ans += f.sum(a[i], m);
        f.add(a[i], 1);
    }
    cout << ans << endl;
    return 0;
}