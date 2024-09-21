#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B"

#include <bits/stdc++.h>
using namespace std;

#include "data-structure/fenwick-tree.hpp"

int main() {
    int n, q;
    cin >> n >> q;
    fenwick_tree<int> f(n);
    while (q--) {
        int t;
        cin >> t;
        if (t == 0) {
            int i, x;
            cin >> i >> x;
            f.add(i - 1, x);
        } else {
            int l, r;
            cin >> l >> r;
            cout << f.sum(l - 1, r) << endl;
        }
    }
    return 0;
}
