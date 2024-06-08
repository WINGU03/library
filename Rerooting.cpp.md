---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Rerooting.cpp\"\ntemplate<typename Cost>\nstruct Edge{\n\
    \    int src,to;\n    Cost cost;\n    Edge(int s, int t, Cost c=1) : src(s), to(t),\
    \ cost(c){}\n    // \u30C7\u30D5\u30A9\u30EB\u30C8\u3067\u306F\u884C\u304D\u5148\
    \u3092\u8FD4\u3059\n    operator int() const {return to;}\n};\n\ntemplate<typename\
    \ Cost>\nstruct Graph : vector<vector<Edge<Cost>>>{\n    Graph(int n) : vector<vector<Edge<Cost>>>(n){}\n\
    \    void add_edge(int s, int t, Cost c=1){(*this)[s].emplace_back(s, t, c);}\n\
    };\n\ntemplate <\n    typename Cost,\n    typename Data, \n    Data (*merge)(Data,\
    \ Data),\n    Data (*e)(),\n    Data (*leaf)(),\n    Data (*apply)(Data, int,\
    \ int, Cost)\n>\nstruct Rerooting : Graph<Cost>{\n    // dp : \u7B54\u3048, memo\
    \ : 0\u3092\u6839\u3068\u3057\u305F\u3068\u304D\u306Ei\u306E\u90E8\u5206\u6728\
    \u306E\u5024(i\u81EA\u8EAB\u306F\u542B\u307E\u308C\u306A\u3044)\n    vector<Data>\
    \ dp, memo;\n\n    Rerooting(int n) : Graph<Cost>::Graph(n){}\n\n    vector<Data>\
    \ run(){\n        memo.resize((*this).size(), e());\n        dp.resize((*this).size());\n\
    \        dfs1(0, -1);\n        dfs2(0, -1, e());\n        return dp;\n    }\n\
    \    // 0\u3092\u6839\u3068\u3057\u305F\u6728\u306E\u5168\u3066\u306E\u90E8\u5206\
    \u6728\u306B\u3064\u3044\u3066\u5024\u3092\u6C42\u3081\u308B\n    void dfs1(int\
    \ c,int p){\n        bool upd=false;\n        for(Edge<Cost> &d : (*this)[c])if(d!=p){\n\
    \            dfs1(d, c);\n            upd=true;\n            memo[c]=merge(memo[c],\
    \ apply(memo[d], d, c, d.cost));\n        }\n        if(!upd)memo[c]=leaf();\n\
    \    }\n    // \u884C\u304D\u304C\u3051\u9806\u3067\u9802\u70B9\u306E\u5024\u3092\
    \u78BA\u5B9A(val\u306B\u306F\u3001\u6839\u306E\u79FB\u52D5\u304C\u884C\u308F\u308C\
    \u308B\u3068\u304D\u3001\u5143\u3005\u6839\u3060\u3063\u305F\u9802\u70B9\u306E\
    \u5024\u304C\u683C\u7D0D\u3055\u308C\u308B)\n    void dfs2(int c, int p, const\
    \ Data &val){\n        vector<Data> ds{val};\n        for(Edge<Cost> &d : (*this)[c])if(d!=p){\n\
    \            ds.push_back(apply(memo[d], d, c, d.cost));\n        }\n        int\
    \ n=ds.size(), idx=1;\n        // \u524D\u304B\u3089\u306E\u7D2F\u7A4D\u3068\u5F8C\
    \u308D\u304B\u3089\u306E\u7D2F\u7A4D\n        vector<Data> head(n+1, e()), tail(n+1,\
    \ e());\n        for(int i=1; i<=n; i++)head[i]=merge(head[i-1], ds[i-1]);\n \
    \       for(int i=n-1; i>=0; i--)tail[i]=merge(tail[i+1], ds[i]);\n        //\
    \ c\u306E\u5024\u306F\u5168\u3066\u306E\u5B50\u5B6B\u306B\u3064\u3044\u3066\u306E\
    \u7D2F\u7A4D\n        dp[c]=head[n];\n\n        for (Edge<Cost> &d : (*this)[c])if(d!=p){\n\
    \            Data sub=merge(head[idx], tail[idx+1]);\n            dfs2(d, c, apply(sub,\
    \ c, d, d.cost));\n            idx++;\n        }\n  }\n};\n"
  code: "template<typename Cost>\nstruct Edge{\n    int src,to;\n    Cost cost;\n\
    \    Edge(int s, int t, Cost c=1) : src(s), to(t), cost(c){}\n    // \u30C7\u30D5\
    \u30A9\u30EB\u30C8\u3067\u306F\u884C\u304D\u5148\u3092\u8FD4\u3059\n    operator\
    \ int() const {return to;}\n};\n\ntemplate<typename Cost>\nstruct Graph : vector<vector<Edge<Cost>>>{\n\
    \    Graph(int n) : vector<vector<Edge<Cost>>>(n){}\n    void add_edge(int s,\
    \ int t, Cost c=1){(*this)[s].emplace_back(s, t, c);}\n};\n\ntemplate <\n    typename\
    \ Cost,\n    typename Data, \n    Data (*merge)(Data, Data),\n    Data (*e)(),\n\
    \    Data (*leaf)(),\n    Data (*apply)(Data, int, int, Cost)\n>\nstruct Rerooting\
    \ : Graph<Cost>{\n    // dp : \u7B54\u3048, memo : 0\u3092\u6839\u3068\u3057\u305F\
    \u3068\u304D\u306Ei\u306E\u90E8\u5206\u6728\u306E\u5024(i\u81EA\u8EAB\u306F\u542B\
    \u307E\u308C\u306A\u3044)\n    vector<Data> dp, memo;\n\n    Rerooting(int n)\
    \ : Graph<Cost>::Graph(n){}\n\n    vector<Data> run(){\n        memo.resize((*this).size(),\
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
    \   }\n  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: Rerooting.cpp
  requiredBy: []
  timestamp: '2024-06-08 10:03:27+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Rerooting.cpp
layout: document
redirect_from:
- /library/Rerooting.cpp
- /library/Rerooting.cpp.html
title: Rerooting.cpp
---
