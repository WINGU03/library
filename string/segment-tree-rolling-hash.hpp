#include <atcoder/segtree>

random_device rd;
mt19937_64 rnd(rd());
static constexpr long long mod = (1LL << 61) - 1;
static const long long base = rnd() % (mod - 4) + 2;

using D = pair<long long, long long>;

D op(D l, D r) {
    auto [a, b] = l;
    auto [c, d] = r;
    __int128_t x = (__int128_t)a * d + c;
    return D(x % mod, ((__int128_t)b * d) % mod);
}
D e() {
    return D(0, 1);
}

D op_(D l, D r) {
    auto [a, b] = l;
    auto [c, d] = r;
    __int128_t x = (__int128_t)c * b + a;
    return D(x % mod, ((__int128_t)b * d) % mod);
}

struct rolling_hash {
    segtree<D, op, e> seg;
    segtree<D, op_, e> rseg;
    bool reverse;

    explicit rolling_hash(const string &s = "", bool reverse_ = false)
        : reverse(reverse_) {
        int n = s.size();
        seg = segtree<D, op, e>(n);
        if (reverse) rseg = segtree<D, op_, e>(n);
        rep(i, n) {
            seg.set(i, D(s[i], base));
            if (reverse) rseg.set(i, D(s[i], base));
        }
    }

    inline void set(int i, char c) {
        seg.set(i, D(c, base));
        if (reverse) rseg.set(i, D(c, base));
    }

    inline long long get(int l, int r) {
        auto [a, b] = seg.prod(l, r);
        return a;
    }

    inline long long rget(int l, int r) {
        auto [a, b] = rseg.prod(l, r);
        return a;
    }
};