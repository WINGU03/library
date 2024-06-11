---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/segment-rolling-hash.test.cpp
    title: verify/segment-rolling-hash.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/segment-rolling-hash.hpp\"\n#include <atcoder/segtree>\n\
    using namespace atcoder;\n\nmt19937_64 r(time(0));\nconst int mod1 = 1000000007,\
    \ mod2 = 1000000009;\nconst int base1 = r() % (mod1 - 4) + 2, base2 = r() % (mod2\
    \ - 4) + 2;\n\nusing TT = tuple<int, int, int, int>;\nTT op(TT l, TT r) {\n  \
    \  auto [a, b, c, d] = l;\n    auto [e, f, g, h] = r;\n    int res1 = ((ll)a *\
    \ g + e) % mod1;\n    int res2 = ((ll)b * h + f) % mod2;\n    return TT(res1,\
    \ res2, ((ll)c * g) % mod1, ((ll)d * h) % mod2);\n}\nTT e() {\n    return TT(0,\
    \ 0, 1, 1);\n}\n\nTT op_(TT l, TT r) {\n    auto [a, b, c, d] = l;\n    auto [e,\
    \ f, g, h] = r;\n    int res1 = ((ll)e * c + a) % mod1;\n    int res2 = ((ll)f\
    \ * d + b) % mod2;\n    return TT(res1, res2, ((ll)c * g) % mod1, ((ll)d * h)\
    \ % mod2);\n}\n\nstruct SegmentRollingHash {\n    segtree<TT, op, e> seg;\n  \
    \  segtree<TT, op_, e> r_seg;\n    bool reverse;\n\n    SegmentRollingHash(const\
    \ string &s = \"\", bool reverse_ = false)\n        : reverse(reverse_) {\n  \
    \      int n = s.size();\n        seg = segtree<TT, op, e>(n);\n        if (reverse)\
    \ r_seg = segtree<TT, op_, e>(n);\n        rep(i, n) {\n            seg.set(i,\
    \ TT(s[i], s[i], base1, base2));\n            if (reverse) r_seg.set(i, TT(s[i],\
    \ s[i], base1, base2));\n        }\n    }\n\n    inline void set(int i, char c)\
    \ {\n        seg.set(i, TT(c, c, base1, base2));\n        if (reverse) r_seg.set(i,\
    \ TT(c, c, base1, base2));\n    }\n\n    inline ll get(int l, int r) {\n     \
    \   auto [a, b, c, d] = seg.prod(l, r);\n        return (ll)a * mod2 + b;\n  \
    \  }\n\n    inline ll r_get(int l, int r) {\n        auto [a, b, c, d] = r_seg.prod(l,\
    \ r);\n        return (ll)a * mod2 + b;\n    }\n};\n"
  code: "#include <atcoder/segtree>\nusing namespace atcoder;\n\nmt19937_64 r(time(0));\n\
    const int mod1 = 1000000007, mod2 = 1000000009;\nconst int base1 = r() % (mod1\
    \ - 4) + 2, base2 = r() % (mod2 - 4) + 2;\n\nusing TT = tuple<int, int, int, int>;\n\
    TT op(TT l, TT r) {\n    auto [a, b, c, d] = l;\n    auto [e, f, g, h] = r;\n\
    \    int res1 = ((ll)a * g + e) % mod1;\n    int res2 = ((ll)b * h + f) % mod2;\n\
    \    return TT(res1, res2, ((ll)c * g) % mod1, ((ll)d * h) % mod2);\n}\nTT e()\
    \ {\n    return TT(0, 0, 1, 1);\n}\n\nTT op_(TT l, TT r) {\n    auto [a, b, c,\
    \ d] = l;\n    auto [e, f, g, h] = r;\n    int res1 = ((ll)e * c + a) % mod1;\n\
    \    int res2 = ((ll)f * d + b) % mod2;\n    return TT(res1, res2, ((ll)c * g)\
    \ % mod1, ((ll)d * h) % mod2);\n}\n\nstruct SegmentRollingHash {\n    segtree<TT,\
    \ op, e> seg;\n    segtree<TT, op_, e> r_seg;\n    bool reverse;\n\n    SegmentRollingHash(const\
    \ string &s = \"\", bool reverse_ = false)\n        : reverse(reverse_) {\n  \
    \      int n = s.size();\n        seg = segtree<TT, op, e>(n);\n        if (reverse)\
    \ r_seg = segtree<TT, op_, e>(n);\n        rep(i, n) {\n            seg.set(i,\
    \ TT(s[i], s[i], base1, base2));\n            if (reverse) r_seg.set(i, TT(s[i],\
    \ s[i], base1, base2));\n        }\n    }\n\n    inline void set(int i, char c)\
    \ {\n        seg.set(i, TT(c, c, base1, base2));\n        if (reverse) r_seg.set(i,\
    \ TT(c, c, base1, base2));\n    }\n\n    inline ll get(int l, int r) {\n     \
    \   auto [a, b, c, d] = seg.prod(l, r);\n        return (ll)a * mod2 + b;\n  \
    \  }\n\n    inline ll r_get(int l, int r) {\n        auto [a, b, c, d] = r_seg.prod(l,\
    \ r);\n        return (ll)a * mod2 + b;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: string/segment-rolling-hash.hpp
  requiredBy: []
  timestamp: '2024-06-11 17:46:25+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/segment-rolling-hash.test.cpp
documentation_of: string/segment-rolling-hash.hpp
layout: document
redirect_from:
- /library/string/segment-rolling-hash.hpp
- /library/string/segment-rolling-hash.hpp.html
title: string/segment-rolling-hash.hpp
---
