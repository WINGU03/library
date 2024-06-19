---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/Mo.hpp
    title: other/Mo.hpp
  - icon: ':heavy_check_mark:'
    path: other/cc.hpp
    title: "\u5EA7\u6A19\u5727\u7E2E"
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
    PROBLEM: https://judge.yosupo.jp/problem/static_range_frequency
    links:
    - https://judge.yosupo.jp/problem/static_range_frequency
  bundledCode: "#line 1 \"verify/yosupo-mo2.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_frequency\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n\
    #define rep2(i, a, b) for (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i,\
    \ a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a,\
    \ b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define rrep(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i,\
    \ a, b) for (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(),\
    \ a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\nusing P = pair<ll, ll>;\nusing T = tuple<ll, ll,\
    \ ll>;\nconst int inf = 1e9;\nconst ll INF = 1e18;\nconst int dx[4] = {0, 1, 0,\
    \ -1};\nconst int dy[4] = {1, 0, -1, 0};\n\nstruct cincout {\n    cincout() {\n\
    \        ios_base::sync_with_stdio(false);\n        cin.tie(nullptr);\n      \
    \  cout << fixed << setprecision(15);\n    }\n} init;\n\ntemplate <class T>\n\
    inline bool chmax(T &a, T b) {\n    if (a < b) {\n        a = b;\n        return\
    \ true;\n    }\n    return false;\n}\n\ntemplate <class T>\ninline bool chmin(T\
    \ &a, T b) {\n    if (a > b) {\n        a = b;\n        return true;\n    }\n\
    \    return false;\n}\n\ntemplate <class T1, class T2>\nistream &operator>>(istream\
    \ &is, pair<T1, T2> &p) {\n    is >> p.first >> p.second;\n    return is;\n}\n\
    \ntemplate <class T1, class T2>\nostream &operator<<(ostream &os, const pair<T1,\
    \ T2> &p) {\n    os << p.first << \" \" << p.second << '\\n';\n    return os;\n\
    }\n\ntemplate <class T>\nistream &operator>>(istream &is, vector<T> &v) {\n  \
    \  for (T &in : v) {\n        is >> in;\n    }\n    return is;\n}\n\ntemplate\
    \ <class T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n    rep(i,\
    \ (int)v.size()) {\n        os << v[i] << \" \\n\"[i + 1 == (int)v.size()];\n\
    \    }\n    return os;\n}\n\ntemplate <class T>\nistream &operator>>(istream &is,\
    \ vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        is >> v;\n\
    \    }\n    return is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream &os,\
    \ vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        os << v;\n\
    \    }\n    return os;\n}\n\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n\
    }\n\nbool out(int ni, int nj, int h, int w) {\n    return (ni < 0 or ni >= h or\
    \ nj < 0 or nj >= w);\n}\n\nint pc(ll x) {\n    return __builtin_popcountll(x);\n\
    }\n#line 1 \"other/cc.hpp\"\ntemplate <typename T = int>\nstruct CC {\n    bool\
    \ initialized;\n    vector<T> xs;\n    unordered_map<T, int> mp;\n    CC() : initialized(false)\
    \ {}\n    void add(T x) {\n        xs.push_back(x);\n    }\n    void init() {\n\
    \        sort(xs.begin(), xs.end());\n        xs.erase(unique(xs.begin(), xs.end()),\
    \ xs.end());\n        for (int i = 0; i < (int)xs.size(); i++) {\n           \
    \ mp[xs[i]] = i;\n        }\n        initialized = true;\n    }\n    int operator()(T\
    \ x) {\n        if (!initialized) init();\n        return mp[x];\n    }\n    T\
    \ operator[](int i) {\n        if (!initialized) init();\n        return xs[i];\n\
    \    }\n    int size() {\n        if (!initialized) init();\n        return xs.size();\n\
    \    }\n};\n#line 1 \"other/Mo.hpp\"\ntemplate <class M>\nstruct Mo {\n    using\
    \ T = typename M::T;\n    int backet;\n    vector<int> left, right, order;\n \
    \   Mo(int N, int Q) {\n        order.resize(Q);\n        backet = max<int>(1,\
    \ (double)(N) / max<double>(1, sqrt(Q * 2.0 / 3)));\n        iota(order.begin(),\
    \ order.end(), 0);\n    }\n    void add_query(int lf, int ri) {\n        left.emplace_back(lf);\n\
    \        right.emplace_back(ri);\n    }\n    vector<T> run() {\n        vector<T>\
    \ answer(order.size());\n        sort(order.begin(), order.end(), [&](int a, int\
    \ b) {\n            int ab = left[a] / backet, bb = left[b] / backet;\n      \
    \      if (ab != bb) return ab < bb;\n            if (ab & 1) return right[a]\
    \ < right[b];\n            return right[a] > right[b];\n        });\n        int\
    \ nl = 0, nr = 0;\n        for (int i : order) {\n            while (nl > left[i])\
    \ {\n                M::add_left(--nl);\n            }\n            while (right[i]\
    \ > nr) {\n                M::add_right(nr++);\n            }\n            while\
    \ (nl < left[i]) {\n                M::del_left(nl++);\n            }\n      \
    \      while (right[i] < nr) {\n                M::del_right(--nr);\n        \
    \    }\n            answer[i] = M::res(i);\n        }\n        return answer;\n\
    \    }\n};\n#line 7 \"verify/yosupo-mo2.test.cpp\"\n\nint main() {\n    static\
    \ int n, q;\n    cin >> n >> q;\n    static vector<int> a(n);\n    cin >> a;\n\
    \n    static CC c;\n    rep(i, n) c.add(a[i]);\n    rep(i, n) a[i] = c(a[i]);\n\
    \    static vector<int> cnt(c.size());\n    static vector<int> l(q), r(q), x(q);\n\
    \    rep(i, q) cin >> l[i] >> r[i] >> x[i];\n    struct M {\n        using T =\
    \ int;\n        static void add_left(int pos) {\n            cnt[a[pos]]++;\n\
    \        }\n        static void add_right(int pos) {\n            cnt[a[pos]]++;\n\
    \        }\n        static void del_left(int pos) {\n            cnt[a[pos]]--;\n\
    \        }\n        static void del_right(int pos) {\n            cnt[a[pos]]--;\n\
    \        }\n        static T res(int i) {\n            if (n == 0) return 0;\n\
    \            if (c(x[i]) == 0 and c[0] != x[i]) return 0;\n            return\
    \ cnt[c(x[i])];\n        }\n    };\n\n    Mo<M> mo(n, q);\n    rep(i, q) {\n \
    \       mo.add_query(l[i], r[i]);\n    }\n    auto res = mo.run();\n    for (auto\
    \ i : res) cout << i << '\\n';\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_frequency\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"other/cc.hpp\"\
    \n#include \"other/Mo.hpp\"\n\nint main() {\n    static int n, q;\n    cin >>\
    \ n >> q;\n    static vector<int> a(n);\n    cin >> a;\n\n    static CC c;\n \
    \   rep(i, n) c.add(a[i]);\n    rep(i, n) a[i] = c(a[i]);\n    static vector<int>\
    \ cnt(c.size());\n    static vector<int> l(q), r(q), x(q);\n    rep(i, q) cin\
    \ >> l[i] >> r[i] >> x[i];\n    struct M {\n        using T = int;\n        static\
    \ void add_left(int pos) {\n            cnt[a[pos]]++;\n        }\n        static\
    \ void add_right(int pos) {\n            cnt[a[pos]]++;\n        }\n        static\
    \ void del_left(int pos) {\n            cnt[a[pos]]--;\n        }\n        static\
    \ void del_right(int pos) {\n            cnt[a[pos]]--;\n        }\n        static\
    \ T res(int i) {\n            if (n == 0) return 0;\n            if (c(x[i]) ==\
    \ 0 and c[0] != x[i]) return 0;\n            return cnt[c(x[i])];\n        }\n\
    \    };\n\n    Mo<M> mo(n, q);\n    rep(i, q) {\n        mo.add_query(l[i], r[i]);\n\
    \    }\n    auto res = mo.run();\n    for (auto i : res) cout << i << '\\n';\n\
    \    return 0;\n}"
  dependsOn:
  - template.hpp
  - other/cc.hpp
  - other/Mo.hpp
  isVerificationFile: true
  path: verify/yosupo-mo2.test.cpp
  requiredBy: []
  timestamp: '2024-06-19 14:02:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/yosupo-mo2.test.cpp
layout: document
redirect_from:
- /verify/verify/yosupo-mo2.test.cpp
- /verify/verify/yosupo-mo2.test.cpp.html
title: verify/yosupo-mo2.test.cpp
---
