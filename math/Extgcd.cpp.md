---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/Extgcd.test.cpp
    title: verify/Extgcd.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/Extgcd.cpp\"\nlong long extgcd(long long a, long long\
    \ b, long long &x, long long &y) {\n    if (b == 0) {\n        x = 1;\n      \
    \  y = 0;\n        return a;\n    }\n    long long d = extgcd(b, a % b, y, x);\n\
    \    y -= a / b * x;\n    return d;\n}\n"
  code: "long long extgcd(long long a, long long b, long long &x, long long &y) {\n\
    \    if (b == 0) {\n        x = 1;\n        y = 0;\n        return a;\n    }\n\
    \    long long d = extgcd(b, a % b, y, x);\n    y -= a / b * x;\n    return d;\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: math/Extgcd.cpp
  requiredBy: []
  timestamp: '2024-06-08 12:05:48+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/Extgcd.test.cpp
documentation_of: math/Extgcd.cpp
layout: document
redirect_from:
- /library/math/Extgcd.cpp
- /library/math/Extgcd.cpp.html
title: math/Extgcd.cpp
---
