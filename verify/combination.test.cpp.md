---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/combination.hpp
    title: "\u4E8C\u9805\u4FC2\u6570(mod)"
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_E
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_E
  bundledCode: "#line 1 \"verify/combination.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_E\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef local\n#include <cpp-dump.hpp>\n\
    #define dump cpp_dump\n#else\n#undef dump\n#define dump(...)\n#endif\n#define\
    \ rep(i, n) for (int i = 0; i < n; i++)\ntemplate <class T> istream& operator>>(istream&\
    \ I, vector<T>& V) { for (T& X : V) I >> X; return I; }\n#line 5 \"verify/combination.test.cpp\"\
    \n\nusing mint = modint1000000007;\n#line 1 \"math/combination.hpp\"\nstruct combination\
    \ {\n    vector<mint> fac, finv, inv;\n    combination(int M) {\n        fac.resize(M\
    \ + 1); finv.resize(M + 1); inv.resize(M + 1);\n        const int MOD = mint::mod();\n\
    \        fac[0] = fac[1] = 1;\n        finv[0] = finv[1] = 1;\n        inv[1]\
    \ = 1;\n        for (int i = 2; i <= M; i++) {\n            fac[i] = fac[i - 1]\
    \ * i;\n            inv[i] = MOD - inv[MOD % i] * (MOD / i);\n            finv[i]\
    \ = finv[i - 1] * inv[i];\n        }\n    }\n    mint com(int n, int k) {\n  \
    \      if (n < k) return 0;\n        if (n < 0 || k < 0) return 0;\n        return\
    \ fac[n] * finv[k] * finv[n - k];\n    }\n};\n#line 8 \"verify/combination.test.cpp\"\
    \n\nint main() {\n    int n, k;\n    cin >> n >> k;\n    combination c(k);\n \
    \   cout << c.com(k, n).val() << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_E\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n\nusing mint = modint1000000007;\n\
    #include \"math/combination.hpp\"\n\nint main() {\n    int n, k;\n    cin >> n\
    \ >> k;\n    combination c(k);\n    cout << c.com(k, n).val() << endl;\n    return\
    \ 0;\n}"
  dependsOn:
  - template.hpp
  - math/combination.hpp
  isVerificationFile: true
  path: verify/combination.test.cpp
  requiredBy: []
  timestamp: '2024-10-28 01:36:20+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/combination.test.cpp
layout: document
redirect_from:
- /verify/verify/combination.test.cpp
- /verify/verify/combination.test.cpp.html
title: verify/combination.test.cpp
---
