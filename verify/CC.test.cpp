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
    unordered_map<int, int> mp;
    auto sa = a;
    sort(all(sa));
    rep(i, n) mp[sa[i]] = i;
    rep(i, n) a[i] = mp[a[i]];
    fenwick_tree<int> f(n);
    ll ans = 0;
    rep(i, n) {
        ans += f.sum(a[i], n);
        f.add(a[i], 1);
    }
    cout << ans << endl;
    return 0;
}