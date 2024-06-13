---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/rolling-hash-tree.hpp
    title: Rolling Hash Tree
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://yukicoder.me/problems/no/2761
    links:
    - https://yukicoder.me/problems/no/2761
  bundledCode: "#line 1 \"verify/yuki-rolling-hash-tree.test.cpp\"\n#define PROBLEM\
    \ \"https://yukicoder.me/problems/no/2761\"\n\n#include <bits/stdc++.h>\n\n#line\
    \ 2 \"template.hpp\"\nusing namespace std;\n#include <atcoder/modint>\nusing namespace\
    \ atcoder;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n#define dump(...)\
    \ cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n#define dump(...)\n#endif\n#define\
    \ rep1(i, a) for (int i = 0; i < (int)(a); i++)\n#define rep2(i, a, b) for (int\
    \ i = (int)(a); i < (int)(b); i++)\n#define rep3(i, a, b, c) for (int i = (int)(a);\
    \ i < (int)(b); i += (int)(c))\n#define overloadRep(a, b, c, d, e, ...) e\n#define\
    \ rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n#define rrep(i,\
    \ a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i, a, b) for\
    \ (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(), a.end()\n\
    #define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nusing P = pair<ll, ll>;\nusing T = tuple<ll, ll, ll>;\nconst int\
    \ inf = 1e9;\nconst ll INF = 1e18;\nconst int dx[4] = {0, 1, 0, -1};\nconst int\
    \ dy[4] = {1, 0, -1, 0};\n\nstruct cincout {\n    cincout() {\n        ios_base::sync_with_stdio(false);\n\
    \        cin.tie(nullptr);\n        cout << fixed << setprecision(15);\n    }\n\
    } init;\n\ntemplate <class T>\ninline bool chmax(T &a, T b) {\n    if (a < b)\
    \ {\n        a = b;\n        return true;\n    }\n    return false;\n}\n\ntemplate\
    \ <class T>\ninline bool chmin(T &a, T b) {\n    if (a > b) {\n        a = b;\n\
    \        return true;\n    }\n    return false;\n}\n\ntemplate <class T>\nistream\
    \ &operator>>(istream &is, vector<T> &v) {\n    for (T &in : v) {\n        is\
    \ >> in;\n    }\n    return is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const vector<T> &v) {\n    rep(i, (int)v.size()) {\n        os << v[i]\
    \ << \" \\n\"[i + 1 == (int)v.size()];\n    }\n    return os;\n}\n\ntemplate <class\
    \ T>\nistream &operator>>(istream &is, vector<vector<T>> &vv) {\n    for (vector<T>\
    \ &v : vv) {\n        is >> v;\n    }\n    return is;\n}\n\ntemplate <class T>\n\
    ostream &operator<<(ostream &os, vector<vector<T>> &vv) {\n    for (vector<T>\
    \ &v : vv) {\n        os << v;\n    }\n    return os;\n}\n\ntemplate <class T1,\
    \ class T2>\nistream &operator>>(istream &is, pair<T1, T2> &p) {\n    is >> p.first\
    \ >> p.second;\n    return is;\n}\n\ntemplate <class T1, class T2>\nostream &operator<<(ostream\
    \ &os, const pair<T1, T2> &p) {\n    os << p.first << \" \" << p.second << '\\\
    n';\n    return os;\n}\n\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n\
    }\n\nbool out(int ni, int nj, int h, int w) {\n    return (ni < 0 or ni >= h or\
    \ nj < 0 or nj >= w);\n}\n\nint pc(ll x) {\n    return __builtin_popcountll(x);\n\
    }\n#line 6 \"verify/yuki-rolling-hash-tree.test.cpp\"\n\n#line 1 \"string/rolling-hash-tree.hpp\"\
    \n#include <atcoder/segtree>\n\nmt19937_64 r(time(0));\nstatic const int mod1\
    \ = 1000000007, mod2 = 1000000009;\nusing mint1 = static_modint<mod1>;\nusing\
    \ mint2 = static_modint<mod2>;\nstatic const int base1 = r() % (mod1 - 4) + 2,\
    \ base2 = r() % (mod2 - 4) + 2;\n\nusing TT = tuple<mint1, mint2, mint1, mint2>;\n\
    TT op(TT l, TT r) {\n    auto [a, b, c, d] = l;\n    auto [e, f, g, h] = r;\n\
    \    mint1 res1 = a * g + e;\n    mint2 res2 = b * h + f;\n    return TT(res1,\
    \ res2, c * g, d * h);\n}\nTT e() {\n    return TT(0, 0, 1, 1);\n}\n\nTT op_(TT\
    \ l, TT r) {\n    auto [a, b, c, d] = l;\n    auto [e, f, g, h] = r;\n    mint1\
    \ res1 = e * c + a;\n    mint2 res2 = f * d + b;\n    return TT(res1, res2, c\
    \ * g, d * h);\n}\n\nstruct RollingHashTree {\n    segtree<TT, op, e> seg;\n \
    \   segtree<TT, op_, e> r_seg;\n    bool reverse;\n\n    explicit RollingHashTree(const\
    \ string &s = \"\", bool reverse_ = false)\n        : reverse(reverse_) {\n  \
    \      int n = s.size();\n        seg = segtree<TT, op, e>(n);\n        if (reverse)\
    \ r_seg = segtree<TT, op_, e>(n);\n        rep(i, n) {\n            seg.set(i,\
    \ TT(s[i], s[i], base1, base2));\n            if (reverse) r_seg.set(i, TT(s[i],\
    \ s[i], base1, base2));\n        }\n    }\n\n    inline void set(int i, char c)\
    \ {\n        seg.set(i, TT(c, c, base1, base2));\n        if (reverse) r_seg.set(i,\
    \ TT(c, c, base1, base2));\n    }\n\n    inline ll get(int l, int r) {\n     \
    \   auto [a, b, c, d] = seg.prod(l, r);\n        return (ll)a.val() * mod2 + b.val();\n\
    \    }\n\n    inline ll r_get(int l, int r) {\n        auto [a, b, c, d] = r_seg.prod(l,\
    \ r);\n        return (ll)a.val() * mod2 + b.val();\n    }\n};\n#line 8 \"verify/yuki-rolling-hash-tree.test.cpp\"\
    \n\nint main() {\n    int n, l, q;\n    cin >> n >> l >> q;\n    vector<string>\
    \ s(n);\n    cin >> s;\n    vector<RollingHashTree> RollingHash(n);\n    rep(i,\
    \ n) {\n        RollingHash[i] = RollingHashTree(s[i]);\n    }\n\n    while (q--)\
    \ {\n        int type;\n        cin >> type;\n        if (type == 1) {\n     \
    \       int k;\n            char c, d;\n            cin >> k >> c >> d;\n    \
    \        k--;\n            rep(i, n) {\n                if (s[i][k] == c) {\n\
    \                    s[i][k] = d;\n                    RollingHash[i].set(k, d);\n\
    \                }\n            }\n        } else {\n            string t;\n \
    \           cin >> t;\n            int m = t.size();\n            ll cor1 = 0,\
    \ cor2 = 0;\n            rep(i, m) {\n                cor1 = cor1 * base1 + t[i];\n\
    \                cor1 %= mod1;\n            }\n            rep(i, m) {\n     \
    \           cor2 = cor2 * base2 + t[i];\n                cor2 %= mod2;\n     \
    \       }\n\n            int ans = 0;\n            rep(i, n) {\n             \
    \   if (RollingHash[i].get(0, m) == cor1 * mod2 + cor2) ans++;\n            }\n\
    \n            cout << ans << endl;\n        }\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://yukicoder.me/problems/no/2761\"\n\n#include <bits/stdc++.h>\n\
    \n#include \"template.hpp\"\n\n#include \"string/rolling-hash-tree.hpp\"\n\nint\
    \ main() {\n    int n, l, q;\n    cin >> n >> l >> q;\n    vector<string> s(n);\n\
    \    cin >> s;\n    vector<RollingHashTree> RollingHash(n);\n    rep(i, n) {\n\
    \        RollingHash[i] = RollingHashTree(s[i]);\n    }\n\n    while (q--) {\n\
    \        int type;\n        cin >> type;\n        if (type == 1) {\n         \
    \   int k;\n            char c, d;\n            cin >> k >> c >> d;\n        \
    \    k--;\n            rep(i, n) {\n                if (s[i][k] == c) {\n    \
    \                s[i][k] = d;\n                    RollingHash[i].set(k, d);\n\
    \                }\n            }\n        } else {\n            string t;\n \
    \           cin >> t;\n            int m = t.size();\n            ll cor1 = 0,\
    \ cor2 = 0;\n            rep(i, m) {\n                cor1 = cor1 * base1 + t[i];\n\
    \                cor1 %= mod1;\n            }\n            rep(i, m) {\n     \
    \           cor2 = cor2 * base2 + t[i];\n                cor2 %= mod2;\n     \
    \       }\n\n            int ans = 0;\n            rep(i, n) {\n             \
    \   if (RollingHash[i].get(0, m) == cor1 * mod2 + cor2) ans++;\n            }\n\
    \n            cout << ans << endl;\n        }\n    }\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - string/rolling-hash-tree.hpp
  isVerificationFile: true
  path: verify/yuki-rolling-hash-tree.test.cpp
  requiredBy: []
  timestamp: '2024-06-13 19:27:31+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/yuki-rolling-hash-tree.test.cpp
layout: document
redirect_from:
- /verify/verify/yuki-rolling-hash-tree.test.cpp
- /verify/verify/yuki-rolling-hash-tree.test.cpp.html
title: verify/yuki-rolling-hash-tree.test.cpp
---
