---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: misc/next-combination.hpp
    title: Next combination
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B
  bundledCode: "#line 1 \"verify/next-combination.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef local\n#include <cpp-dump.hpp>\n\
    #define dump cpp_dump\n#else\n#undef dump\n#define dump(...)\n#endif\n#define\
    \ rep(i, n) for (int i = 0; i < n; i++)\ntemplate <class T> istream& operator>>(istream&\
    \ I, vector<T>& V) { for (T& X : V) I >> X; return I; }\n#line 1 \"misc/next-combination.hpp\"\
    \ntemplate <typename T>\nbool next_combination(const T first, const T last, int\
    \ k) {\n    const T subset = first + k;\n    if (first == last || first == subset\
    \ || last == subset) {\n        return false;\n    }\n    T src = subset;\n  \
    \  while (first != src) {\n        src--;\n        if (*src < *(last - 1)) {\n\
    \            T dest = subset;\n            while (*src >= *dest) {\n         \
    \       dest++;\n            }\n            iter_swap(src, dest);\n          \
    \  rotate(src + 1, dest + 1, last);\n            rotate(subset, subset + (last\
    \ - dest) - 1, last);\n            return true;\n        }\n    }\n    rotate(first,\
    \ subset, last);\n    return false;\n}\n#line 6 \"verify/next-combination.test.cpp\"\
    \n\nint main() {\n    int n, s;\n    while (cin >> n >> s) {\n        if (n ==\
    \ 0 and s == 0) exit(0);\n        vector<int> p(n);\n        iota(p.begin(), p.end(),\
    \ 1);\n        int ans = 0;\n        do {\n            int cur = 0;\n        \
    \    rep(i, 3) cur += p[i];\n            if (cur == s) ans++;\n        } while\
    \ (next_combination(p.begin(), p.end(), 3));\n        cout << ans << endl;\n \
    \   }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B\"\n\n\
    #include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"misc/next-combination.hpp\"\
    \n\nint main() {\n    int n, s;\n    while (cin >> n >> s) {\n        if (n ==\
    \ 0 and s == 0) exit(0);\n        vector<int> p(n);\n        iota(p.begin(), p.end(),\
    \ 1);\n        int ans = 0;\n        do {\n            int cur = 0;\n        \
    \    rep(i, 3) cur += p[i];\n            if (cur == s) ans++;\n        } while\
    \ (next_combination(p.begin(), p.end(), 3));\n        cout << ans << endl;\n \
    \   }\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - misc/next-combination.hpp
  isVerificationFile: true
  path: verify/next-combination.test.cpp
  requiredBy: []
  timestamp: '2024-10-28 01:36:20+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/next-combination.test.cpp
layout: document
redirect_from:
- /verify/verify/next-combination.test.cpp
- /verify/verify/next-combination.test.cpp.html
title: verify/next-combination.test.cpp
---
