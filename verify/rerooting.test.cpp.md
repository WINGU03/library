---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/rerooting.hpp
    title: "\u5168\u65B9\u4F4D\u6728DP"
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_B
  bundledCode: "#line 1 \"verify/rerooting.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_B\"\
    \n\n#include <bits/stdc++.h>\n#line 1 \"template.hpp\"\nusing namespace std;\n\
    #ifdef local\n#include <debug.hpp>\n#else\n#define debug(...)\n#endif\n#define\
    \ rep(i, n) for (int i = 0; i < n; i++)\ntemplate <class T> istream& operator>>(istream&\
    \ I, vector<T>& V) {for (T& X : V) I >> X; return I;}\ntemplate <class T> inline\
    \ bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}\ntemplate\
    \ <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return\
    \ false;}\nvector<int> di = {-1, 1, 0, 0}, dj = {0, 0, -1, 1}; int inf = 1e9;\
    \ long INF = 1e18;\n#line 1 \"graph/rerooting.hpp\"\ntemplate <typename Cost>\n\
    struct Edge {\n    int src, to;\n    Cost cost;\n    Edge(int s, int t, Cost c\
    \ = 1) : src(s), to(t), cost(c) {}\n    // \u30C7\u30D5\u30A9\u30EB\u30C8\u3067\
    \u306F\u884C\u304D\u5148\u3092\u8FD4\u3059\n    operator int() const { return\
    \ to; }\n};\n\ntemplate <typename Cost>\nstruct Graph : vector<vector<Edge<Cost>>>\
    \ {\n    Graph(int n) : vector<vector<Edge<Cost>>>(n) {}\n    void add_edge(int\
    \ s, int t, Cost c = 1) { (*this)[s].emplace_back(s, t, c); }\n};\n\ntemplate\
    \ <\n    typename Cost,\n    typename Data,\n    Data (*merge)(Data, Data),\n\
    \    Data (*e)(),\n    Data (*leaf)(),\n    Data (*apply)(Data, int, int, Cost)>\n\
    struct Rerooting : Graph<Cost> {\n    // memo : 0\u3092\u6839\u3068\u3057\u305F\
    \u3068\u304D\u306Ei\u306E\u90E8\u5206\u6728\u306E\u5024(i\u81EA\u8EAB\u306F\u542B\
    \u307E\u308C\u306A\u3044)\n    vector<Data> dp, memo;\n\n    Rerooting(int n)\
    \ : Graph<Cost>::Graph(n) {}\n\n    vector<Data> run() {\n        memo.resize((*this).size(),\
    \ e());\n        dp.resize((*this).size());\n        dfs1(0, -1);\n        dfs2(0,\
    \ -1, e());\n        return dp;\n    }\n    // 0\u3092\u6839\u3068\u3057\u305F\
    \u6728\u306E\u5168\u3066\u306E\u90E8\u5206\u6728\u306B\u3064\u3044\u3066\u5024\
    \u3092\u6C42\u3081\u308B\n    void dfs1(int c, int p) {\n        bool upd = false;\n\
    \        for (Edge<Cost>& d : (*this)[c]) {\n            if (d != p) {\n     \
    \           dfs1(d, c);\n                upd = true;\n                memo[c]\
    \ = merge(memo[c], apply(memo[d], d, c, d.cost));\n            }\n        }\n\
    \        if (!upd) memo[c] = leaf();\n    }\n    // \u884C\u304D\u304C\u3051\u9806\
    \u3067\u9802\u70B9\u306E\u5024\u3092\u78BA\u5B9A(val\u306B\u306F\u3001\u6839\u306E\
    \u79FB\u52D5\u304C\u884C\u308F\u308C\u308B\u3068\u304D\u3001\u5143\u3005\u6839\
    \u3060\u3063\u305F\u9802\u70B9\u306E\u5024\u304C\u683C\u7D0D\u3055\u308C\u308B\
    )\n    void dfs2(int c, int p, const Data& val) {\n        vector<Data> ds{val};\n\
    \        for (Edge<Cost>& d : (*this)[c]) {\n            if (d != p) {\n     \
    \           ds.push_back(apply(memo[d], d, c, d.cost));\n            }\n     \
    \   }\n        int n = ds.size(), idx = 1;\n        // \u524D\u304B\u3089\u306E\
    \u7D2F\u7A4D\u3068\u5F8C\u308D\u304B\u3089\u306E\u7D2F\u7A4D\n        vector<Data>\
    \ head(n + 1, e()), tail(n + 1, e());\n        for (int i = 1; i <= n; i++) head[i]\
    \ = merge(head[i - 1], ds[i - 1]);\n        for (int i = n - 1; i >= 0; i--) tail[i]\
    \ = merge(tail[i + 1], ds[i]);\n        // c\u306E\u5024\u306F\u5168\u3066\u306E\
    \u5B50\u5B6B\u306B\u3064\u3044\u3066\u306E\u7D2F\u7A4D\n        dp[c] = head[n];\n\
    \n        for (Edge<Cost>& d : (*this)[c]) {\n            if (d != p) {\n    \
    \            Data sub = merge(head[idx], tail[idx + 1]);\n                dfs2(d,\
    \ c, apply(sub, c, d, d.cost));\n                idx++;\n            }\n     \
    \   }\n    }\n};\n#line 6 \"verify/rerooting.test.cpp\"\n\nint merge(int a, int\
    \ b) {\n    return max(a, b);\n}\nint e() {\n    return 0;\n}\nint leaf() {\n\
    \    return 0;\n}\nint apply(int a, int c, int p, int w) {\n    return a + w;\n\
    }\n\nint main() {\n    int n;\n    cin >> n;\n    Rerooting<int, int, merge, e,\
    \ leaf, apply> g(n);\n    rep(i, n - 1) {\n        int u, v, w;\n        cin >>\
    \ u >> v >> w;\n        g.add_edge(u, v, w);\n        g.add_edge(v, u, w);\n \
    \   }\n    auto ans = g.run();\n    rep(i, n) {\n        cout << ans[i] << endl;\n\
    \    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_B\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"graph/rerooting.hpp\"\
    \n\nint merge(int a, int b) {\n    return max(a, b);\n}\nint e() {\n    return\
    \ 0;\n}\nint leaf() {\n    return 0;\n}\nint apply(int a, int c, int p, int w)\
    \ {\n    return a + w;\n}\n\nint main() {\n    int n;\n    cin >> n;\n    Rerooting<int,\
    \ int, merge, e, leaf, apply> g(n);\n    rep(i, n - 1) {\n        int u, v, w;\n\
    \        cin >> u >> v >> w;\n        g.add_edge(u, v, w);\n        g.add_edge(v,\
    \ u, w);\n    }\n    auto ans = g.run();\n    rep(i, n) {\n        cout << ans[i]\
    \ << endl;\n    }\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - graph/rerooting.hpp
  isVerificationFile: true
  path: verify/rerooting.test.cpp
  requiredBy: []
  timestamp: '2025-01-29 20:24:57+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/rerooting.test.cpp
layout: document
redirect_from:
- /verify/verify/rerooting.test.cpp
- /verify/verify/rerooting.test.cpp.html
title: verify/rerooting.test.cpp
---
