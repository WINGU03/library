---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/eratosthenes.test.cpp
    title: verify/eratosthenes.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/eratosthenes.hpp\"\nvector<bool> sieve(int N) {\n \
    \   vector<bool> isprime(N + 1, true);\n    isprime[0] = false;\n    isprime[1]\
    \ = false;\n    for (int i = 2; i * i <= N; i++) {\n        if (isprime[i] ==\
    \ false) continue;\n        for (int j = i * 2; j <= N; j += i) {\n          \
    \  isprime[j] = false;\n        }\n    }\n    return isprime;\n}\n"
  code: "vector<bool> sieve(int N) {\n    vector<bool> isprime(N + 1, true);\n   \
    \ isprime[0] = false;\n    isprime[1] = false;\n    for (int i = 2; i * i <= N;\
    \ i++) {\n        if (isprime[i] == false) continue;\n        for (int j = i *\
    \ 2; j <= N; j += i) {\n            isprime[j] = false;\n        }\n    }\n  \
    \  return isprime;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/eratosthenes.hpp
  requiredBy: []
  timestamp: '2024-08-11 14:04:24+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/eratosthenes.test.cpp
documentation_of: math/eratosthenes.hpp
layout: document
title: "\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9"
---

# コンストラクタ

```cpp
vector<bool> isprime = sieve(N)
```

- N <= $10^8$