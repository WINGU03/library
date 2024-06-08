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
  bundledCode: "#line 1 \"Enum_divisor.cpp\"\n// \u7D04\u6570\u5217\u6319\nvector<long\
    \ long> enum_divisor(long long n) {\n    vector<long long> res;\n    for (long\
    \ long i = 1LL; i * i <= n; ++i) {\n        if (n % i == 0) {\n            res.push_back(i);\n\
    \            long long j = n / i;\n            if (j != i) res.push_back(j);\n\
    \        }\n    }\n    sort(res.begin(), res.end());\n    return res;\n}\n"
  code: "// \u7D04\u6570\u5217\u6319\nvector<long long> enum_divisor(long long n)\
    \ {\n    vector<long long> res;\n    for (long long i = 1LL; i * i <= n; ++i)\
    \ {\n        if (n % i == 0) {\n            res.push_back(i);\n            long\
    \ long j = n / i;\n            if (j != i) res.push_back(j);\n        }\n    }\n\
    \    sort(res.begin(), res.end());\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Enum_divisor.cpp
  requiredBy: []
  timestamp: '2024-06-07 20:43:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Enum_divisor.cpp
layout: document
redirect_from:
- /library/Enum_divisor.cpp
- /library/Enum_divisor.cpp.html
title: Enum_divisor.cpp
---
