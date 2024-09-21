#include <bits/stdc++.h>
using namespace std;

#include "data-structure/lazy-segment-tree.hpp"

struct M {
    int x, w;
};

M op(M a, M b) {
    a.x += b.x;
    a.w += b.w;
    return a;
}

M e() {
    return {0, 0};
}

M mapp(int f, M a) {
    if (f != 2000) a.x = f * a.w;
    return a;
}

int comp(int f, int g) {
    return f == 2000 ? g : f;
}

int id() {
    return 2000;
}

int main() {
    int n, q;
    cin >> n >> q;
    lazy_segtree<M, op, e, int, mapp, comp, id> seg(n);
    for (int i = 0; i < n; i++) seg.set(i, {0, 1});
    while (q--) {
        int t;
        cin >> t;
        if (t == 0) {
            int l, r, x;
            cin >> l >> r >> x;
            seg.apply(l, r + 1, x);
        } else {
            int l, r;
            cin >> l >> r;
            cout << seg.prod(l, r + 1).x << endl;
        }
    }
    return 0;
}