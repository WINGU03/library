---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/extgcd.hpp
    title: "\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u306E\u4E92\u9664\u6CD5"
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E
  bundledCode: "#line 1 \"verify/extgcd.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #ifdef local\n#include <debug.hpp>\n#else\n#define debug(...)\n#endif\n#define\
    \ rep(i, n) for (int i = 0; i < n; i++)\ntemplate <class T> istream& operator>>(istream&\
    \ I, vector<T>& V) {for (T& X : V) I >> X; return I;}\ntemplate <class T> inline\
    \ bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}\ntemplate\
    \ <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return\
    \ false;}\nconst int dx[](1, 0, -1, 0), dy[](0, 1, 0, -1), inf = 2e9; const long\
    \ INF = 1e18;\n#line 1 \"math/extgcd.hpp\"\nlong long extgcd(long long a, long\
    \ long b, long long &x, long long &y) {\n    if (b == 0) {\n        x = 1;\n \
    \       y = 0;\n        return a;\n    }\n    long long d = extgcd(b, a % b, y,\
    \ x);\n    y -= a / b * x;\n    return d;\n}\n#line 6 \"verify/extgcd.test.cpp\"\
    \n\nint main() {\n    int a, b;\n    cin >> a >> b;\n    long long x, y;\n   \
    \ extgcd(a, b, x, y);\n    cout << x << \" \" << y << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"math/extgcd.hpp\"\
    \n\nint main() {\n    int a, b;\n    cin >> a >> b;\n    long long x, y;\n   \
    \ extgcd(a, b, x, y);\n    cout << x << \" \" << y << endl;\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - math/extgcd.hpp
  isVerificationFile: true
  path: verify/extgcd.test.cpp
  requiredBy: []
  timestamp: '2024-12-24 23:10:08+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/extgcd.test.cpp
layout: document
redirect_from:
- /verify/verify/extgcd.test.cpp
- /verify/verify/extgcd.test.cpp.html
title: verify/extgcd.test.cpp
---
