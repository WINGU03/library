---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/aizu-cc.test.cpp
    title: verify/aizu-cc.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/aizu-dynamic-bfs.test.cpp
    title: verify/aizu-dynamic-bfs.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/aizu-next-combination.test.cpp
    title: verify/aizu-next-combination.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/aizu-rolling-hash.test.cpp
    title: verify/aizu-rolling-hash.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/compile-option.test.cpp
    title: verify/compile-option.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/enum-divisor.test.cpp
    title: verify/enum-divisor.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/extgcd.test.cpp
    title: verify/extgcd.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/prime-factorize.test.cpp
    title: verify/prime-factorize.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/rerooting.test.cpp
    title: verify/rerooting.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/yosupo-mo1.test.cpp
    title: verify/yosupo-mo1.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/yosupo-mo2.test.cpp
    title: verify/yosupo-mo2.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/yosupo-rolling-hash.test.cpp
    title: verify/yosupo-rolling-hash.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/yuki-rolling-hash-tree.test.cpp
    title: verify/yuki-rolling-hash-tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#include <atcoder/modint>\nusing namespace atcoder;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n\
    #define rep2(i, a, b) for (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i,\
    \ a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a,\
    \ b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define rrep(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i,\
    \ a, b) for (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(),\
    \ a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\nconst int inf = 1e9;\nconst ll INF = 1e18;\nconst\
    \ int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1, 0};\nconst int ddx[8]\
    \ = {1, 0, -1, 0, 1, -1, 1, -1};\nconst int ddy[8] = {0, 1, 0, -1, 1, -1, -1,\
    \ 1};\n\nstruct cincout {\n    cincout() {\n        ios_base::sync_with_stdio(false);\n\
    \        cin.tie(nullptr);\n        cout << fixed << setprecision(15);\n    }\n\
    } init;\n\n// chmax chmin\ntemplate <class T>\ninline bool chmax(T &a, T b) {\n\
    \    if (a < b) {\n        a = b;\n        return true;\n    }\n    return false;\n\
    }\n\ntemplate <class T>\ninline bool chmin(T &a, T b) {\n    if (a > b) {\n  \
    \      a = b;\n        return true;\n    }\n    return false;\n}\n\n// pair\n\
    template <class T1, class T2>\nistream &operator>>(istream &is, pair<T1, T2> &p)\
    \ {\n    is >> p.first >> p.second;\n    return is;\n}\n\ntemplate <class T1,\
    \ class T2>\nostream &operator<<(ostream &os, const pair<T1, T2> &p) {\n    os\
    \ << p.first << \" \" << p.second << '\\n';\n    return os;\n}\n\n// vector\n\
    template <class T>\nistream &operator>>(istream &is, vector<T> &v) {\n    for\
    \ (T &in : v) {\n        is >> in;\n    }\n    return is;\n}\n\ntemplate <class\
    \ T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n    rep(i, (int)v.size())\
    \ {\n        os << v[i] << \" \\n\"[i + 1 == (int)v.size()];\n    }\n    return\
    \ os;\n}\n\ntemplate <class T>\nistream &operator>>(istream &is, vector<vector<T>>\
    \ &vv) {\n    for (vector<T> &v : vv) {\n        is >> v;\n    }\n    return is;\n\
    }\n\ntemplate <class T>\nostream &operator<<(ostream &os, vector<vector<T>> &vv)\
    \ {\n    for (vector<T> &v : vv) {\n        os << v;\n    }\n    return os;\n\
    }\n\n// bit\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n}\n\n// grid out\n\
    bool out(int ni, int nj, int h, int w) {\n    return (ni < 0 or ni >= h or nj\
    \ < 0 or nj >= w);\n}\n\n// popcount\nint pc(ll x) {\n    return __builtin_popcountll(x);\n\
    }\n\n// max(vector)\ntemplate <class T>\nT max(vector<T> x) {\n    return *max_element(x.begin(),\
    \ x.end());\n}\n\n// sum(vector)\ntemplate <class T>\nT sum(vector<T> x) {\n \
    \   return reduce(x.begin(), x.end());\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n#include <atcoder/modint>\n\
    using namespace atcoder;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n\
    #define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n#define dump(...)\n\
    #endif\n#define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n#define rep2(i,\
    \ a, b) for (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i, a, b, c) for\
    \ (int i = (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a, b, c,\
    \ d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define rrep(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i,\
    \ a, b) for (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(),\
    \ a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\nconst int inf = 1e9;\nconst ll INF = 1e18;\nconst\
    \ int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1, 0};\nconst int ddx[8]\
    \ = {1, 0, -1, 0, 1, -1, 1, -1};\nconst int ddy[8] = {0, 1, 0, -1, 1, -1, -1,\
    \ 1};\n\nstruct cincout {\n    cincout() {\n        ios_base::sync_with_stdio(false);\n\
    \        cin.tie(nullptr);\n        cout << fixed << setprecision(15);\n    }\n\
    } init;\n\n// chmax chmin\ntemplate <class T>\ninline bool chmax(T &a, T b) {\n\
    \    if (a < b) {\n        a = b;\n        return true;\n    }\n    return false;\n\
    }\n\ntemplate <class T>\ninline bool chmin(T &a, T b) {\n    if (a > b) {\n  \
    \      a = b;\n        return true;\n    }\n    return false;\n}\n\n// pair\n\
    template <class T1, class T2>\nistream &operator>>(istream &is, pair<T1, T2> &p)\
    \ {\n    is >> p.first >> p.second;\n    return is;\n}\n\ntemplate <class T1,\
    \ class T2>\nostream &operator<<(ostream &os, const pair<T1, T2> &p) {\n    os\
    \ << p.first << \" \" << p.second << '\\n';\n    return os;\n}\n\n// vector\n\
    template <class T>\nistream &operator>>(istream &is, vector<T> &v) {\n    for\
    \ (T &in : v) {\n        is >> in;\n    }\n    return is;\n}\n\ntemplate <class\
    \ T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n    rep(i, (int)v.size())\
    \ {\n        os << v[i] << \" \\n\"[i + 1 == (int)v.size()];\n    }\n    return\
    \ os;\n}\n\ntemplate <class T>\nistream &operator>>(istream &is, vector<vector<T>>\
    \ &vv) {\n    for (vector<T> &v : vv) {\n        is >> v;\n    }\n    return is;\n\
    }\n\ntemplate <class T>\nostream &operator<<(ostream &os, vector<vector<T>> &vv)\
    \ {\n    for (vector<T> &v : vv) {\n        os << v;\n    }\n    return os;\n\
    }\n\n// bit\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n}\n\n// grid out\n\
    bool out(int ni, int nj, int h, int w) {\n    return (ni < 0 or ni >= h or nj\
    \ < 0 or nj >= w);\n}\n\n// popcount\nint pc(ll x) {\n    return __builtin_popcountll(x);\n\
    }\n\n// max(vector)\ntemplate <class T>\nT max(vector<T> x) {\n    return *max_element(x.begin(),\
    \ x.end());\n}\n\n// sum(vector)\ntemplate <class T>\nT sum(vector<T> x) {\n \
    \   return reduce(x.begin(), x.end());\n}"
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy: []
  timestamp: '2024-07-18 21:32:12+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/aizu-next-combination.test.cpp
  - verify/yosupo-mo1.test.cpp
  - verify/rerooting.test.cpp
  - verify/yuki-rolling-hash-tree.test.cpp
  - verify/compile-option.test.cpp
  - verify/yosupo-rolling-hash.test.cpp
  - verify/enum-divisor.test.cpp
  - verify/extgcd.test.cpp
  - verify/prime-factorize.test.cpp
  - verify/aizu-cc.test.cpp
  - verify/aizu-rolling-hash.test.cpp
  - verify/yosupo-mo2.test.cpp
  - verify/aizu-dynamic-bfs.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
