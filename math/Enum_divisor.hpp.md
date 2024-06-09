---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/Enum_divisor.test.cpp
    title: verify/Enum_divisor.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/Enum_divisor.hpp\"\nvector<ll> enum_divisor(ll n) {\n\
    \    vector<ll> res;\n    for (int i = 1; ll(i * i) <= n; i++) {\n        if (n\
    \ % i == 0) {\n            res.push_back(i);\n            ll j = n / i;\n    \
    \        if (j != i) res.push_back(j);\n        }\n    }\n    sort(res.begin(),\
    \ res.end());\n    return res;\n}\n"
  code: "vector<ll> enum_divisor(ll n) {\n    vector<ll> res;\n    for (int i = 1;\
    \ ll(i * i) <= n; i++) {\n        if (n % i == 0) {\n            res.push_back(i);\n\
    \            ll j = n / i;\n            if (j != i) res.push_back(j);\n      \
    \  }\n    }\n    sort(res.begin(), res.end());\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/Enum_divisor.hpp
  requiredBy: []
  timestamp: '2024-06-09 23:38:52+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/Enum_divisor.test.cpp
documentation_of: math/Enum_divisor.hpp
layout: document
redirect_from:
- /library/math/Enum_divisor.hpp
- /library/math/Enum_divisor.hpp.html
title: math/Enum_divisor.hpp
---
