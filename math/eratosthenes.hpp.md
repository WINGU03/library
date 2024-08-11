---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/eratosthenes.hpp\"\nvector<bool> sieve(int N) {\n \
    \   vector<bool> isprime(N + 1, true);\n    isprime[0] = false;\n    isprime[1]\
    \ = false;\n    for (int i = 2; i * i <= N; i++) {\n        if (isprime[i] ==\
    \ false) continue;\n        for (int j = i * 2; j <= N; j += i) {\n          \
    \  isprime[j] = false;\n        }\n    }\n    return isprime;\n}\n"
  code: "vector<bool> sieve(int N) {\n    vector<bool> isprime(N + 1, true);\n   \
    \ isprime[0] = false;\n    isprime[1] = false;\n    for (int i = 2; i * i <= N;\
    \ i++) {\n        if (isprime[i] == false) continue;\n        for (int j = i *\
    \ 2; j <= N; j += i) {\n            isprime[j] = false;\n        }\n    }\n  \
    \  return isprime;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/eratosthenes.hpp
  requiredBy: []
  timestamp: '2024-08-11 14:04:24+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/eratosthenes.hpp
layout: document
redirect_from:
- /library/math/eratosthenes.hpp
- /library/math/eratosthenes.hpp.html
title: math/eratosthenes.hpp
---
