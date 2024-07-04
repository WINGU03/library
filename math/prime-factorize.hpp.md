---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/prime-factorize.test.cpp
    title: verify/prime-factorize.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/prime-factorize.hpp\"\nvector<P> prime_factorize(ll\
    \ n) {\n    vector<P> res;\n    for (int p = 2; (ll)p * p <= n; p++) {\n     \
    \   if (n % p != 0) continue;\n        int num = 0;\n        while (n % p == 0)\
    \ {\n            num++;\n            n /= p;\n        }\n        res.push_back(make_pair(p,\
    \ num));\n    }\n    if (n != 1) res.push_back(make_pair(n, 1));\n    return res;\n\
    }\n"
  code: "vector<P> prime_factorize(ll n) {\n    vector<P> res;\n    for (int p = 2;\
    \ (ll)p * p <= n; p++) {\n        if (n % p != 0) continue;\n        int num =\
    \ 0;\n        while (n % p == 0) {\n            num++;\n            n /= p;\n\
    \        }\n        res.push_back(make_pair(p, num));\n    }\n    if (n != 1)\
    \ res.push_back(make_pair(n, 1));\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/prime-factorize.hpp
  requiredBy: []
  timestamp: '2024-06-10 17:44:10+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/prime-factorize.test.cpp
documentation_of: math/prime-factorize.hpp
layout: document
title: "\u7D20\u56E0\u6570\u5206\u89E3"
---
