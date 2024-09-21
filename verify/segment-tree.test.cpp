#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A"

#include <bits/stdc++.h>
using namespace std;

#include "data-structure/segment-tree.hpp"

int op(int a, int b) {
    return min(a, b);
}

int e() {
    return (1 << 30) - 1 + (1 << 30);
}

int main() {
    int n, q;
    cin >> n >> q;
    segtree<int, op, e> seg(n);
    while (q--) {
        int t;
        cin >> t;
        if (t == 0) {
            int i, x;
            cin >> i >> x;
            seg.set(i, x);
        } else {
            int l, r;
            cin >> l >> r;
            cout << seg.prod(l, r + 1) << endl;
        }
    }
    return 0;
}