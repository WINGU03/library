#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D"

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/fenwicktree>
using namespace atcoder;
#include "other/CC"
#include "other/Macro"

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    cin >> a;
    CC c;
    rep(i, n) c.add(a[i]);
    int m = c.size();
    fenwick_tree<int> f(m);
    ll ans = 0;
    rep(i, n) {
        ans += f.sum(c(a[i]), m);
        f.add(c(a[i]), 1);
    }
    cout << ans << endl;
    return 0;
}