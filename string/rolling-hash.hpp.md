---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/aizu-rolling-hash.test.cpp
    title: verify/aizu-rolling-hash.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/lc-rolling-hash.test.cpp
    title: verify/lc-rolling-hash.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/lc-rolling-hash2.test.cpp
    title: verify/lc-rolling-hash2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/rolling-hash.hpp\"\nmt19937_64 r(time(0));\nstatic\
    \ const int mod1 = 1000000007, mod2 = 1000000009;\nusing mint1 = static_modint<mod1>;\n\
    using mint2 = static_modint<mod2>;\nstatic const int base1 = r() % (mod1 - 4)\
    \ + 2, base2 = r() % (mod2 - 4) + 2;\n\nstruct RollingHash {\n    vector<mint1>\
    \ hash1, power1;\n    vector<mint2> hash2, power2;\n    int n;\n    string s;\n\
    \n    explicit RollingHash(const string &S = \"\") {\n        s = S;\n       \
    \ n = (int)S.size();\n        hash1.assign(n + 1, 0), hash2.assign(n + 1, 0);\n\
    \        power1.assign(n + 1, 1), power2.assign(n + 1, 1);\n        for (int i\
    \ = 0; i < n; ++i) {\n            hash1[i + 1] = hash1[i] * base1 + S[i];\n  \
    \          hash2[i + 1] = hash2[i] * base2 + S[i];\n            power1[i + 1]\
    \ = power1[i] * base1;\n            power2[i + 1] = power2[i] * base2;\n     \
    \   }\n    }\n\n    inline long long get(int l, int r) const {\n        mint1\
    \ res1 = hash1[r] - hash1[l] * power1[r - l];\n        mint2 res2 = hash2[r] -\
    \ hash2[l] * power2[r - l];\n        return (ll)res1.val() * mod2 + res2.val();\n\
    \    }\n\n    inline long long get() const {\n        return (ll)hash1.back().val()\
    \ * mod2 + hash2.back().val();\n    }\n\n    inline int lcp(int a, int b) const\
    \ {\n        int len = min((int)hash1.size() - a, (int)hash1.size() - b);\n  \
    \      int left = 0, right = len;\n        while (right - left > 1) {\n      \
    \      int mid = (left + right) / 2;\n            if (get(a, a + mid) != get(b,\
    \ b + mid)) {\n                right = mid;\n            } else {\n          \
    \      left = mid;\n            }\n        }\n        return left;\n    }\n\n\
    \    inline int lcp(const RollingHash &T, int a, int b) const {\n        int len\
    \ = min((int)hash1.size() - a, (int)hash1.size() - b);\n        int left = 0,\
    \ right = len;\n        while (right - left > 1) {\n            int mid = (left\
    \ + right) / 2;\n            if (get(a, a + mid) != T.get(b, b + mid)) {\n   \
    \             right = mid;\n            } else {\n                left = mid;\n\
    \            }\n        }\n        return left;\n    }\n\n    inline vector<int>\
    \ suffix_array() {\n        vector<int> p(n);\n        iota(all(p), 0);\n    \
    \    sort(all(p), [&](int i,int j){\n            int k = lcp(i, j);\n        \
    \    return i+k >= n ? true : j+k >= n ? false : s[i+k] <= s[j+k];\n        });\n\
    \        return p;\n    }\n};\n"
  code: "mt19937_64 r(time(0));\nstatic const int mod1 = 1000000007, mod2 = 1000000009;\n\
    using mint1 = static_modint<mod1>;\nusing mint2 = static_modint<mod2>;\nstatic\
    \ const int base1 = r() % (mod1 - 4) + 2, base2 = r() % (mod2 - 4) + 2;\n\nstruct\
    \ RollingHash {\n    vector<mint1> hash1, power1;\n    vector<mint2> hash2, power2;\n\
    \    int n;\n    string s;\n\n    explicit RollingHash(const string &S = \"\"\
    ) {\n        s = S;\n        n = (int)S.size();\n        hash1.assign(n + 1, 0),\
    \ hash2.assign(n + 1, 0);\n        power1.assign(n + 1, 1), power2.assign(n +\
    \ 1, 1);\n        for (int i = 0; i < n; ++i) {\n            hash1[i + 1] = hash1[i]\
    \ * base1 + S[i];\n            hash2[i + 1] = hash2[i] * base2 + S[i];\n     \
    \       power1[i + 1] = power1[i] * base1;\n            power2[i + 1] = power2[i]\
    \ * base2;\n        }\n    }\n\n    inline long long get(int l, int r) const {\n\
    \        mint1 res1 = hash1[r] - hash1[l] * power1[r - l];\n        mint2 res2\
    \ = hash2[r] - hash2[l] * power2[r - l];\n        return (ll)res1.val() * mod2\
    \ + res2.val();\n    }\n\n    inline long long get() const {\n        return (ll)hash1.back().val()\
    \ * mod2 + hash2.back().val();\n    }\n\n    inline int lcp(int a, int b) const\
    \ {\n        int len = min((int)hash1.size() - a, (int)hash1.size() - b);\n  \
    \      int left = 0, right = len;\n        while (right - left > 1) {\n      \
    \      int mid = (left + right) / 2;\n            if (get(a, a + mid) != get(b,\
    \ b + mid)) {\n                right = mid;\n            } else {\n          \
    \      left = mid;\n            }\n        }\n        return left;\n    }\n\n\
    \    inline int lcp(const RollingHash &T, int a, int b) const {\n        int len\
    \ = min((int)hash1.size() - a, (int)hash1.size() - b);\n        int left = 0,\
    \ right = len;\n        while (right - left > 1) {\n            int mid = (left\
    \ + right) / 2;\n            if (get(a, a + mid) != T.get(b, b + mid)) {\n   \
    \             right = mid;\n            } else {\n                left = mid;\n\
    \            }\n        }\n        return left;\n    }\n\n    inline vector<int>\
    \ suffix_array() {\n        vector<int> p(n);\n        iota(all(p), 0);\n    \
    \    sort(all(p), [&](int i,int j){\n            int k = lcp(i, j);\n        \
    \    return i+k >= n ? true : j+k >= n ? false : s[i+k] <= s[j+k];\n        });\n\
    \        return p;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: string/rolling-hash.hpp
  requiredBy: []
  timestamp: '2024-06-12 15:03:14+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/aizu-rolling-hash.test.cpp
  - verify/lc-rolling-hash.test.cpp
  - verify/lc-rolling-hash2.test.cpp
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

S[l:] と T[b:] の 最長共通部分接頭辞(LCP)を返す。

$O(logN)$

## suffix_array

```cpp
vector<int> suffix_array()
```

S の 接尾辞配列(Suffix-Array)を返す。

$O(log(N)^2)$