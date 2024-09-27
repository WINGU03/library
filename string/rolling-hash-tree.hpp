#include <atcoder/segtree>

mt19937_64 rnd(time(0));
static const int mod1 = 1000000007, mod2 = 1000000009;
using mint1 = static_modint<mod1>;
using mint2 = static_modint<mod2>;
static const int base1 = rnd() % (mod1 - 4) + 2, base2 = rnd() % (mod2 - 4) + 2;

using TT = tuple<mint1, mint2, mint1, mint2>;
TT op(TT l, TT r) {
    auto [a, b, c, d] = l;
    auto [e, f, g, h] = r;
    mint1 res1 = a * g + e;
    mint2 res2 = b * h + f;
    return TT(res1, res2, c * g, d * h);
}
TT e() {
    return TT(0, 0, 1, 1);
}

TT op_(TT l, TT r) {
    auto [a, b, c, d] = l;
    auto [e, f, g, h] = r;
    mint1 res1 = e * c + a;
    mint2 res2 = f * d + b;
    return TT(res1, res2, c * g, d * h);
}

struct RollingHashTree {
    segtree<TT, op, e> seg;
    segtree<TT, op_, e> r_seg;
    bool reverse;

    explicit RollingHashTree(const string &s = "", bool reverse_ = false)
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

    inline long long get(int l, int r) {
        auto [a, b, c, d] = seg.prod(l, r);
        return (long long)a.val() * mod2 + b.val();
    }

    inline long long r_get(int l, int r) {
        auto [a, b, c, d] = r_seg.prod(l, r);
        return (long long)a.val() * mod2 + b.val();
    }
};