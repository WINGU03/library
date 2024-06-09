---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/CC.cpp
    title: other/CC.cpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D
  bundledCode: "#line 1 \"verify/CC.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"other/Macro.cpp\"\nusing namespace std;\n\
    \n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n\
    #else\n#undef dump\n#define dump(...)\n#endif\n#define rep1(i, a) for (int i =\
    \ 0; i < (int)(a); i++)\n#define rep2(i, a, b) for (int i = (int)(a); i < (int)(b);\
    \ i++)\n#define rep3(i, a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))\n\
    #define overloadRep(a, b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__,\
    \ rep3, rep2, rep1)(__VA_ARGS__)\n#define rrep(i, a, b) for (int i = (int)(a);\
    \ i <= (int)(b); i++)\n#define drep(i, a, b) for (int i = (int)(a); i >= (int)(b);\
    \ i--)\n#define all(a) a.begin(), a.end()\n#define rall(a) a.rbegin(), a.rend()\n\
    using ll = long long;\nusing P = pair<ll, ll>;\nusing T = tuple<ll, ll, ll>;\n\
    const int inf = 1e9;\nconst ll INF = 1e18;\nconst int dx[4] = {0, 1, 0, -1};\n\
    const int dy[4] = {1, 0, -1, 0};\n\nstruct cincout {\n    cincout() {\n      \
    \  ios_base::sync_with_stdio(false);\n        cin.tie(nullptr);\n        cout\
    \ << fixed << setprecision(15);\n    }\n} init;\n\ntemplate <class T>\ninline\
    \ bool chmax(T &a, T b) {\n    if (a < b) {\n        a = b;\n        return true;\n\
    \    }\n    return false;\n}\n\ntemplate <class T>\ninline bool chmin(T &a, T\
    \ b) {\n    if (a > b) {\n        a = b;\n        return true;\n    }\n    return\
    \ false;\n}\n\ntemplate <class T>\nistream &operator>>(istream &is, vector<T>\
    \ &v) {\n    for (T &in : v) {\n        is >> in;\n    }\n    return is;\n}\n\n\
    template <class T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n \
    \   rep(i, (int)v.size()) {\n        os << v[i] << \" \\n\"[i + 1 == (int)v.size()];\n\
    \    }\n    return os;\n}\n\ntemplate <class T>\nistream &operator>>(istream &is,\
    \ vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        is >> v;\n\
    \    }\n    return is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream &os,\
    \ vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        os << v;\n\
    \    }\n    return os;\n}\n\ntemplate <class T1, class T2>\nistream &operator>>(istream\
    \ &is, pair<T1, T2> &p) {\n    is >> p.first >> p.second;\n    return is;\n}\n\
    \ntemplate <class T1, class T2>\nostream &operator<<(ostream &os, const pair<T1,\
    \ T2> &p) {\n    os << p.first << \" \" << p.second << '\\n';\n    return os;\n\
    }\n\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n}\n\nbool out(int ni,\
    \ int nj, int h, int w) {\n    return (ni < 0 or ni >= h or nj < 0 or nj >= w);\n\
    }\n\nint pc(ll x) {\n    return __builtin_popcountll(x);\n}\n#line 1 \"other/CC.cpp\"\
    \ntemplate<typename T=int>\nstruct CC {\n  bool initialized;\n  vector<T> xs;\n\
    \  unordered_map<T, int> mp;\n  CC(): initialized(false) {}\n  void add(T x) {\
    \ xs.push_back(x);}\n  void init() {\n    sort(xs.begin(), xs.end());\n    xs.erase(unique(xs.begin(),xs.end()),xs.end());\n\
    \    for(int i = 0; i < (int)xs.size(); i++){\n      mp[xs[i]] = i;\n    }\n \
    \   initialized = true;\n  }\n\t// x\u304C\u5EA7\u5727\u5F8C\u4F55\u756A\u76EE\
    \u304B\u3092\u8FD4\u3059\n  int operator()(T x) {\n    if (!initialized) init();\n\
    \    return mp[x];\n  }\n    // \u5EA7\u5727\u5F8C\u306Ei\u756A\u76EE\u306E\u5024\
    \u3092\u8FD4\u3059\n  T operator[](int i) {\n    if (!initialized) init();\n \
    \   return xs[i];\n  }\n    // \u5EA7\u5727\u5F8C\u306E\u30B5\u30A4\u30BA\u3092\
    \u8FD4\u3059\n  int size() {\n    if (!initialized) init();\n    return xs.size();\n\
    \  }\n};\n#line 6 \"verify/CC.test.cpp\"\n#include <atcoder/fenwicktree>\nusing\
    \ namespace atcoder;\n\nint main() {\n    int n;\n    cin >> n;\n    vector<int>\
    \ a(n);\n    cin >> a;\n    CC c;\n    rep(i, n) c.add(a[i]);\n    int m = c.size();\n\
    \    rep(i, n) a[i] = c(a[i]);\n    fenwick_tree<int> f(m);\n    ll ans = 0;\n\
    \    rep(i, n) {\n        ans += f.sum(a[i], m);\n        f.add(a[i], 1);\n  \
    \  }\n    cout << ans << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_D\"\
    \n\n#include <bits/stdc++.h>\n#include \"other/Macro\"\n#include \"other/CC\"\n\
    #include <atcoder/fenwicktree>\nusing namespace atcoder;\n\nint main() {\n   \
    \ int n;\n    cin >> n;\n    vector<int> a(n);\n    cin >> a;\n    CC c;\n   \
    \ rep(i, n) c.add(a[i]);\n    int m = c.size();\n    rep(i, n) a[i] = c(a[i]);\n\
    \    fenwick_tree<int> f(m);\n    ll ans = 0;\n    rep(i, n) {\n        ans +=\
    \ f.sum(a[i], m);\n        f.add(a[i], 1);\n    }\n    cout << ans << endl;\n\
    \    return 0;\n}"
  dependsOn:
  - other/Macro.cpp
  - other/CC.cpp
  isVerificationFile: true
  path: verify/CC.test.cpp
  requiredBy: []
  timestamp: '2024-06-08 20:18:32+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/CC.test.cpp
layout: document
redirect_from:
- /verify/verify/CC.test.cpp
- /verify/verify/CC.test.cpp.html
title: verify/CC.test.cpp
---
