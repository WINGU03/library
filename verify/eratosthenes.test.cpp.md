---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/eratosthenes.hpp
    title: "\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9"
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
  bundledCode: "#line 1 \"verify/eratosthenes.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep(i, n) for (int i = 0; i < n; i++)\ntemplate\
    \ <class T> istream& operator>>(istream& I, vector<T>& V) { for (T& X : V) I >>\
    \ X; return I; }\n#line 1 \"math/eratosthenes.hpp\"\nvector<bool> sieve(int N)\
    \ {\n    vector<bool> isprime(N + 1, true);\n    isprime[0] = false;\n    isprime[1]\
    \ = false;\n    for (int i = 2; i * i <= N; i++) {\n        if (isprime[i] ==\
    \ false) continue;\n        for (int j = i * 2; j <= N; j += i) {\n          \
    \  isprime[j] = false;\n        }\n    }\n    return isprime;\n}\n#line 6 \"verify/eratosthenes.test.cpp\"\
    \n\nint main() {\n    int n;\n    cin >> n;\n    auto p = sieve((int)1e8);\n \
    \   int ans = 0;\n    for(int i = 0; i < n; i++) {\n        int x;\n        cin\
    \ >> x;\n        if (p[x]) ans++;\n    }\n    cout << ans << endl;\n    return\
    \ 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\n\
    \n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"math/eratosthenes.hpp\"\
    \n\nint main() {\n    int n;\n    cin >> n;\n    auto p = sieve((int)1e8);\n \
    \   int ans = 0;\n    for(int i = 0; i < n; i++) {\n        int x;\n        cin\
    \ >> x;\n        if (p[x]) ans++;\n    }\n    cout << ans << endl;\n    return\
    \ 0;\n}"
  dependsOn:
  - template.hpp
  - math/eratosthenes.hpp
  isVerificationFile: true
  path: verify/eratosthenes.test.cpp
  requiredBy: []
  timestamp: '2024-10-01 21:17:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/eratosthenes.test.cpp
layout: document
redirect_from:
- /verify/verify/eratosthenes.test.cpp
- /verify/verify/eratosthenes.test.cpp.html
title: verify/eratosthenes.test.cpp
---
