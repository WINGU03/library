---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/enum-divisor.test.cpp
    title: verify/enum-divisor.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/enum-divisor.hpp\"\nvector<long long> enum_divisor(long\
    \ long n) {\n    vector<long long> res;\n    for (int i = 1; (long long)i * i\
    \ <= n; i++) {\n        if (n % i == 0) {\n            res.push_back(i);\n   \
    \         long long j = n / i;\n            if (j != i) res.push_back(j);\n  \
    \      }\n    }\n    sort(res.begin(), res.end());\n    return res;\n}\n"
  code: "vector<long long> enum_divisor(long long n) {\n    vector<long long> res;\n\
    \    for (int i = 1; (long long)i * i <= n; i++) {\n        if (n % i == 0) {\n\
    \            res.push_back(i);\n            long long j = n / i;\n           \
    \ if (j != i) res.push_back(j);\n        }\n    }\n    sort(res.begin(), res.end());\n\
    \    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/enum-divisor.hpp
  requiredBy: []
  timestamp: '2024-09-27 20:13:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/enum-divisor.test.cpp
documentation_of: math/enum-divisor.hpp
layout: document
title: "\u7D04\u6570\u5217\u6319"
---
