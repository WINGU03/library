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
  bundledCode: "#line 1 \"Prime_factorize.cpp\"\nvector<pair<long long, long long>\
    \ > prime_factorize(long long n) {\n    vector<pair<long long, long long> > res;\n\
    \    for (long long p = 2; p * p <= n; ++p) {\n        if (n % p != 0) continue;\n\
    \        int num = 0;\n        while (n % p == 0) {\n            ++num;\n    \
    \        n /= p;\n        }\n        res.push_back(make_pair(p, num));\n    }\n\
    \    if (n != 1) res.push_back(make_pair(n, 1));\n    return res;\n}\n"
  code: "vector<pair<long long, long long> > prime_factorize(long long n) {\n    vector<pair<long\
    \ long, long long> > res;\n    for (long long p = 2; p * p <= n; ++p) {\n    \
    \    if (n % p != 0) continue;\n        int num = 0;\n        while (n % p ==\
    \ 0) {\n            ++num;\n            n /= p;\n        }\n        res.push_back(make_pair(p,\
    \ num));\n    }\n    if (n != 1) res.push_back(make_pair(n, 1));\n    return res;\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: Prime_factorize.cpp
  requiredBy: []
  timestamp: '2024-06-08 10:03:27+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Prime_factorize.cpp
layout: document
redirect_from:
- /library/Prime_factorize.cpp
- /library/Prime_factorize.cpp.html
title: Prime_factorize.cpp
---
