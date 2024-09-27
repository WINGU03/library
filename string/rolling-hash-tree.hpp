#include <atcoder/segtree>

mt19937_64 rnd(time(0));
static const int mod1 = 1000000007, mod2 = 1000000009;
using mint1 = static_modint<mod1>;
using mint2 = static_modint<mod2>;
static const int base1 = rnd() % (mod1 - 4) + 2, base2 = rnd() % (mod2 - 4) + 2;

using D = tuple<mint1, mint2, mint1, mint2>;
D op(D l, D r) {
    auto [a, b, c, d] = l;
    auto [e, f, g, h] = r;
    mint1 res1 = a * g + e;
    mint2 res2 = b * h + f;
    return D(res1, res2, c * g, d * h);
}
D e() {
    return D(0, 0, 1, 1);
}

D op_(D l, D r) {
    auto [a, b, c, d] = l;
    auto [e, f, g, h] = r;
    mint1 res1 = e * c + a;
    mint2 res2 = f * d + b;
    return D(res1, res2, c * g, d * h);
}

struct RollingHashTree {
    segtree<D, op, e> seg;
    segtree<D, op_, e> rseg;
    bool reverse;

    explicit RollingHashTree(const string &s = "", bool reverse_ = false)
        : reverse(reverse_) {
        int n = s.size();
        seg = segtree<D, op, e>(n);
        if (reverse) rseg = segtree<D, op_, e>(n);
        rep(i, n) {
            seg.set(i, D(s[i], s[i], base1, base2));
            if (reverse) rseg.set(i, D(s[i], s[i], base1, base2));
        }
    }

    inline void set(int i, char c) {
        seg.set(i, D(c, c, base1, base2));
        if (reverse) rseg.set(i, D(c, c, base1, base2));
    }

    inline long long get(int l, int r) {
        auto [a, b, c, d] = seg.prod(l, r);
        return (long long)a.val() * mod2 + b.val();
    }

    inline long long rget(int l, int r) {
        auto [a, b, c, d] = rseg.prod(l, r);
        return (long long)a.val() * mod2 + b.val();
    }
};