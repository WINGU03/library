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
    \ << (judge ? \"No\" : \"Yes\") << endl;}\n#line 1 \"misc/next-combination.hpp\"\
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
    \ 0 and s == 0) exit(0);\n        vector<int> p(n);\n        iota(all(p), 1);\n\
    \        int ans = 0;\n        do {\n            int cur = 0;\n            rep(i,\
    \ 3) cur += p[i];\n            if (cur == s) ans++;\n        } while (next_combination(all(p),\
    \ 3));\n        cout << ans << endl;\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B\"\n\n\
    #include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"misc/next-combination.hpp\"\
    \n\nint main() {\n    int n, s;\n    while (cin >> n >> s) {\n        if (n ==\
    \ 0 and s == 0) exit(0);\n        vector<int> p(n);\n        iota(all(p), 1);\n\
    \        int ans = 0;\n        do {\n            int cur = 0;\n            rep(i,\
    \ 3) cur += p[i];\n            if (cur == s) ans++;\n        } while (next_combination(all(p),\
    \ 3));\n        cout << ans << endl;\n    }\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - misc/next-combination.hpp
  isVerificationFile: true
  path: verify/next-combination.test.cpp
  requiredBy: []
  timestamp: '2024-09-21 13:06:46+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/next-combination.test.cpp
layout: document
redirect_from:
- /verify/verify/next-combination.test.cpp
- /verify/verify/next-combination.test.cpp.html
title: verify/next-combination.test.cpp
---
