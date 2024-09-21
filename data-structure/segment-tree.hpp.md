---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/segment-tree.test.cpp
    title: verify/segment-tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data-structure/segment-tree.hpp\"\ntemplate <class M, auto\
    \ op, auto e>\nstruct segtree {\n    int n;\n    vector<int> d;\n    segtree(int\
    \ data_size) {\n        int x = 1;\n        while (data_size > (1 << x)) x++;\n\
    \        n = 1 << x;\n        d.resize(2 * n, e());\n    }\n\n    void set(int\
    \ idx, M x) {\n        idx += n;\n        d[idx] = x;\n        while (idx >>=\
    \ 1) d[idx] = op(d[2 * idx], d[2 * idx + 1]);\n    }\n\n    M get(int idx) { return\
    \ d[idx + n]; }\n\n    M operator[](int idx) { return get(idx); }\n\n    M prod(int\
    \ l, int r) {\n        M L = e(), R = e();\n        for (l += n, r += n; l < r;\
    \ l >>= 1, r >>= 1) {\n            if (l & 1) L = op(L, d[l++]);\n           \
    \ if (r & 1) R = op(d[--r], R);\n        }\n        return op(L, R);\n    }\n\n\
    \    M all_prod() { return d[1]; }\n};\n"
  code: "template <class M, auto op, auto e>\nstruct segtree {\n    int n;\n    vector<int>\
    \ d;\n    segtree(int data_size) {\n        int x = 1;\n        while (data_size\
    \ > (1 << x)) x++;\n        n = 1 << x;\n        d.resize(2 * n, e());\n    }\n\
    \n    void set(int idx, M x) {\n        idx += n;\n        d[idx] = x;\n     \
    \   while (idx >>= 1) d[idx] = op(d[2 * idx], d[2 * idx + 1]);\n    }\n\n    M\
    \ get(int idx) { return d[idx + n]; }\n\n    M operator[](int idx) { return get(idx);\
    \ }\n\n    M prod(int l, int r) {\n        M L = e(), R = e();\n        for (l\
    \ += n, r += n; l < r; l >>= 1, r >>= 1) {\n            if (l & 1) L = op(L, d[l++]);\n\
    \            if (r & 1) R = op(d[--r], R);\n        }\n        return op(L, R);\n\
    \    }\n\n    M all_prod() { return d[1]; }\n};"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/segment-tree.hpp
  requiredBy: []
  timestamp: '2024-09-21 13:06:46+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/segment-tree.test.cpp
documentation_of: data-structure/segment-tree.hpp
layout: document
title: Segment Tree
---
