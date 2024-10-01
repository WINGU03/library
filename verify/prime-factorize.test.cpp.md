---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/prime-factorize.hpp
    title: "\u7D20\u56E0\u6570\u5206\u89E3"
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
  bundledCode: "#line 1 \"verify/prime-factorize.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep(i, n) for (int i = 0; i < n; i++)\ntemplate\
    \ <class T> istream& operator>>(istream& I, vector<T>& V) { for (T& X : V) I >>\
    \ X; return I; }\n#line 1 \"math/prime-factorize.hpp\"\nvector<pair<long long,\
    \ long long>> prime_factorize(long long n) {\n    vector<pair<long long, long\
    \ long>> res;\n    for (int p = 2; (long long)p * p <= n; p++) {\n        if (n\
    \ % p != 0) continue;\n        int num = 0;\n        while (n % p == 0) {\n  \
    \          num++;\n            n /= p;\n        }\n        res.push_back(make_pair(p,\
    \ num));\n    }\n    if (n != 1) res.push_back(make_pair(n, 1));\n    return res;\n\
    }\n#line 6 \"verify/prime-factorize.test.cpp\"\n\nint main() {\n    int n;\n \
    \   cin >> n;\n    auto p = prime_factorize(n);\n    cout << n << ':';\n    for\
    \ (auto [number, val] : p) {\n        rep(i, val) cout << \" \" << number;\n \
    \   }\n    cout << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"math/prime-factorize.hpp\"\
    \n\nint main() {\n    int n;\n    cin >> n;\n    auto p = prime_factorize(n);\n\
    \    cout << n << ':';\n    for (auto [number, val] : p) {\n        rep(i, val)\
    \ cout << \" \" << number;\n    }\n    cout << endl;\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - math/prime-factorize.hpp
  isVerificationFile: true
  path: verify/prime-factorize.test.cpp
  requiredBy: []
  timestamp: '2024-10-01 21:17:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/prime-factorize.test.cpp
layout: document
redirect_from:
- /verify/verify/prime-factorize.test.cpp
- /verify/verify/prime-factorize.test.cpp.html
title: verify/prime-factorize.test.cpp
---
