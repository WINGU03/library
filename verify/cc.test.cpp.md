---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: misc/cc.hpp
    title: "\u5EA7\u6A19\u5727\u7E2E"
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D
  bundledCode: "#line 1 \"verify/cc.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef local\n#include <debug.hpp>\n\
    #else\n#define debug(...)\n#endif\n#define rep(i, n) for (int i = 0; i < n; i++)\n\
    template <class T> istream& operator>>(istream& I, vector<T>& V) {for (T& X :\
    \ V) I >> X; return I;}\ntemplate <class T> inline bool chmax(T& a, T b) {if (a\
    \ < b) {a = b; return true;} return false;}\ntemplate <class T> inline bool chmin(T&\
    \ a, T b) {if (a > b) {a = b; return true;} return false;}\nconst int dx[](1,\
    \ 0, -1, 0), dy[](0, 1, 0, -1), inf = 2e9; const long INF = 1e18;\n#line 1 \"\
    misc/cc.hpp\"\ntemplate <typename T = int>\nstruct CC {\n    bool initialized;\n\
    \    vector<T> xs;\n    unordered_map<T, int> mp;\n    CC() : initialized(false)\
    \ {}\n    void add(T x) {\n        xs.push_back(x);\n    }\n    void init() {\n\
    \        sort(xs.begin(), xs.end());\n        xs.erase(unique(xs.begin(), xs.end()),\
    \ xs.end());\n        for (int i = 0; i < (int)xs.size(); i++) {\n           \
    \ mp[xs[i]] = i;\n        }\n        initialized = true;\n    }\n    int operator()(T\
    \ x) {\n        if (!initialized) init();\n        return mp[x];\n    }\n    T\
    \ operator[](int i) {\n        if (!initialized) init();\n        return xs[i];\n\
    \    }\n    int size() {\n        if (!initialized) init();\n        return xs.size();\n\
    \    }\n};\n#line 6 \"verify/cc.test.cpp\"\n#include <atcoder/fenwicktree>\n\n\
    int main() {\n    int n;\n    cin >> n;\n    vector<int> a(n);\n    cin >> a;\n\
    \    CC c;\n    rep(i, n) c.add(a[i]);\n    int m = c.size();\n    rep(i, n) a[i]\
    \ = c(a[i]);\n    fenwick_tree<int> f(m);\n    long long ans = 0;\n    rep(i,\
    \ n) {\n        ans += f.sum(a[i], m);\n        f.add(a[i], 1);\n    }\n    cout\
    \ << ans << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"misc/cc.hpp\"\
    \n#include <atcoder/fenwicktree>\n\nint main() {\n    int n;\n    cin >> n;\n\
    \    vector<int> a(n);\n    cin >> a;\n    CC c;\n    rep(i, n) c.add(a[i]);\n\
    \    int m = c.size();\n    rep(i, n) a[i] = c(a[i]);\n    fenwick_tree<int> f(m);\n\
    \    long long ans = 0;\n    rep(i, n) {\n        ans += f.sum(a[i], m);\n   \
    \     f.add(a[i], 1);\n    }\n    cout << ans << endl;\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - misc/cc.hpp
  isVerificationFile: true
  path: verify/cc.test.cpp
  requiredBy: []
  timestamp: '2024-12-11 21:51:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/cc.test.cpp
layout: document
redirect_from:
- /verify/verify/cc.test.cpp
- /verify/verify/cc.test.cpp.html
title: verify/cc.test.cpp
---
