---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/Enum_divisor.cpp\"\nvector<ll> enum_divisor(ll n) {\n\
    \    vector<ll> res;\n    for (ll i = 1; i * i <= n; ++i) {\n        if (n % i\
    \ == 0) {\n            res.push_back(i);\n            ll j = n / i;\n        \
    \    if (j != i) res.push_back(j);\n        }\n    }\n    sort(res.begin(), res.end());\n\
    \    return res;\n}\n"
  code: "vector<ll> enum_divisor(ll n) {\n    vector<ll> res;\n    for (ll i = 1;\
    \ i * i <= n; ++i) {\n        if (n % i == 0) {\n            res.push_back(i);\n\
    \            ll j = n / i;\n            if (j != i) res.push_back(j);\n      \
    \  }\n    }\n    sort(res.begin(), res.end());\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/Enum_divisor.cpp
  requiredBy: []
  timestamp: '2024-06-08 20:27:55+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/Enum_divisor.cpp
layout: document
redirect_from:
- /library/math/Enum_divisor.cpp
- /library/math/Enum_divisor.cpp.html
title: math/Enum_divisor.cpp
---
