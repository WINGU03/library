---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: misc/cc.hpp
    title: "\u5EA7\u6A19\u5727\u7E2E"
  - icon: ':heavy_check_mark:'
    path: misc/mo.hpp
    title: "Mo\u2019s algorithm"
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
    PROBLEM: https://judge.yosupo.jp/problem/static_range_inversions_query
    links:
    - https://judge.yosupo.jp/problem/static_range_inversions_query
  bundledCode: "#line 1 \"verify/yosupo-mo1.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_inversions_query\"\
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
    inline bool bit(ll x, int p) {return (x >> p) & 1;}\ninline bool out(int ni, int\
    \ nj, int h, int w) {return (ni < 0 or ni >= h or nj < 0 or nj >= w);}\ninline\
    \ int pc(ll x) {return __builtin_popcountll(x);}\ntemplate <class T> inline T\
    \ max(vector<T> x) {return *max_element(x.begin(), x.end());}\ntemplate <class\
    \ T> inline T min(vector<T> x) {return *min_element(x.begin(), x.end());}\ntemplate\
    \ <class T> inline T sum(vector<T> x) {return reduce(x.begin(), x.end());}\n#line\
    \ 1 \"misc/mo.hpp\"\ntemplate <class M>\nstruct Mo {\n    using T = typename M::T;\n\
    \    int backet;\n    vector<int> left, right, order;\n    Mo(int N, int Q) {\n\
    \        order.resize(Q);\n        backet = max<int>(1, (double)(N) / max<double>(1,\
    \ sqrt(Q * 2.0 / 3)));\n        iota(order.begin(), order.end(), 0);\n    }\n\
    \    void add_query(int left_id, int right_id) {\n        left.emplace_back(left_id);\n\
    \        right.emplace_back(right_id);\n    }\n    vector<T> run() {\n       \
    \ vector<T> answer(order.size());\n        sort(order.begin(), order.end(), [&](int\
    \ a, int b) {\n            int a_block = left[a] / backet, b_block = left[b] /\
    \ backet;\n            if (a_block != b_block) return a_block < b_block;\n   \
    \         if (a_block & 1) return right[a] < right[b];\n            return right[a]\
    \ > right[b];\n        });\n        int now_left = 0, now_right = 0;\n       \
    \ for (int i : order) {\n            while (now_left > left[i]) {\n          \
    \      M::add_left(--now_left);\n            }\n            while (right[i] >\
    \ now_right) {\n                M::add_right(now_right++);\n            }\n  \
    \          while (now_left < left[i]) {\n                M::del_left(now_left++);\n\
    \            }\n            while (right[i] < now_right) {\n                M::del_right(--now_right);\n\
    \            }\n            answer[i] = M::res(i);\n        }\n        return\
    \ answer;\n    }\n};\n#line 1 \"misc/cc.hpp\"\ntemplate <typename T = int>\nstruct\
    \ CC {\n    bool initialized;\n    vector<T> xs;\n    unordered_map<T, int> mp;\n\
    \    CC() : initialized(false) {}\n    void add(T x) {\n        xs.push_back(x);\n\
    \    }\n    void init() {\n        sort(xs.begin(), xs.end());\n        xs.erase(unique(xs.begin(),\
    \ xs.end()), xs.end());\n        for (int i = 0; i < (int)xs.size(); i++) {\n\
    \            mp[xs[i]] = i;\n        }\n        initialized = true;\n    }\n \
    \   int operator()(T x) {\n        if (!initialized) init();\n        return mp[x];\n\
    \    }\n    T operator[](int i) {\n        if (!initialized) init();\n       \
    \ return xs[i];\n    }\n    int size() {\n        if (!initialized) init();\n\
    \        return xs.size();\n    }\n};\n#line 7 \"verify/yosupo-mo1.test.cpp\"\n\
    #include <atcoder/fenwicktree>\n\nint main() {\n    static int n, q;\n    cin\
    \ >> n >> q;\n    static vector<int> a(n);\n    cin >> a;\n    static CC c;\n\
    \    rep(i, n) c.add(a[i]);\n    rep(i, n) a[i] = c(a[i]);\n\n    static fenwick_tree<ll>\
    \ f(n + 1);\n    static ll ans = 0;\n    struct M {\n        using T = ll;\n \
    \       static void add_left(int i) {\n            ans += f.sum(0, a[i]);\n  \
    \          f.add(a[i], 1);\n        }\n        static void add_right(int i) {\n\
    \            ans += f.sum(a[i] + 1, n);\n            f.add(a[i], 1);\n       \
    \ }\n        static void del_left(int i) {\n            ans -= f.sum(0, a[i]);\n\
    \            f.add(a[i], -1);\n        }\n        static void del_right(int i)\
    \ {\n            ans -= f.sum(a[i] + 1, n);\n            f.add(a[i], -1);\n  \
    \      }\n        static T res(int i) {\n            return ans;\n        }\n\
    \    };\n\n    Mo<M> mo(n, q);\n    rep(i, q) {\n        int l, r;\n        cin\
    \ >> l >> r;\n        mo.add_query(l, r);\n    }\n    auto res = mo.run();\n \
    \   for (auto i : res) cout << i << '\\n';\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_inversions_query\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"misc/mo.hpp\"\
    \n#include \"misc/cc.hpp\"\n#include <atcoder/fenwicktree>\n\nint main() {\n \
    \   static int n, q;\n    cin >> n >> q;\n    static vector<int> a(n);\n    cin\
    \ >> a;\n    static CC c;\n    rep(i, n) c.add(a[i]);\n    rep(i, n) a[i] = c(a[i]);\n\
    \n    static fenwick_tree<ll> f(n + 1);\n    static ll ans = 0;\n    struct M\
    \ {\n        using T = ll;\n        static void add_left(int i) {\n          \
    \  ans += f.sum(0, a[i]);\n            f.add(a[i], 1);\n        }\n        static\
    \ void add_right(int i) {\n            ans += f.sum(a[i] + 1, n);\n          \
    \  f.add(a[i], 1);\n        }\n        static void del_left(int i) {\n       \
    \     ans -= f.sum(0, a[i]);\n            f.add(a[i], -1);\n        }\n      \
    \  static void del_right(int i) {\n            ans -= f.sum(a[i] + 1, n);\n  \
    \          f.add(a[i], -1);\n        }\n        static T res(int i) {\n      \
    \      return ans;\n        }\n    };\n\n    Mo<M> mo(n, q);\n    rep(i, q) {\n\
    \        int l, r;\n        cin >> l >> r;\n        mo.add_query(l, r);\n    }\n\
    \    auto res = mo.run();\n    for (auto i : res) cout << i << '\\n';\n    return\
    \ 0;\n}"
  dependsOn:
  - template.hpp
  - misc/mo.hpp
  - misc/cc.hpp
  isVerificationFile: true
  path: verify/yosupo-mo1.test.cpp
  requiredBy: []
  timestamp: '2024-09-12 14:59:30+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/yosupo-mo1.test.cpp
layout: document
redirect_from:
- /verify/verify/yosupo-mo1.test.cpp
- /verify/verify/yosupo-mo1.test.cpp.html
title: verify/yosupo-mo1.test.cpp
---
