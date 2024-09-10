---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/yuki-rolling-hash-tree.test.cpp
    title: verify/yuki-rolling-hash-tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/rolling-hash-tree.hpp\"\n#include <atcoder/segtree>\n\
    \nmt19937_64 r(time(0));\nstatic const int mod1 = 1000000007, mod2 = 1000000009;\n\
    using mint1 = static_modint<mod1>;\nusing mint2 = static_modint<mod2>;\nstatic\
    \ const int base1 = r() % (mod1 - 4) + 2, base2 = r() % (mod2 - 4) + 2;\n\nusing\
    \ TT = tuple<mint1, mint2, mint1, mint2>;\nTT op(TT l, TT r) {\n    auto [a, b,\
    \ c, d] = l;\n    auto [e, f, g, h] = r;\n    mint1 res1 = a * g + e;\n    mint2\
    \ res2 = b * h + f;\n    return TT(res1, res2, c * g, d * h);\n}\nTT e() {\n \
    \   return TT(0, 0, 1, 1);\n}\n\nTT op_(TT l, TT r) {\n    auto [a, b, c, d] =\
    \ l;\n    auto [e, f, g, h] = r;\n    mint1 res1 = e * c + a;\n    mint2 res2\
    \ = f * d + b;\n    return TT(res1, res2, c * g, d * h);\n}\n\nstruct RollingHashTree\
    \ {\n    segtree<TT, op, e> seg;\n    segtree<TT, op_, e> r_seg;\n    bool reverse;\n\
    \n    explicit RollingHashTree(const string &s = \"\", bool reverse_ = false)\n\
    \        : reverse(reverse_) {\n        int n = s.size();\n        seg = segtree<TT,\
    \ op, e>(n);\n        if (reverse) r_seg = segtree<TT, op_, e>(n);\n        rep(i,\
    \ n) {\n            seg.set(i, TT(s[i], s[i], base1, base2));\n            if\
    \ (reverse) r_seg.set(i, TT(s[i], s[i], base1, base2));\n        }\n    }\n\n\
    \    inline void set(int i, char c) {\n        seg.set(i, TT(c, c, base1, base2));\n\
    \        if (reverse) r_seg.set(i, TT(c, c, base1, base2));\n    }\n\n    inline\
    \ ll get(int l, int r) {\n        auto [a, b, c, d] = seg.prod(l, r);\n      \
    \  return (ll)a.val() * mod2 + b.val();\n    }\n\n    inline ll r_get(int l, int\
    \ r) {\n        auto [a, b, c, d] = r_seg.prod(l, r);\n        return (ll)a.val()\
    \ * mod2 + b.val();\n    }\n};\n"
  code: "#include <atcoder/segtree>\n\nmt19937_64 r(time(0));\nstatic const int mod1\
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
    \ r);\n        return (ll)a.val() * mod2 + b.val();\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: string/rolling-hash-tree.hpp
  requiredBy: []
  timestamp: '2024-06-15 16:25:33+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/yuki-rolling-hash-tree.test.cpp
documentation_of: string/rolling-hash-tree.hpp
layout: document
title: Rolling Hash Tree
---

## コンストラクタ

```cpp
(1) SegmentRollingHash seg(string s) // reverse off
(2) SegmentRollingHash seg(string s, true) // reverse on
```

(1)では、文字列を反対方向から見たハッシュを取らないため、定数倍がよくなる。
(2)では、回文判定が行える。

## set

```cpp
void set(int i, char c)
```

文字列の一点更新

## get

```cpp
ll get(int l, int r)
```

閉区間[l, r)のハッシュ取得

## r_get

```cpp
ll r_get(int l, int r)
```

閉区間[l, r)の逆ハッシュ取得