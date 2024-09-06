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
  bundledCode: "#line 1 \"math/combination.hpp\"\nstruct combination {\n    vector<mint>\
    \ fac, finv, inv;\n    combination(int M) {\n        fac.resize(M + 1); finv.resize(M\
    \ + 1); inv.resize(M + 1);\n        const int MOD = mint::mod();\n        fac[0]\
    \ = fac[1] = 1;\n        finv[0] = finv[1] = 1;\n        inv[1] = 1;\n       \
    \ for (int i = 2; i <= M; i++) {\n            fac[i] = fac[i - 1] * i;\n     \
    \       inv[i] = MOD - inv[MOD % i] * (MOD / i);\n            finv[i] = finv[i\
    \ - 1] * inv[i];\n        }\n    }\n    mint com(int n, int k) {\n        if (n\
    \ < k) return 0;\n        if (n < 0 || k < 0) return 0;\n        return fac[n]\
    \ * finv[k] * finv[n - k];\n    }\n};\n"
  code: "struct combination {\n    vector<mint> fac, finv, inv;\n    combination(int\
    \ M) {\n        fac.resize(M + 1); finv.resize(M + 1); inv.resize(M + 1);\n  \
    \      const int MOD = mint::mod();\n        fac[0] = fac[1] = 1;\n        finv[0]\
    \ = finv[1] = 1;\n        inv[1] = 1;\n        for (int i = 2; i <= M; i++) {\n\
    \            fac[i] = fac[i - 1] * i;\n            inv[i] = MOD - inv[MOD % i]\
    \ * (MOD / i);\n            finv[i] = finv[i - 1] * inv[i];\n        }\n    }\n\
    \    mint com(int n, int k) {\n        if (n < k) return 0;\n        if (n < 0\
    \ || k < 0) return 0;\n        return fac[n] * finv[k] * finv[n - k];\n    }\n\
    };"
  dependsOn: []
  isVerificationFile: false
  path: math/combination.hpp
  requiredBy: []
  timestamp: '2024-09-01 15:31:20+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/combination.hpp
layout: document
title: "\u4E8C\u9805\u4FC2\u6570(mod)"
---

mod 998244353 or 1000000007 の nCr を O(MAX) の前計算 -> 逐次 O(1) で求められる
※ #include "math/combination.hpp" の前に using mint = (modint998244353 or modint1000000007)

# コンストラクタ

```cpp
combination(int MAX)
```

# nCr

```cpp
mint com(int n, int r)
```