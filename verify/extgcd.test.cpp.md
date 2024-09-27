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
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep1(a) for (int i = 0; i < a; i++)\n#define\
    \ rep2(i, a) for (int i = 0; i < a; i++)\n#define rep3(i, a, b) for (int i = a;\
    \ i < b; i++)\n#define rep4(i, a, b, c) for (int i = a; i < b; i += c)\n#define\
    \ overloadRep(a, b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__,\
    \ rep4, rep3, rep2, rep1)(__VA_ARGS__)\n#define all(a) a.begin(), a.end()\n#define\
    \ rall(a) a.rbegin(), a.rend()\n#define endl '\\n'\n#define INT(...) int __VA_ARGS__;\
    \ input(__VA_ARGS__)\n#define LL(...) ll __VA_ARGS__; input(__VA_ARGS__)\nusing\
    \ ll = long long;\nusing ull = unsigned long long;\nconst int inf = 1e9;\nconst\
    \ ll INF = 1e18;\nconst int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1,\
    \ 0};\nconst int ddx[8] = {1, 0, -1, 0, 1, -1, 1, -1};\nconst int ddy[8] = {0,\
    \ 1, 0, -1, 1, -1, -1, 1};\nstruct cincout {cincout() {ios_base::sync_with_stdio(false);\
    \ cin.tie(nullptr); cout << fixed << setprecision(15);}} init;\ntemplate <class...\
    \ T> void input(T&... a) {(cin >> ... >> a);}\ntemplate <class T> inline bool\
    \ chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}\ntemplate\
    \ <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return\
    \ false;}\ntemplate <class T1, class T2> istream& operator>>(istream& is, pair<T1,\
    \ T2>& p) {is >> p.first >> p.second; return is;}\ntemplate <class T1, class T2>\
    \ ostream& operator<<(ostream& os, const pair<T1, T2>& p) {os << p.first << \"\
    \ \" << p.second << '\\n'; return os;}\ntemplate <class T> istream& operator>>(istream&\
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
    \ int pc(ll x) {return __builtin_popcountll(x);}\nvoid Yes(bool judge = true)\
    \ {cout << (judge ? \"Yes\" : \"No\") << endl;}\nvoid No(bool judge = true) {cout\
    \ << (judge ? \"No\" : \"Yes\") << endl;}\n#line 1 \"math/extgcd.hpp\"\nlong long\
    \ extgcd(long long a, long long b, long long &x, long long &y) {\n    if (b ==\
    \ 0) {\n        x = 1;\n        y = 0;\n        return a;\n    }\n    long long\
    \ d = extgcd(b, a % b, y, x);\n    y -= a / b * x;\n    return d;\n}\n#line 6\
    \ \"verify/extgcd.test.cpp\"\n\nint main() {\n    int a, b;\n    cin >> a >> b;\n\
    \    ll x, y;\n    extgcd(a, b, x, y);\n    cout << x << \" \" << y << endl;\n\
    \    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"math/extgcd.hpp\"\
    \n\nint main() {\n    int a, b;\n    cin >> a >> b;\n    ll x, y;\n    extgcd(a,\
    \ b, x, y);\n    cout << x << \" \" << y << endl;\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - math/extgcd.hpp
  isVerificationFile: true
  path: verify/extgcd.test.cpp
  requiredBy: []
  timestamp: '2024-09-27 20:13:23+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/extgcd.test.cpp
layout: document
redirect_from:
- /verify/verify/extgcd.test.cpp
- /verify/verify/extgcd.test.cpp.html
title: verify/extgcd.test.cpp
---
