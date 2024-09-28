---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/segment-tree-rolling-hash.hpp
    title: "Rolling Hash(\u4E00\u70B9\u5909\u66F4\u53CD\u8EE2\u53EF\u80FD)"
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
    PROBLEM: https://yukicoder.me/problems/no/2761
    links:
    - https://yukicoder.me/problems/no/2761
  bundledCode: "#line 1 \"verify/segment-tree-rolling-hash.test.cpp\"\n#define PROBLEM\
    \ \"https://yukicoder.me/problems/no/2761\"\n\n#include <bits/stdc++.h>\n\n#line\
    \ 2 \"template.hpp\"\nusing namespace std;\n#include <atcoder/modint>\nusing namespace\
    \ atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n#define dump(...)\
    \ cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n#define dump(...)\n#endif\n#define\
    \ rep1(a) for (int i = 0; i < a; i++)\n#define rep2(i, a) for (int i = 0; i <\
    \ a; i++)\n#define rep3(i, a, b) for (int i = a; i < b; i++)\n#define rep4(i,\
    \ a, b, c) for (int i = a; i < b; i += c)\n#define overloadRep(a, b, c, d, e,\
    \ ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define all(a) a.begin(), a.end()\n#define rall(a) a.rbegin(), a.rend()\n#define\
    \ endl '\\n'\n#define INT(...) int __VA_ARGS__; input(__VA_ARGS__)\n#define LL(...)\
    \ ll __VA_ARGS__; input(__VA_ARGS__)\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nconst int inf = 1e9;\nconst ll INF = 1e18;\nconst int dx[4] = {0,\
    \ 1, 0, -1};\nconst int dy[4] = {1, 0, -1, 0};\nconst int ddx[8] = {1, 0, -1,\
    \ 0, 1, -1, 1, -1};\nconst int ddy[8] = {0, 1, 0, -1, 1, -1, -1, 1};\nstruct cincout\
    \ {cincout() {ios_base::sync_with_stdio(false); cin.tie(nullptr); cout << fixed\
    \ << setprecision(15);}} init;\ntemplate <class... T> void input(T&... a) {(cin\
    \ >> ... >> a);}\ntemplate <class T> inline bool chmax(T& a, T b) {if (a < b)\
    \ {a = b; return true;} return false;}\ntemplate <class T> inline bool chmin(T&\
    \ a, T b) {if (a > b) {a = b; return true;} return false;}\ntemplate <class T1,\
    \ class T2> istream& operator>>(istream& is, pair<T1, T2>& p) {is >> p.first >>\
    \ p.second; return is;}\ntemplate <class T1, class T2> ostream& operator<<(ostream&\
    \ os, const pair<T1, T2>& p) {os << p.first << \" \" << p.second << '\\n'; return\
    \ os;}\ntemplate <class T> istream& operator>>(istream& is, vector<T>& v) {for\
    \ (T& in : v) {is >> in;} return is;}\ntemplate <class T> ostream& operator<<(ostream&\
    \ os, const vector<T>& v) {rep(i, (int)v.size()) {os << v[i] << \" \\n\"[i + 1\
    \ == (int)v.size()];} return os;}\ntemplate <class T> istream& operator>>(istream&\
    \ is, vector<vector<T>>& vv) {for (vector<T>& v : vv) {is >> v;} return is;}\n\
    template <class T> ostream& operator<<(ostream& os, vector<vector<T>>& vv) {for\
    \ (vector<T>& v : vv) {os << v;} return os;}\ntemplate <class T> inline T max(vector<T>\
    \ x) {return *max_element(x.begin(), x.end());}\ntemplate <class T> inline T min(vector<T>\
    \ x) {return *min_element(x.begin(), x.end());}\ntemplate <class T> inline T sum(vector<T>\
    \ x) {return reduce(x.begin(), x.end());}\ntemplate <class... T> constexpr auto\
    \ min(T... a) {return min(initializer_list<common_type_t<T...>>{a...});}\ntemplate\
    \ <class... T> constexpr auto max(T... a) {return max(initializer_list<common_type_t<T...>>{a...});}\n\
    inline bool bit(ll x, int p) {return (x >> p) & 1;}\ninline bool out(int ni, int\
    \ nj, int h, int w) {return (ni < 0 or ni >= h or nj < 0 or nj >= w);}\ninline\
    \ int pc(ll x) {return __builtin_popcountll(x);}\nvoid Yes(bool judge = true)\
    \ {cout << (judge ? \"Yes\" : \"No\") << endl;}\nvoid No(bool judge = true) {cout\
    \ << (judge ? \"No\" : \"Yes\") << endl;}\n#line 6 \"verify/segment-tree-rolling-hash.test.cpp\"\
    \n\n#line 1 \"string/segment-tree-rolling-hash.hpp\"\n#include <atcoder/segtree>\n\
    \nrandom_device rd;\nmt19937_64 rnd(rd());\nstatic constexpr long long mod = (1LL\
    \ << 61) - 1;\nstatic const long long base = rnd() % (mod - 4) + 2;\n\nusing D\
    \ = pair<long long, long long>;\n\nD op(D l, D r) {\n    auto [a, b] = l;\n  \
    \  auto [c, d] = r;\n    __int128_t x = (__int128_t)a * d + c;\n    return D(x\
    \ % mod, ((__int128_t)b * d) % mod);\n}\nD e() {\n    return D(0, 1);\n}\n\nD\
    \ op_(D l, D r) {\n    auto [a, b] = l;\n    auto [c, d] = r;\n    __int128_t\
    \ x = (__int128_t)c * b + a;\n    return D(x % mod, ((__int128_t)b * d) % mod);\n\
    }\n\nstruct rolling_hash {\n    segtree<D, op, e> seg;\n    segtree<D, op_, e>\
    \ rseg;\n    bool reverse;\n\n    explicit rolling_hash(const string &s = \"\"\
    , bool reverse_ = false)\n        : reverse(reverse_) {\n        int n = s.size();\n\
    \        seg = segtree<D, op, e>(n);\n        if (reverse) rseg = segtree<D, op_,\
    \ e>(n);\n        rep(i, n) {\n            seg.set(i, D(s[i], base));\n      \
    \      if (reverse) rseg.set(i, D(s[i], base));\n        }\n    }\n\n    inline\
    \ void set(int i, char c) {\n        seg.set(i, D(c, base));\n        if (reverse)\
    \ rseg.set(i, D(c, base));\n    }\n\n    inline long long get(int l, int r) {\n\
    \        auto [a, b] = seg.prod(l, r);\n        return a;\n    }\n\n    inline\
    \ long long rget(int l, int r) {\n        auto [a, b] = rseg.prod(l, r);\n   \
    \     return a;\n    }\n};\n#line 8 \"verify/segment-tree-rolling-hash.test.cpp\"\
    \n\nint main() {\n    int n, l, q;\n    cin >> n >> l >> q;\n    vector<string>\
    \ s(n);\n    cin >> s;\n    vector<rolling_hash> rs;\n    rep(i, n) {\n      \
    \  rs.push_back(rolling_hash(s[i]));\n    }\n\n    while (q--) {\n        int\
    \ type;\n        cin >> type;\n        if (type == 1) {\n            int k;\n\
    \            char c, d;\n            cin >> k >> c >> d;\n            k--;\n \
    \           rep(i, n) {\n                if (s[i][k] == c) {\n               \
    \     s[i][k] = d;\n                    rs[i].set(k, d);\n                }\n\
    \            }\n        } else {\n            string t;\n            cin >> t;\n\
    \            int m = t.size();\n            rolling_hash rt(t);\n\n          \
    \  int ans = 0;\n            rep(i, n) {\n                if (rs[i].get(0, m)\
    \ == rt.get(0, m)) ans++;\n            }\n\n            cout << ans << endl;\n\
    \        }\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://yukicoder.me/problems/no/2761\"\n\n#include <bits/stdc++.h>\n\
    \n#include \"template.hpp\"\n\n#include \"string/segment-tree-rolling-hash.hpp\"\
    \n\nint main() {\n    int n, l, q;\n    cin >> n >> l >> q;\n    vector<string>\
    \ s(n);\n    cin >> s;\n    vector<rolling_hash> rs;\n    rep(i, n) {\n      \
    \  rs.push_back(rolling_hash(s[i]));\n    }\n\n    while (q--) {\n        int\
    \ type;\n        cin >> type;\n        if (type == 1) {\n            int k;\n\
    \            char c, d;\n            cin >> k >> c >> d;\n            k--;\n \
    \           rep(i, n) {\n                if (s[i][k] == c) {\n               \
    \     s[i][k] = d;\n                    rs[i].set(k, d);\n                }\n\
    \            }\n        } else {\n            string t;\n            cin >> t;\n\
    \            int m = t.size();\n            rolling_hash rt(t);\n\n          \
    \  int ans = 0;\n            rep(i, n) {\n                if (rs[i].get(0, m)\
    \ == rt.get(0, m)) ans++;\n            }\n\n            cout << ans << endl;\n\
    \        }\n    }\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - string/segment-tree-rolling-hash.hpp
  isVerificationFile: true
  path: verify/segment-tree-rolling-hash.test.cpp
  requiredBy: []
  timestamp: '2024-09-28 15:55:14+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/segment-tree-rolling-hash.test.cpp
layout: document
redirect_from:
- /verify/verify/segment-tree-rolling-hash.test.cpp
- /verify/verify/segment-tree-rolling-hash.test.cpp.html
title: verify/segment-tree-rolling-hash.test.cpp
---
