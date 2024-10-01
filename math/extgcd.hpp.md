---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/extgcd.test.cpp
    title: verify/extgcd.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/extgcd.hpp\"\nlong long extgcd(long long a, long long\
    \ b, long long &x, long long &y) {\n    if (b == 0) {\n        x = 1;\n      \
    \  y = 0;\n        return a;\n    }\n    long long d = extgcd(b, a % b, y, x);\n\
    \    y -= a / b * x;\n    return d;\n}\n"
  code: "long long extgcd(long long a, long long b, long long &x, long long &y) {\n\
    \    if (b == 0) {\n        x = 1;\n        y = 0;\n        return a;\n    }\n\
    \    long long d = extgcd(b, a % b, y, x);\n    y -= a / b * x;\n    return d;\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: math/extgcd.hpp
  requiredBy: []
  timestamp: '2024-09-27 20:13:23+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/extgcd.test.cpp
documentation_of: math/extgcd.hpp
layout: document
title: "\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u306E\u4E92\u9664\u6CD5"
---

# extgcd

```cpp
long long extgcd(long long a, long long b, long long &x, long long &y)
```

gcd(a, b) を返す。
ax + by = gcd(a, b) を満たす x と y が格納される。