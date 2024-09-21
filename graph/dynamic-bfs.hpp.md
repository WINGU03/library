---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/dynamic-bfs.test.cpp
    title: verify/dynamic-bfs.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/dynamic-bfs.hpp\"\ntemplate <class T, class f>\nint\
    \ dynamic_bfs(T& s, f& nxt, T& g) {\n    if (s == g) return 0;\n    map<T, int>\
    \ dist;\n    queue<T> q;\n    dist[s] = 0;\n    q.push(s);\n    while (!q.empty())\
    \ {\n        auto v = q.front();\n        q.pop();\n        for (const auto& u\
    \ : nxt(v)) {\n            if (dist.count(u)) continue;\n            if (u ==\
    \ g) return dist[v] + 1;\n            dist[u] = dist[v] + 1;\n            q.push(u);\n\
    \        }\n    }\n    return -1;\n}\n"
  code: "template <class T, class f>\nint dynamic_bfs(T& s, f& nxt, T& g) {\n    if\
    \ (s == g) return 0;\n    map<T, int> dist;\n    queue<T> q;\n    dist[s] = 0;\n\
    \    q.push(s);\n    while (!q.empty()) {\n        auto v = q.front();\n     \
    \   q.pop();\n        for (const auto& u : nxt(v)) {\n            if (dist.count(u))\
    \ continue;\n            if (u == g) return dist[v] + 1;\n            dist[u]\
    \ = dist[v] + 1;\n            q.push(u);\n        }\n    }\n    return -1;\n}"
  dependsOn: []
  isVerificationFile: false
  path: graph/dynamic-bfs.hpp
  requiredBy: []
  timestamp: '2024-07-09 20:45:55+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/dynamic-bfs.test.cpp
documentation_of: graph/dynamic-bfs.hpp
layout: document
title: "\u52D5\u7684BFS"
---
