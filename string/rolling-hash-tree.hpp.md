---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/rolling-hash-tree.test.cpp
    title: verify/rolling-hash-tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/rolling-hash-tree.hpp\"\n#include <atcoder/segtree>\n\
    \nmt19937_64 rnd(time(0));\nstatic const int mod1 = 1000000007, mod2 = 1000000009;\n\
    using mint1 = static_modint<mod1>;\nusing mint2 = static_modint<mod2>;\nstatic\
    \ const int base1 = rnd() % (mod1 - 4) + 2, base2 = rnd() % (mod2 - 4) + 2;\n\n\
    using D = tuple<mint1, mint2, mint1, mint2>;\nD op(D l, D r) {\n    auto [a, b,\
    \ c, d] = l;\n    auto [e, f, g, h] = r;\n    mint1 res1 = a * g + e;\n    mint2\
    \ res2 = b * h + f;\n    return D(res1, res2, c * g, d * h);\n}\nD e() {\n   \
    \ return D(0, 0, 1, 1);\n}\n\nD op_(D l, D r) {\n    auto [a, b, c, d] = l;\n\
    \    auto [e, f, g, h] = r;\n    mint1 res1 = e * c + a;\n    mint2 res2 = f *\
    \ d + b;\n    return D(res1, res2, c * g, d * h);\n}\n\nstruct RollingHashTree\
    \ {\n    segtree<D, op, e> seg;\n    segtree<D, op_, e> rseg;\n    bool reverse;\n\
    \n    explicit RollingHashTree(const string &s = \"\", bool reverse_ = false)\n\
    \        : reverse(reverse_) {\n        int n = s.size();\n        seg = segtree<D,\
    \ op, e>(n);\n        if (reverse) rseg = segtree<D, op_, e>(n);\n        rep(i,\
    \ n) {\n            seg.set(i, D(s[i], s[i], base1, base2));\n            if (reverse)\
    \ rseg.set(i, D(s[i], s[i], base1, base2));\n        }\n    }\n\n    inline void\
    \ set(int i, char c) {\n        seg.set(i, D(c, c, base1, base2));\n        if\
    \ (reverse) rseg.set(i, D(c, c, base1, base2));\n    }\n\n    inline long long\
    \ get(int l, int r) {\n        auto [a, b, c, d] = seg.prod(l, r);\n        return\
    \ (long long)a.val() * mod2 + b.val();\n    }\n\n    inline long long rget(int\
    \ l, int r) {\n        auto [a, b, c, d] = rseg.prod(l, r);\n        return (long\
    \ long)a.val() * mod2 + b.val();\n    }\n};\n"
  code: "#include <atcoder/segtree>\n\nmt19937_64 rnd(time(0));\nstatic const int\
    \ mod1 = 1000000007, mod2 = 1000000009;\nusing mint1 = static_modint<mod1>;\n\
    using mint2 = static_modint<mod2>;\nstatic const int base1 = rnd() % (mod1 - 4)\
    \ + 2, base2 = rnd() % (mod2 - 4) + 2;\n\nusing D = tuple<mint1, mint2, mint1,\
    \ mint2>;\nD op(D l, D r) {\n    auto [a, b, c, d] = l;\n    auto [e, f, g, h]\
    \ = r;\n    mint1 res1 = a * g + e;\n    mint2 res2 = b * h + f;\n    return D(res1,\
    \ res2, c * g, d * h);\n}\nD e() {\n    return D(0, 0, 1, 1);\n}\n\nD op_(D l,\
    \ D r) {\n    auto [a, b, c, d] = l;\n    auto [e, f, g, h] = r;\n    mint1 res1\
    \ = e * c + a;\n    mint2 res2 = f * d + b;\n    return D(res1, res2, c * g, d\
    \ * h);\n}\n\nstruct RollingHashTree {\n    segtree<D, op, e> seg;\n    segtree<D,\
    \ op_, e> rseg;\n    bool reverse;\n\n    explicit RollingHashTree(const string\
    \ &s = \"\", bool reverse_ = false)\n        : reverse(reverse_) {\n        int\
    \ n = s.size();\n        seg = segtree<D, op, e>(n);\n        if (reverse) rseg\
    \ = segtree<D, op_, e>(n);\n        rep(i, n) {\n            seg.set(i, D(s[i],\
    \ s[i], base1, base2));\n            if (reverse) rseg.set(i, D(s[i], s[i], base1,\
    \ base2));\n        }\n    }\n\n    inline void set(int i, char c) {\n       \
    \ seg.set(i, D(c, c, base1, base2));\n        if (reverse) rseg.set(i, D(c, c,\
    \ base1, base2));\n    }\n\n    inline long long get(int l, int r) {\n       \
    \ auto [a, b, c, d] = seg.prod(l, r);\n        return (long long)a.val() * mod2\
    \ + b.val();\n    }\n\n    inline long long rget(int l, int r) {\n        auto\
    \ [a, b, c, d] = rseg.prod(l, r);\n        return (long long)a.val() * mod2 +\
    \ b.val();\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: string/rolling-hash-tree.hpp
  requiredBy: []
  timestamp: '2024-09-27 20:27:13+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/rolling-hash-tree.test.cpp
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
long long get(int l, int r)
```

閉区間[l, r)のハッシュ値を返す。

## rget

```cpp
long long rget(int l, int r)
```

閉区間[l, r)を逆から見たハッシュ値を返す。