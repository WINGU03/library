---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/fenwick-tree.test.cpp
    title: verify/fenwick-tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data-structure/fenwick-tree.hpp\"\ntemplate <class T>\n\
    struct fenwick_tree {\n    int n;\n    vector<T> d;\n    fenwick_tree(int n) :\
    \ n(n) {\n        d.resize(n);\n    }\n\n    T sum(int r) {\n        T s = 0;\n\
    \        for (; r > 0; r -= r & -r) s += d[r - 1];\n        return s;\n    }\n\
    \n    T sum(int l, int r) { return sum(r) - sum(l); }\n\n    void add(int idx,\
    \ T x) {\n        for (idx++; idx <= n; idx += idx & -idx) d[idx - 1] += x;\n\
    \    }\n};\n"
  code: "template <class T>\nstruct fenwick_tree {\n    int n;\n    vector<T> d;\n\
    \    fenwick_tree(int n) : n(n) {\n        d.resize(n);\n    }\n\n    T sum(int\
    \ r) {\n        T s = 0;\n        for (; r > 0; r -= r & -r) s += d[r - 1];\n\
    \        return s;\n    }\n\n    T sum(int l, int r) { return sum(r) - sum(l);\
    \ }\n\n    void add(int idx, T x) {\n        for (idx++; idx <= n; idx += idx\
    \ & -idx) d[idx - 1] += x;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/fenwick-tree.hpp
  requiredBy: []
  timestamp: '2024-09-21 13:06:46+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/fenwick-tree.test.cpp
documentation_of: data-structure/fenwick-tree.hpp
layout: document
title: Fenwick Tree
---
