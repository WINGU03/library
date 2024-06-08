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
  bundledCode: "#line 1 \"Extgcd.cpp\"\nlong long extgcd(long long a, long long b,\
    \ long long &x, long long &y) {\n    if (b == 0) {\n        x = 1;\n        y\
    \ = 0;\n        return a;\n    }\n    long long d = extgcd(b, a % b, y, x);\n\
    \    y -= a / b * x;\n    return d;\n}\n"
  code: "long long extgcd(long long a, long long b, long long &x, long long &y) {\n\
    \    if (b == 0) {\n        x = 1;\n        y = 0;\n        return a;\n    }\n\
    \    long long d = extgcd(b, a % b, y, x);\n    y -= a / b * x;\n    return d;\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: Extgcd.cpp
  requiredBy: []
  timestamp: '2024-06-07 20:43:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Extgcd.cpp
layout: document
redirect_from:
- /library/Extgcd.cpp
- /library/Extgcd.cpp.html
title: Extgcd.cpp
---
