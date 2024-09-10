---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/aizu-rolling-hash.test.cpp
    title: verify/aizu-rolling-hash.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/yosupo-rolling-hash.test.cpp
    title: verify/yosupo-rolling-hash.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/rolling-hash.hpp\"\nmt19937_64 r(time(0));\nstatic\
    \ constexpr ll mod = (1LL << 61) - 1;\nstatic const ll base = r() % (mod - 4)\
    \ + 2;\n\nstruct RollingHash {\n    using i128 = __int128_t;\n    vector<ll> hash,\
    \ power;\n    int n;\n    string s;\n\n    inline ll add(ll a, ll b) const {\n\
    \        if ((a += b) >= mod) a -= mod;\n        return a;\n    }\n\n    inline\
    \ ll mul(ll a, ll b) const {\n        i128 x = (i128)a * b;\n        return add(x\
    \ >> 61, x & mod);\n    }\n\n    explicit RollingHash(const string& S) {\n   \
    \     n = (int)S.size();\n        s = S;\n        hash.resize(n + 1, 0);\n   \
    \     power.resize(n + 1, 1);\n        for (int i = 0; i < n; i++) {\n       \
    \     hash[i + 1] = add(mul(hash[i], base), S[i]);\n            power[i + 1] =\
    \ mul(power[i], base);\n        }\n    }\n\n    inline ll get(int l, int r) const\
    \ {\n        return add(hash[r], mod - mul(hash[l], power[r - l]));\n    }\n\n\
    \    inline ll get() const {\n        return hash.back();\n    }\n\n    inline\
    \ ll connect(ll hash1, ll hash2, int hash2_len) const {\n        return add(mul(hash1,\
    \ power[hash2_len]), hash2);\n    }\n\n    inline int lcp(int a, int b) const\
    \ {\n        int len = min((int)hash.size() - a, (int)hash.size() - b);\n    \
    \    int left = 0, right = len;\n        while (right - left > 1) {\n        \
    \    int mid = (left + right) / 2;\n            if (get(a, a + mid) != get(b,\
    \ b + mid)) {\n                right = mid;\n            } else {\n          \
    \      left = mid;\n            }\n        }\n        return left;\n    }\n\n\
    \    inline int lcp(const RollingHash& T, int a, int b) const {\n        int len\
    \ = min((int)hash.size() - a, (int)hash.size() - b);\n        int left = 0, right\
    \ = len;\n        while (right - left > 1) {\n            int mid = (left + right)\
    \ / 2;\n            if (get(a, a + mid) != T.get(b, b + mid)) {\n            \
    \    right = mid;\n            } else {\n                left = mid;\n       \
    \     }\n        }\n        return left;\n    }\n};\n"
  code: "mt19937_64 r(time(0));\nstatic constexpr ll mod = (1LL << 61) - 1;\nstatic\
    \ const ll base = r() % (mod - 4) + 2;\n\nstruct RollingHash {\n    using i128\
    \ = __int128_t;\n    vector<ll> hash, power;\n    int n;\n    string s;\n\n  \
    \  inline ll add(ll a, ll b) const {\n        if ((a += b) >= mod) a -= mod;\n\
    \        return a;\n    }\n\n    inline ll mul(ll a, ll b) const {\n        i128\
    \ x = (i128)a * b;\n        return add(x >> 61, x & mod);\n    }\n\n    explicit\
    \ RollingHash(const string& S) {\n        n = (int)S.size();\n        s = S;\n\
    \        hash.resize(n + 1, 0);\n        power.resize(n + 1, 1);\n        for\
    \ (int i = 0; i < n; i++) {\n            hash[i + 1] = add(mul(hash[i], base),\
    \ S[i]);\n            power[i + 1] = mul(power[i], base);\n        }\n    }\n\n\
    \    inline ll get(int l, int r) const {\n        return add(hash[r], mod - mul(hash[l],\
    \ power[r - l]));\n    }\n\n    inline ll get() const {\n        return hash.back();\n\
    \    }\n\n    inline ll connect(ll hash1, ll hash2, int hash2_len) const {\n \
    \       return add(mul(hash1, power[hash2_len]), hash2);\n    }\n\n    inline\
    \ int lcp(int a, int b) const {\n        int len = min((int)hash.size() - a, (int)hash.size()\
    \ - b);\n        int left = 0, right = len;\n        while (right - left > 1)\
    \ {\n            int mid = (left + right) / 2;\n            if (get(a, a + mid)\
    \ != get(b, b + mid)) {\n                right = mid;\n            } else {\n\
    \                left = mid;\n            }\n        }\n        return left;\n\
    \    }\n\n    inline int lcp(const RollingHash& T, int a, int b) const {\n   \
    \     int len = min((int)hash.size() - a, (int)hash.size() - b);\n        int\
    \ left = 0, right = len;\n        while (right - left > 1) {\n            int\
    \ mid = (left + right) / 2;\n            if (get(a, a + mid) != T.get(b, b + mid))\
    \ {\n                right = mid;\n            } else {\n                left\
    \ = mid;\n            }\n        }\n        return left;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: string/rolling-hash.hpp
  requiredBy: []
  timestamp: '2024-06-18 21:24:13+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/aizu-rolling-hash.test.cpp
  - verify/yosupo-rolling-hash.test.cpp
documentation_of: string/rolling-hash.hpp
layout: document
title: Rolling Hash
---

## コンストラクタ

```cpp
RollingHash R(string s)
```

## get

```cpp
ll R.get(int l, int r)
```

閉区間[l, r) のハッシュを返す。

$O(1)$

## all get

```cpp
ll R.get()
```

S[0:] のハッシュを返す。

$O(1)$

## connect

```cpp
ll R.connect(ll s_hash, ll t_hash, ll t_len)
```
$O(1)$

文字列S と 文字列T をこの順番で連結した文字列のハッシュ値を返す。

## lcp

```cpp
int R.lcp(int a,int b)
```

S[a:] と S[b:] の 最長共通部分接頭辞(LCP)を返す。

$O(logN)$

## lcp(other RollingHash)

```cpp
int R.lcp(RollingHash &other,int a,int b)
```

S[a:] と T[b:] の 最長共通部分接頭辞(LCP)を返す。

$O(logN)$
