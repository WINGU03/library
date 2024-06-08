---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/Prime_factorize.test.cpp
    title: verify/Prime_factorize.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/Prime_factorize.cpp\"\nvector<P> prime_factorize(ll\
    \ n) {\n    vector<P> res;\n    for (ll p = 2; p * p <= n; ++p) {\n        if\
    \ (n % p != 0) continue;\n        int num = 0;\n        while (n % p == 0) {\n\
    \            ++num;\n            n /= p;\n        }\n        res.push_back(make_pair(p,\
    \ num));\n    }\n    if (n != 1) res.push_back(make_pair(n, 1));\n    return res;\n\
    }\n"
  code: "vector<P> prime_factorize(ll n) {\n    vector<P> res;\n    for (ll p = 2;\
    \ p * p <= n; ++p) {\n        if (n % p != 0) continue;\n        int num = 0;\n\
    \        while (n % p == 0) {\n            ++num;\n            n /= p;\n     \
    \   }\n        res.push_back(make_pair(p, num));\n    }\n    if (n != 1) res.push_back(make_pair(n,\
    \ 1));\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/Prime_factorize.cpp
  requiredBy: []
  timestamp: '2024-06-08 20:27:55+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/Prime_factorize.test.cpp
documentation_of: math/Prime_factorize.cpp
layout: document
redirect_from:
- /library/math/Prime_factorize.cpp
- /library/math/Prime_factorize.cpp.html
title: math/Prime_factorize.cpp
---
