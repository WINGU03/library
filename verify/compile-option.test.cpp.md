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
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep1(i, a) for (int i = 0; i < a; i++)\n#define\
    \ rep2(i, a, b) for (int i = a; i < b; i++)\n#define rep3(i, a, b, c) for (int\
    \ i = a; i < b; i += c)\n#define overloadRep(a, b, c, d, e, ...) e\n#define rep(...)\
    \ overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n#define all(a) a.begin(),\
    \ a.end()\n#define rall(a) a.rbegin(), a.rend()\n#define endl '\\n'\nusing ll\
    \ = long long;\nusing ull = unsigned long long;\nconst int inf = 1e9;\nconst ll\
    \ INF = 1e18;\nconst int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1,\
    \ 0};\nconst int ddx[8] = {1, 0, -1, 0, 1, -1, 1, -1};\nconst int ddy[8] = {0,\
    \ 1, 0, -1, 1, -1, -1, 1};\nstruct cincout {cincout() {ios_base::sync_with_stdio(false);\
    \ cin.tie(nullptr); cout << fixed << setprecision(15);}} init;\ntemplate <class\
    \ T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}\n\
    template <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;}\
    \ return false;}\ntemplate <class T1, class T2> istream& operator>>(istream& is,\
    \ pair<T1, T2>& p) {is >> p.first >> p.second; return is;}\ntemplate <class T1,\
    \ class T2> ostream& operator<<(ostream& os, const pair<T1, T2>& p) {os << p.first\
    \ << \" \" << p.second << '\\n'; return os;}\ntemplate <class T> istream& operator>>(istream&\
    \ is, vector<T>& v) {for (T& in : v) {is >> in;} return is;}\ntemplate <class\
    \ T> ostream& operator<<(ostream& os, const vector<T>& v) {rep(i, (int)v.size())\
    \ {os << v[i] << \" \\n\"[i + 1 == (int)v.size()];} return os;}\ntemplate <class\
    \ T> istream& operator>>(istream& is, vector<vector<T>>& vv) {for (vector<T>&\
    \ v : vv) {is >> v;} return is;}\ntemplate <class T> ostream& operator<<(ostream&\
    \ os, vector<vector<T>>& vv) {for (vector<T>& v : vv) {os << v;} return os;}\n\
    template <class T> inline T max(vector<T> x) {return *max_element(x.begin(), x.end());}\n\
    template <class T> inline T min(vector<T> x) {return *min_element(x.begin(), x.end());}\n\
    template <class T> inline T sum(vector<T> x) {return reduce(x.begin(), x.end());}\n\
    template <class... T> constexpr auto min(T... a) {return min(initializer_list<common_type_t<T...>>{a...});}\n\
    template <class... T> constexpr auto max(T... a) {return max(initializer_list<common_type_t<T...>>{a...});}\n\
    inline bool bit(ll x, int p) {return (x >> p) & 1;}\ninline bool out(int ni, int\
    \ nj, int h, int w) {return (ni < 0 or ni >= h or nj < 0 or nj >= w);}\ninline\
    \ int pc(ll x) {return __builtin_popcountll(x);}\nvoid Yes() {cout << \"Yes\"\
    \ << endl;}\nvoid No() {cout << \"No\" << endl;}\n#line 1 \"misc/compile-option.hpp\"\
    \n#pragma GCC target(\"avx2\")\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"\
    unroll-loops\")\n#line 6 \"verify/compile-option.test.cpp\"\n\nint main(){\n \
    \   int t;\n    cin >> t;\n    while(t--){\n        ll a, b;\n        cin >> a\
    \ >> b;\n        cout << a + b << endl;\n    }\n    return 0;\n}\n"
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
  timestamp: '2024-09-12 16:44:49+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/compile-option.test.cpp
layout: document
redirect_from:
- /verify/verify/compile-option.test.cpp
- /verify/verify/compile-option.test.cpp.html
title: verify/compile-option.test.cpp
---
