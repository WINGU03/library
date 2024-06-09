---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/CC.test.cpp
    title: verify/CC.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/CompileOption.test.cpp
    title: verify/CompileOption.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/Enum_divisor.test.cpp
    title: verify/Enum_divisor.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/Enum_divisor2.test.cpp
    title: verify/Enum_divisor2.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/Extgcd.test.cpp
    title: verify/Extgcd.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/Prime_factorize.test.cpp
    title: verify/Prime_factorize.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/Rerooting.test.cpp
    title: verify/Rerooting.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/RollingHash.test.cpp
    title: verify/RollingHash.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/RollingHash2.test.cpp
    title: verify/RollingHash2.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"other/Macro.cpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n#define dump(...)\
    \ cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n#define dump(...)\n#endif\n#define\
    \ rep1(i, a) for (int i = 0; i < (int)(a); i++)\n#define rep2(i, a, b) for (int\
    \ i = (int)(a); i < (int)(b); i++)\n#define rep3(i, a, b, c) for (int i = (int)(a);\
    \ i < (int)(b); i += (int)(c))\n#define overloadRep(a, b, c, d, e, ...) e\n#define\
    \ rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n#define rrep(i,\
    \ a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i, a, b) for\
    \ (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(), a.end()\n\
    #define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing P = pair<ll,\
    \ ll>;\nusing T = tuple<ll, ll, ll>;\nconst int inf = 1e9;\nconst ll INF = 1e18;\n\
    const int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1, 0};\n\nstruct cincout\
    \ {\n    cincout() {\n        ios_base::sync_with_stdio(false);\n        cin.tie(nullptr);\n\
    \        cout << fixed << setprecision(15);\n    }\n} init;\n\ntemplate <class\
    \ T>\ninline bool chmax(T &a, T b) {\n    if (a < b) {\n        a = b;\n     \
    \   return true;\n    }\n    return false;\n}\n\ntemplate <class T>\ninline bool\
    \ chmin(T &a, T b) {\n    if (a > b) {\n        a = b;\n        return true;\n\
    \    }\n    return false;\n}\n\ntemplate <class T>\nistream &operator>>(istream\
    \ &is, vector<T> &v) {\n    for (T &in : v) {\n        is >> in;\n    }\n    return\
    \ is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream &os, const vector<T>\
    \ &v) {\n    rep(i, (int)v.size()) {\n        os << v[i] << \" \\n\"[i + 1 ==\
    \ (int)v.size()];\n    }\n    return os;\n}\n\ntemplate <class T>\nistream &operator>>(istream\
    \ &is, vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        is >>\
    \ v;\n    }\n    return is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        os <<\
    \ v;\n    }\n    return os;\n}\n\ntemplate <class T1, class T2>\nistream &operator>>(istream\
    \ &is, pair<T1, T2> &p) {\n    is >> p.first >> p.second;\n    return is;\n}\n\
    \ntemplate <class T1, class T2>\nostream &operator<<(ostream &os, const pair<T1,\
    \ T2> &p) {\n    os << p.first << \" \" << p.second << '\\n';\n    return os;\n\
    }\n\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n}\n\nbool out(int ni,\
    \ int nj, int h, int w) {\n    return (ni < 0 or ni >= h or nj < 0 or nj >= w);\n\
    }\n\nint pc(ll x) {\n    return __builtin_popcountll(x);\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n\
    #define rep2(i, a, b) for (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i,\
    \ a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a,\
    \ b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define rrep(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i,\
    \ a, b) for (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(),\
    \ a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing\
    \ P = pair<ll, ll>;\nusing T = tuple<ll, ll, ll>;\nconst int inf = 1e9;\nconst\
    \ ll INF = 1e18;\nconst int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1,\
    \ 0};\n\nstruct cincout {\n    cincout() {\n        ios_base::sync_with_stdio(false);\n\
    \        cin.tie(nullptr);\n        cout << fixed << setprecision(15);\n    }\n\
    } init;\n\ntemplate <class T>\ninline bool chmax(T &a, T b) {\n    if (a < b)\
    \ {\n        a = b;\n        return true;\n    }\n    return false;\n}\n\ntemplate\
    \ <class T>\ninline bool chmin(T &a, T b) {\n    if (a > b) {\n        a = b;\n\
    \        return true;\n    }\n    return false;\n}\n\ntemplate <class T>\nistream\
    \ &operator>>(istream &is, vector<T> &v) {\n    for (T &in : v) {\n        is\
    \ >> in;\n    }\n    return is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const vector<T> &v) {\n    rep(i, (int)v.size()) {\n        os << v[i]\
    \ << \" \\n\"[i + 1 == (int)v.size()];\n    }\n    return os;\n}\n\ntemplate <class\
    \ T>\nistream &operator>>(istream &is, vector<vector<T>> &vv) {\n    for (vector<T>\
    \ &v : vv) {\n        is >> v;\n    }\n    return is;\n}\n\ntemplate <class T>\n\
    ostream &operator<<(ostream &os, vector<vector<T>> &vv) {\n    for (vector<T>\
    \ &v : vv) {\n        os << v;\n    }\n    return os;\n}\n\ntemplate <class T1,\
    \ class T2>\nistream &operator>>(istream &is, pair<T1, T2> &p) {\n    is >> p.first\
    \ >> p.second;\n    return is;\n}\n\ntemplate <class T1, class T2>\nostream &operator<<(ostream\
    \ &os, const pair<T1, T2> &p) {\n    os << p.first << \" \" << p.second << '\\\
    n';\n    return os;\n}\n\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n\
    }\n\nbool out(int ni, int nj, int h, int w) {\n    return (ni < 0 or ni >= h or\
    \ nj < 0 or nj >= w);\n}\n\nint pc(ll x) {\n    return __builtin_popcountll(x);\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: other/Macro.cpp
  requiredBy: []
  timestamp: '2024-06-08 20:18:32+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/CC.test.cpp
  - verify/Enum_divisor2.test.cpp
  - verify/Prime_factorize.test.cpp
  - verify/RollingHash2.test.cpp
  - verify/CompileOption.test.cpp
  - verify/RollingHash.test.cpp
  - verify/Enum_divisor.test.cpp
  - verify/Rerooting.test.cpp
  - verify/Extgcd.test.cpp
documentation_of: other/Macro.cpp
layout: document
redirect_from:
- /library/other/Macro.cpp
- /library/other/Macro.cpp.html
title: other/Macro.cpp
---
