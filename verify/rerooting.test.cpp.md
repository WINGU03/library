---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/rerooting.hpp
    title: graph/rerooting.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_B
  bundledCode: "#line 1 \"verify/rerooting.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_B\"\
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
    }\n#line 1 \"graph/rerooting.hpp\"\ntemplate<typename Cost>\nstruct Edge{\n  \
    \  int src,to;\n    Cost cost;\n    Edge(int s, int t, Cost c=1) : src(s), to(t),\
    \ cost(c) {}\n    // \u30C7\u30D5\u30A9\u30EB\u30C8\u3067\u306F\u884C\u304D\u5148\
    \u3092\u8FD4\u3059\n    operator int() const {return to;}\n};\n\ntemplate<typename\
    \ Cost>\nstruct Graph : vector<vector<Edge<Cost>>>{\n    Graph(int n) : vector<vector<Edge<Cost>>>(n){}\n\
    \    void add_edge(int s, int t, Cost c=1){(*this)[s].emplace_back(s, t, c);}\n\
    };\n\ntemplate <\n    typename Cost,\n    typename Data, \n    Data (*merge)(Data,\
    \ Data),\n    Data (*e)(),\n    Data (*leaf)(),\n    Data (*apply)(Data, int,\
    \ int, Cost)\n>\nstruct Rerooting : Graph<Cost>{\n    // memo : 0\u3092\u6839\u3068\
    \u3057\u305F\u3068\u304D\u306Ei\u306E\u90E8\u5206\u6728\u306E\u5024(i\u81EA\u8EAB\
    \u306F\u542B\u307E\u308C\u306A\u3044)\n    vector<Data> dp, memo;\n\n    Rerooting(int\
    \ n) : Graph<Cost>::Graph(n){}\n\n    vector<Data> run(){\n        memo.resize((*this).size(),\
    \ e());\n        dp.resize((*this).size());\n        dfs1(0, -1);\n        dfs2(0,\
    \ -1, e());\n        return dp;\n    }\n    // 0\u3092\u6839\u3068\u3057\u305F\
    \u6728\u306E\u5168\u3066\u306E\u90E8\u5206\u6728\u306B\u3064\u3044\u3066\u5024\
    \u3092\u6C42\u3081\u308B\n    void dfs1(int c,int p){\n        bool upd=false;\n\
    \        for(Edge<Cost> &d : (*this)[c])if(d!=p){\n            dfs1(d, c);\n \
    \           upd=true;\n            memo[c]=merge(memo[c], apply(memo[d], d, c,\
    \ d.cost));\n        }\n        if(!upd)memo[c]=leaf();\n    }\n    // \u884C\u304D\
    \u304C\u3051\u9806\u3067\u9802\u70B9\u306E\u5024\u3092\u78BA\u5B9A(val\u306B\u306F\
    \u3001\u6839\u306E\u79FB\u52D5\u304C\u884C\u308F\u308C\u308B\u3068\u304D\u3001\
    \u5143\u3005\u6839\u3060\u3063\u305F\u9802\u70B9\u306E\u5024\u304C\u683C\u7D0D\
    \u3055\u308C\u308B)\n    void dfs2(int c, int p, const Data &val){\n        vector<Data>\
    \ ds{val};\n        for(Edge<Cost> &d : (*this)[c])if(d!=p){\n            ds.push_back(apply(memo[d],\
    \ d, c, d.cost));\n        }\n        int n=ds.size(), idx=1;\n        // \u524D\
    \u304B\u3089\u306E\u7D2F\u7A4D\u3068\u5F8C\u308D\u304B\u3089\u306E\u7D2F\u7A4D\
    \n        vector<Data> head(n+1, e()), tail(n+1, e());\n        for(int i=1; i<=n;\
    \ i++)head[i]=merge(head[i-1], ds[i-1]);\n        for(int i=n-1; i>=0; i--)tail[i]=merge(tail[i+1],\
    \ ds[i]);\n        // c\u306E\u5024\u306F\u5168\u3066\u306E\u5B50\u5B6B\u306B\u3064\
    \u3044\u3066\u306E\u7D2F\u7A4D\n        dp[c]=head[n];\n\n        for (Edge<Cost>\
    \ &d : (*this)[c])if(d!=p){\n            Data sub=merge(head[idx], tail[idx+1]);\n\
    \            dfs2(d, c, apply(sub, c, d, d.cost));\n            idx++;\n     \
    \   }\n  }\n};\n#line 6 \"verify/rerooting.test.cpp\"\n\nint merge(int a, int\
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
  timestamp: '2024-06-17 20:15:00+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/rerooting.test.cpp
layout: document
redirect_from:
- /verify/verify/rerooting.test.cpp
- /verify/verify/rerooting.test.cpp.html
title: verify/rerooting.test.cpp
---
