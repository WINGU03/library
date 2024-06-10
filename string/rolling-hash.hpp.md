---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/rolling-hash.test.cpp
    title: verify/rolling-hash.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/rolling-hash.hpp\"\nstruct RollingHash {\n    static\
    \ const int base1 = 1007, base2 = 2009;\n    static const int mod1 = 1000000007,\
    \ mod2 = 1000000009;\n    vector<long long> hash1, hash2, power1, power2;\n\n\
    \    // construct\n    RollingHash(const string &S) {\n        int n = (int)S.size();\n\
    \        hash1.assign(n + 1, 0), hash2.assign(n + 1, 0);\n        power1.assign(n\
    \ + 1, 1), power2.assign(n + 1, 1);\n        for (int i = 0; i < n; ++i) {\n \
    \           hash1[i + 1] = (hash1[i] * base1 + S[i]) % mod1;\n            hash2[i\
    \ + 1] = (hash2[i] * base2 + S[i]) % mod2;\n            power1[i + 1] = (power1[i]\
    \ * base1) % mod1;\n            power2[i + 1] = (power2[i] * base2) % mod2;\n\
    \        }\n    }\n\n    // get hash value of S[left:right]\n    inline long long\
    \ get(int l, int r) const {\n        long long res1 = hash1[r] - hash1[l] * power1[r\
    \ - l] % mod1;\n        if (res1 < 0) res1 += mod1;\n        long long res2 =\
    \ hash2[r] - hash2[l] * power2[r - l] % mod2;\n        if (res2 < 0) res2 += mod2;\n\
    \        return res1 * mod2 + res2;\n    }\n\n    // get hash value of S\n   \
    \ inline long long get() const {\n        return hash1.back() * mod2 + hash2.back();\n\
    \    }\n\n    // get lcp of S[a:] and S[b:]\n    inline int getLCP(int a, int\
    \ b) const {\n        int len = min((int)hash1.size() - a, (int)hash1.size() -\
    \ b);\n        int low = 0, high = len;\n        while (high - low > 1) {\n  \
    \          int mid = (low + high) >> 1;\n            if (get(a, a + mid) != get(b,\
    \ b + mid)){\n                high = mid;\n            }else{\n              \
    \  low = mid;\n            }\n        }\n        return low;\n    }\n\n    //\
    \ get lcp of S[a:] and T[b:]\n    inline int getLCP(const RollingHash &T, int\
    \ a, int b) const {\n        int len = min((int)hash1.size() - a, (int)hash1.size()\
    \ - b);\n        int low = 0, high = len;\n        while (high - low > 1) {\n\
    \            int mid = (low + high) >> 1;\n            if (get(a, a + mid) !=\
    \ T.get(b, b + mid)){\n                high = mid;\n            }else{\n     \
    \           low = mid;\n            }\n        }\n        return low;\n    }\n\
    };\n"
  code: "struct RollingHash {\n    static const int base1 = 1007, base2 = 2009;\n\
    \    static const int mod1 = 1000000007, mod2 = 1000000009;\n    vector<long long>\
    \ hash1, hash2, power1, power2;\n\n    // construct\n    RollingHash(const string\
    \ &S) {\n        int n = (int)S.size();\n        hash1.assign(n + 1, 0), hash2.assign(n\
    \ + 1, 0);\n        power1.assign(n + 1, 1), power2.assign(n + 1, 1);\n      \
    \  for (int i = 0; i < n; ++i) {\n            hash1[i + 1] = (hash1[i] * base1\
    \ + S[i]) % mod1;\n            hash2[i + 1] = (hash2[i] * base2 + S[i]) % mod2;\n\
    \            power1[i + 1] = (power1[i] * base1) % mod1;\n            power2[i\
    \ + 1] = (power2[i] * base2) % mod2;\n        }\n    }\n\n    // get hash value\
    \ of S[left:right]\n    inline long long get(int l, int r) const {\n        long\
    \ long res1 = hash1[r] - hash1[l] * power1[r - l] % mod1;\n        if (res1 <\
    \ 0) res1 += mod1;\n        long long res2 = hash2[r] - hash2[l] * power2[r -\
    \ l] % mod2;\n        if (res2 < 0) res2 += mod2;\n        return res1 * mod2\
    \ + res2;\n    }\n\n    // get hash value of S\n    inline long long get() const\
    \ {\n        return hash1.back() * mod2 + hash2.back();\n    }\n\n    // get lcp\
    \ of S[a:] and S[b:]\n    inline int getLCP(int a, int b) const {\n        int\
    \ len = min((int)hash1.size() - a, (int)hash1.size() - b);\n        int low =\
    \ 0, high = len;\n        while (high - low > 1) {\n            int mid = (low\
    \ + high) >> 1;\n            if (get(a, a + mid) != get(b, b + mid)){\n      \
    \          high = mid;\n            }else{\n                low = mid;\n     \
    \       }\n        }\n        return low;\n    }\n\n    // get lcp of S[a:] and\
    \ T[b:]\n    inline int getLCP(const RollingHash &T, int a, int b) const {\n \
    \       int len = min((int)hash1.size() - a, (int)hash1.size() - b);\n       \
    \ int low = 0, high = len;\n        while (high - low > 1) {\n            int\
    \ mid = (low + high) >> 1;\n            if (get(a, a + mid) != T.get(b, b + mid)){\n\
    \                high = mid;\n            }else{\n                low = mid;\n\
    \            }\n        }\n        return low;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: string/rolling-hash.hpp
  requiredBy: []
  timestamp: '2024-06-10 17:44:10+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/rolling-hash.test.cpp
documentation_of: string/rolling-hash.hpp
layout: document
title: RollingHash
---

## コンストラクタ

```cpp
RollingHash R(string s)
```

## get

```cpp
ll get(int l, int r)
```

## all get

```cpp
ll get()
```

## getLCP

```cpp
int getLCP(int l,int r)
```

## getLCP(other RollingHash)

```cpp
int getLCP(RollingHash other,int l,int r)
```