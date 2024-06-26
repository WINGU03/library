#include <bits/stdc++.h>
using namespace std;
#include <atcoder/modint>
using namespace atcoder;

#ifdef DEFINED_ONLY_IN_LOCAL
#include <dump.hpp>
#define dump(...) cpp_dump(__VA_ARGS__)
#else
#undef dump
#define dump(...)
#endif
#define rep1(i, a) for (int i = 0; i < (int)(a); i++)
#define rep2(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define rep3(i, a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))
#define overloadRep(a, b, c, d, e, ...) e
#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)
#define rrep(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)
#define drep(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};

struct cincout {
    cincout() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout << fixed << setprecision(15);
    }
} init;

// chmax chmin
template <class T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template <class T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

// pair
template <class T1, class T2>
istream &operator>>(istream &is, pair<T1, T2> &p) {
    is >> p.first >> p.second;
    return is;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    os << p.first << " " << p.second << '\n';
    return os;
}

// vector
template <class T>
istream &operator>>(istream &is, vector<T> &v) {
    for (T &in : v) {
        is >> in;
    }
    return is;
}

template <class T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    rep(i, (int)v.size()) {
        os << v[i] << " \n"[i + 1 == (int)v.size()];
    }
    return os;
}

template <class T>
istream &operator>>(istream &is, vector<vector<T>> &vv) {
    for (vector<T> &v : vv) {
        is >> v;
    }
    return is;
}

template <class T>
ostream &operator<<(ostream &os, vector<vector<T>> &vv) {
    for (vector<T> &v : vv) {
        os << v;
    }
    return os;
}

bool bit(ll x, int p) {
    return (x >> p) & 1;
}

bool out(int ni, int nj, int h, int w) {
    return (ni < 0 or ni >= h or nj < 0 or nj >= w);
}

int pc(ll x) {
    return __builtin_popcountll(x);
}