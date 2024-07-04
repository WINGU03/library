---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: misc/compile-option.hpp
    title: "\u30B3\u30F3\u30D1\u30A4\u30EB\u30AA\u30D7\u30B7\u30E7\u30F3"
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
    PROBLEM: https://judge.yosupo.jp/problem/many_aplusb
    links:
    - https://judge.yosupo.jp/problem/many_aplusb
  bundledCode: "#line 1 \"verify/compile-option.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n\
    #define rep2(i, a, b) for (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i,\
    \ a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a,\
    \ b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define rrep(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i,\
    \ a, b) for (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(),\
    \ a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\nconst int inf = 1e9;\nconst ll INF = 1e18;\nconst\
    \ int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1, 0};\n\nstruct cincout\
    \ {\n    cincout() {\n        ios_base::sync_with_stdio(false);\n        cin.tie(nullptr);\n\
    \        cout << fixed << setprecision(15);\n    }\n} init;\n\n// chmax chmin\n\
    template <class T>\ninline bool chmax(T &a, T b) {\n    if (a < b) {\n       \
    \ a = b;\n        return true;\n    }\n    return false;\n}\n\ntemplate <class\
    \ T>\ninline bool chmin(T &a, T b) {\n    if (a > b) {\n        a = b;\n     \
    \   return true;\n    }\n    return false;\n}\n\n// pair\ntemplate <class T1,\
    \ class T2>\nistream &operator>>(istream &is, pair<T1, T2> &p) {\n    is >> p.first\
    \ >> p.second;\n    return is;\n}\n\ntemplate <class T1, class T2>\nostream &operator<<(ostream\
    \ &os, const pair<T1, T2> &p) {\n    os << p.first << \" \" << p.second << '\\\
    n';\n    return os;\n}\n\n// vector\ntemplate <class T>\nistream &operator>>(istream\
    \ &is, vector<T> &v) {\n    for (T &in : v) {\n        is >> in;\n    }\n    return\
    \ is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream &os, const vector<T>\
    \ &v) {\n    rep(i, (int)v.size()) {\n        os << v[i] << \" \\n\"[i + 1 ==\
    \ (int)v.size()];\n    }\n    return os;\n}\n\ntemplate <class T>\nistream &operator>>(istream\
    \ &is, vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        is >>\
    \ v;\n    }\n    return is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        os <<\
    \ v;\n    }\n    return os;\n}\n\nbool bit(ll x, int p) {\n    return (x >> p)\
    \ & 1;\n}\n\nbool out(int ni, int nj, int h, int w) {\n    return (ni < 0 or ni\
    \ >= h or nj < 0 or nj >= w);\n}\n\nint pc(ll x) {\n    return __builtin_popcountll(x);\n\
    }\n\ntemplate <class T>\nT max(vector<T> x) {\n    return *max_element(x.begin(),\
    \ x.end());\n}\n#line 1 \"misc/compile-option.hpp\"\n#pragma GCC target(\"avx2\"\
    )\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"unroll-loops\")\n#line\
    \ 6 \"verify/compile-option.test.cpp\"\n\nint main(){\n    int t;\n    cin >>\
    \ t;\n    while(t--){\n        ll a, b;\n        cin >> a >> b;\n        cout\
    \ << a + b << endl;\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\n\n#include\
    \ <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"misc/compile-option.hpp\"\
    \n\nint main(){\n    int t;\n    cin >> t;\n    while(t--){\n        ll a, b;\n\
    \        cin >> a >> b;\n        cout << a + b << endl;\n    }\n    return 0;\n\
    }"
  dependsOn:
  - template.hpp
  - misc/compile-option.hpp
  isVerificationFile: true
  path: verify/compile-option.test.cpp
  requiredBy: []
  timestamp: '2024-07-04 21:35:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/compile-option.test.cpp
layout: document
redirect_from:
- /verify/verify/compile-option.test.cpp
- /verify/verify/compile-option.test.cpp.html
title: verify/compile-option.test.cpp
---
