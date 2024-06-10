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
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/prime-factorize.test.cpp
documentation_of: math/prime-factorize.hpp
layout: document
redirect_from:
- /library/math/prime-factorize.hpp
- /library/math/prime-factorize.hpp.html
title: math/prime-factorize.hpp
---