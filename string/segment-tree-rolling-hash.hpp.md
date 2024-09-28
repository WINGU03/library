---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/segment-tree-rolling-hash.test.cpp
    title: verify/segment-tree-rolling-hash.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/segment-tree-rolling-hash.hpp\"\n#include <atcoder/segtree>\n\
    \nrandom_device rd;\nmt19937_64 rnd(rd());\nstatic constexpr long long mod = (1LL\
    \ << 61) - 1;\nstatic const long long base = rnd() % (mod - 4) + 2;\n\nusing D\
    \ = pair<long long, long long>;\n\nD op(D l, D r) {\n    auto [a, b] = l;\n  \
    \  auto [c, d] = r;\n    __int128_t x = (__int128_t)a * d + c;\n    return D(x\
    \ % mod, ((__int128_t)b * d) % mod);\n}\nD e() {\n    return D(0, 1);\n}\n\nD\
    \ op_(D l, D r) {\n    auto [a, b] = l;\n    auto [c, d] = r;\n    __int128_t\
    \ x = (__int128_t)c * b + a;\n    return D(x % mod, ((__int128_t)b * d) % mod);\n\
    }\n\nstruct rolling_hash {\n    segtree<D, op, e> seg;\n    segtree<D, op_, e>\
    \ rseg;\n    bool reverse;\n\n    explicit rolling_hash(const string &s = \"\"\
    , bool reverse_ = false)\n        : reverse(reverse_) {\n        int n = s.size();\n\
    \        seg = segtree<D, op, e>(n);\n        if (reverse) rseg = segtree<D, op_,\
    \ e>(n);\n        rep(i, n) {\n            seg.set(i, D(s[i], base));\n      \
    \      if (reverse) rseg.set(i, D(s[i], base));\n        }\n    }\n\n    inline\
    \ void set(int i, char c) {\n        seg.set(i, D(c, base));\n        if (reverse)\
    \ rseg.set(i, D(c, base));\n    }\n\n    inline long long get(int l, int r) {\n\
    \        auto [a, b] = seg.prod(l, r);\n        return a;\n    }\n\n    inline\
    \ long long rget(int l, int r) {\n        auto [a, b] = rseg.prod(l, r);\n   \
    \     return a;\n    }\n};\n"
  code: "#include <atcoder/segtree>\n\nrandom_device rd;\nmt19937_64 rnd(rd());\n\
    static constexpr long long mod = (1LL << 61) - 1;\nstatic const long long base\
    \ = rnd() % (mod - 4) + 2;\n\nusing D = pair<long long, long long>;\n\nD op(D\
    \ l, D r) {\n    auto [a, b] = l;\n    auto [c, d] = r;\n    __int128_t x = (__int128_t)a\
    \ * d + c;\n    return D(x % mod, ((__int128_t)b * d) % mod);\n}\nD e() {\n  \
    \  return D(0, 1);\n}\n\nD op_(D l, D r) {\n    auto [a, b] = l;\n    auto [c,\
    \ d] = r;\n    __int128_t x = (__int128_t)c * b + a;\n    return D(x % mod, ((__int128_t)b\
    \ * d) % mod);\n}\n\nstruct rolling_hash {\n    segtree<D, op, e> seg;\n    segtree<D,\
    \ op_, e> rseg;\n    bool reverse;\n\n    explicit rolling_hash(const string &s\
    \ = \"\", bool reverse_ = false)\n        : reverse(reverse_) {\n        int n\
    \ = s.size();\n        seg = segtree<D, op, e>(n);\n        if (reverse) rseg\
    \ = segtree<D, op_, e>(n);\n        rep(i, n) {\n            seg.set(i, D(s[i],\
    \ base));\n            if (reverse) rseg.set(i, D(s[i], base));\n        }\n \
    \   }\n\n    inline void set(int i, char c) {\n        seg.set(i, D(c, base));\n\
    \        if (reverse) rseg.set(i, D(c, base));\n    }\n\n    inline long long\
    \ get(int l, int r) {\n        auto [a, b] = seg.prod(l, r);\n        return a;\n\
    \    }\n\n    inline long long rget(int l, int r) {\n        auto [a, b] = rseg.prod(l,\
    \ r);\n        return a;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: string/segment-tree-rolling-hash.hpp
  requiredBy: []
  timestamp: '2024-09-28 15:49:29+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/segment-tree-rolling-hash.test.cpp
documentation_of: string/segment-tree-rolling-hash.hpp
layout: document
title: "Rolling Hash(\u4E00\u70B9\u5909\u66F4\u53CD\u8EE2\u53EF\u80FD)"
---

## コンストラクタ

```cpp
(1) rolling_hash seg(string s) // reverse off
(2) rolling_hash seg(string s, true) // reverse on
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