---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/Prime_factorize.cpp
    title: math/Prime_factorize.cpp
  - icon: ':heavy_check_mark:'
    path: other/Macro.cpp
    title: other/Macro.cpp
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
  bundledCode: "#line 1 \"verify/Prime_factorize.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#line 2 \"math/Prime_factorize.cpp\"\
    \n\n#line 5 \"math/Prime_factorize.cpp\"\n\nstd::vector<std::pair<long long, long\
    \ long> > prime_factorize(long long n) {\n    std::vector<std::pair<long long,\
    \ long long> > res;\n    for (long long p = 2; p * p <= n; ++p) {\n        if\
    \ (n % p != 0) continue;\n        int num = 0;\n        while (n % p == 0) {\n\
    \            ++num;\n            n /= p;\n        }\n        res.push_back(std::make_pair(p,\
    \ num));\n    }\n    if (n != 1) res.push_back(std::make_pair(n, 1));\n    return\
    \ res;\n}\n#line 2 \"other/Macro.cpp\"\nusing namespace std;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
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
    }\n#line 7 \"verify/Prime_factorize.test.cpp\"\n\nint main() {\n    int n;\n \
    \   cin >> n;\n    auto p = prime_factorize(n);\n    cout << n << ':';\n    for\
    \ (auto [number, val] : p) {\n        rep(i, val) cout << \" \" << number;\n \
    \   }\n    cout << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n#include \"math/Prime_factorize\"\
    \n#include \"other/Macro\"\n\nint main() {\n    int n;\n    cin >> n;\n    auto\
    \ p = prime_factorize(n);\n    cout << n << ':';\n    for (auto [number, val]\
    \ : p) {\n        rep(i, val) cout << \" \" << number;\n    }\n    cout << endl;\n\
    \    return 0;\n}"
  dependsOn:
  - math/Prime_factorize.cpp
  - other/Macro.cpp
  isVerificationFile: true
  path: verify/Prime_factorize.test.cpp
  requiredBy: []
  timestamp: '2024-06-08 11:51:22+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/Prime_factorize.test.cpp
layout: document
redirect_from:
- /verify/verify/Prime_factorize.test.cpp
- /verify/verify/Prime_factorize.test.cpp.html
title: verify/Prime_factorize.test.cpp
---
