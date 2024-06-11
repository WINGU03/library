#include <atcoder/segtree>
using namespace atcoder;

mt19937_64 r(time(0));
const int mod1 = 1000000007, mod2 = 1000000009;
const int base1 = r() % (mod1 - 4) + 2, base2 = r() % (mod2 - 4) + 2;

using TT = tuple<int, int, int, int>;
TT op(TT l, TT r) {
    auto [a, b, c, d] = l;
    auto [e, f, g, h] = r;
    int res1 = ((ll)a * g + e) % mod1;
    int res2 = ((ll)b * h + f) % mod2;
    return TT(res1, res2, ((ll)c * g) % mod1, ((ll)d * h) % mod2);
}
TT e() {
    return TT(0, 0, 1, 1);
}

TT op_(TT l, TT r) {
    auto [a, b, c, d] = l;
    auto [e, f, g, h] = r;
    int res1 = ((ll)e * c + a) % mod1;
    int res2 = ((ll)f * d + b) % mod2;
    return TT(res1, res2, ((ll)c * g) % mod1, ((ll)d * h) % mod2);
}

struct SegmentRollingHash {
    segtree<TT, op, e> seg;
    segtree<TT, op_, e> r_seg;
    bool reverse;

    SegmentRollingHash(const string &s = "", bool reverse_ = false)
        : reverse(reverse_) {
        int n = s.size();
        seg = segtree<TT, op, e>(n);
        if (reverse) r_seg = segtree<TT, op_, e>(n);
        rep(i, n) {
            seg.set(i, TT(s[i], s[i], base1, base2));
            if (reverse) r_seg.set(i, TT(s[i], s[i], base1, base2));
        }
    }

    inline void set(int i, char c) {
        seg.set(i, TT(c, c, base1, base2));
        if (reverse) r_seg.set(i, TT(c, c, base1, base2));
    }

    inline ll get(int l, int r) {
        auto [a, b, c, d] = seg.prod(l, r);
        return (ll)a * mod2 + b;
    }

    inline ll r_get(int l, int r) {
        auto [a, b, c, d] = r_seg.prod(l, r);
        return (ll)a * mod2 + b;
    }
};