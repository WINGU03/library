---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/enum-divisor.test.cpp
    title: verify/enum-divisor.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/enum-divisor.hpp\"\nvector<ll> enum_divisor(ll n) {\n\
    \    vector<ll> res;\n    for (int i = 1; (ll)i * i <= n; i++) {\n        if (n\
    \ % i == 0) {\n            res.push_back(i);\n            ll j = n / i;\n    \
    \        if (j != i) res.push_back(j);\n        }\n    }\n    sort(res.begin(),\
    \ res.end());\n    return res;\n}\n"
  code: "vector<ll> enum_divisor(ll n) {\n    vector<ll> res;\n    for (int i = 1;\
    \ (ll)i * i <= n; i++) {\n        if (n % i == 0) {\n            res.push_back(i);\n\
    \            ll j = n / i;\n            if (j != i) res.push_back(j);\n      \
    \  }\n    }\n    sort(res.begin(), res.end());\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/enum-divisor.hpp
  requiredBy: []
  timestamp: '2024-06-10 17:44:10+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/enum-divisor.test.cpp
documentation_of: math/enum-divisor.hpp
layout: document
title: "\u7D04\u6570\u5217\u6319"
---
