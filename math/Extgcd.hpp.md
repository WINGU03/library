---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/Extgcd.test.cpp
    title: verify/Extgcd.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/Extgcd.hpp\"\nll extgcd(ll a, ll b, ll &x, ll &y) {\n\
    \    if (b == 0) {\n        x = 1;\n        y = 0;\n        return a;\n    }\n\
    \    ll d = extgcd(b, a % b, y, x);\n    y -= a / b * x;\n    return d;\n}\n"
  code: "ll extgcd(ll a, ll b, ll &x, ll &y) {\n    if (b == 0) {\n        x = 1;\n\
    \        y = 0;\n        return a;\n    }\n    ll d = extgcd(b, a % b, y, x);\n\
    \    y -= a / b * x;\n    return d;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/Extgcd.hpp
  requiredBy: []
  timestamp: '2024-06-09 23:38:52+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/Extgcd.test.cpp
documentation_of: math/Extgcd.hpp
layout: document
redirect_from:
- /library/math/Extgcd.hpp
- /library/math/Extgcd.hpp.html
title: math/Extgcd.hpp
---
