---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/enum-divisor.hpp
    title: "\u7D04\u6570\u5217\u6319"
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
    PROBLEM: https://yukicoder.me/problems/no/888
    links:
    - https://yukicoder.me/problems/no/888
  bundledCode: "#line 1 \"verify/enum-divisor.test.cpp\"\n#define PROBLEM \"https://yukicoder.me/problems/no/888\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #ifdef local\n#include <debug.hpp>\n#else\n#define debug(...)\n#endif\n#define\
    \ rep(i, n) for (int i = 0; i < n; i++)\ntemplate <class T> istream& operator>>(istream&\
    \ I, vector<T>& V) {for (T& X : V) I >> X; return I;}\ntemplate <class T> inline\
    \ bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}\ntemplate\
    \ <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return\
    \ false;}\nint dx[](1, 0, -1, 0), dy[](0, 1, 0, -1), inf = 2e9; long INF = 1e18;\n\
    #line 1 \"math/enum-divisor.hpp\"\nvector<long long> enum_divisor(long long n)\
    \ {\n    vector<long long> res;\n    for (int i = 1; (long long)i * i <= n; i++)\
    \ {\n        if (n % i == 0) {\n            res.push_back(i);\n            long\
    \ long j = n / i;\n            if (j != i) res.push_back(j);\n        }\n    }\n\
    \    sort(res.begin(), res.end());\n    return res;\n}\n#line 6 \"verify/enum-divisor.test.cpp\"\
    \n\nint main(){\n    long long n;\n    cin >> n;\n    auto divisors = enum_divisor(n);\n\
    \    long long ans = 0;\n    for (auto divisor : divisors) {\n        ans += divisor;\n\
    \    }\n    cout << ans << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://yukicoder.me/problems/no/888\"\n\n#include <bits/stdc++.h>\n\
    #include \"template.hpp\"\n#include \"math/enum-divisor.hpp\"\n\nint main(){\n\
    \    long long n;\n    cin >> n;\n    auto divisors = enum_divisor(n);\n    long\
    \ long ans = 0;\n    for (auto divisor : divisors) {\n        ans += divisor;\n\
    \    }\n    cout << ans << endl;\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - math/enum-divisor.hpp
  isVerificationFile: true
  path: verify/enum-divisor.test.cpp
  requiredBy: []
  timestamp: '2024-12-30 13:42:31+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/enum-divisor.test.cpp
layout: document
redirect_from:
- /verify/verify/enum-divisor.test.cpp
- /verify/verify/enum-divisor.test.cpp.html
title: verify/enum-divisor.test.cpp
---
