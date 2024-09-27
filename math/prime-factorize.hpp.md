---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/prime-factorize.test.cpp
    title: verify/prime-factorize.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/prime-factorize.hpp\"\nvector<pair<long long, long\
    \ long>> prime_factorize(long long n) {\n    vector<pair<long long, long long>>\
    \ res;\n    for (int p = 2; (long long)p * p <= n; p++) {\n        if (n % p !=\
    \ 0) continue;\n        int num = 0;\n        while (n % p == 0) {\n         \
    \   num++;\n            n /= p;\n        }\n        res.push_back(make_pair(p,\
    \ num));\n    }\n    if (n != 1) res.push_back(make_pair(n, 1));\n    return res;\n\
    }\n"
  code: "vector<pair<long long, long long>> prime_factorize(long long n) {\n    vector<pair<long\
    \ long, long long>> res;\n    for (int p = 2; (long long)p * p <= n; p++) {\n\
    \        if (n % p != 0) continue;\n        int num = 0;\n        while (n % p\
    \ == 0) {\n            num++;\n            n /= p;\n        }\n        res.push_back(make_pair(p,\
    \ num));\n    }\n    if (n != 1) res.push_back(make_pair(n, 1));\n    return res;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: math/prime-factorize.hpp
  requiredBy: []
  timestamp: '2024-09-27 20:13:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/prime-factorize.test.cpp
documentation_of: math/prime-factorize.hpp
layout: document
title: "\u7D20\u56E0\u6570\u5206\u89E3"
---
