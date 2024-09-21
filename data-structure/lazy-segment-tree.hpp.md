---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data-structure/lazy-segment-tree.hpp\"\ntemplate <class\
    \ M, auto op, auto e, class F, auto mapping, auto composition, auto id>\nstruct\
    \ lazy_segtree {\n    int n, h;\n    vector<M> d;\n    vector<F> lazy;\n    lazy_segtree(int\
    \ data_size) {\n        int x = 1;\n        while (data_size > (1 << x)) x++;\n\
    \        n = 1 << x, h = x;\n        d.resize(2 * n, e());\n        lazy.resize(n,\
    \ id());\n    }\n\n    void update(int idx) { d[idx] = op(d[2 * idx], d[2 * idx\
    \ + 1]); }\n\n    void all_apply(int idx, F f) {\n        d[idx] = mapping(f,\
    \ d[idx]);\n        if (idx < n) lazy[idx] = composition(f, lazy[idx]);\n    }\n\
    \n    void push(int idx) {\n        all_apply(2 * idx, lazy[idx]);\n        all_apply(2\
    \ * idx + 1, lazy[idx]);\n        lazy[idx] = id();\n    }\n\n    void set(int\
    \ idx, M x) {\n        idx += n;\n        for (int i = h; i >= 1; i--) push(idx\
    \ >> i);\n        d[idx] = x;\n        for (int i = 1; i <= h; i++) update(idx\
    \ >> i);\n    }\n\n    M prod(int l, int r) {\n        l += n, r += n;\n     \
    \   for (int i = h; i >= 1; i--) {\n            if (((l >> i) << i) != l) push(l\
    \ >> i);\n            if (((r >> i) << i) != r) push((r - 1) >> i);\n        }\n\
    \        M L = e(), R = e();\n        for (; l < r; l >>= 1, r >>= 1) {\n    \
    \        if (l & 1) L = op(L, d[l++]);\n            if (r & 1) R = op(d[--r],\
    \ R);\n        }\n        return op(L, R);\n    }\n\n    M get(int idx) { return\
    \ prod(idx, idx + 1); }\n\n    M all_prod() { return d[1]; }\n\n    void apply(int\
    \ l, int r, F f) {\n        l += n, r += n;\n        for (int i = h; i >= 1; i--)\
    \ {\n            if (((l >> i) << i) != l) push(l >> i);\n            if (((r\
    \ >> i) << i) != r) push((r - 1) >> i);\n        }\n        {\n            int\
    \ l2 = l, r2 = r;\n            for(; l < r; l >>= 1, r >>= 1) {\n            \
    \    if (l & 1) all_apply(l++, f);\n                if (r & 1) all_apply(--r,\
    \ f);\n            }\n            l = l2;\n            r = r2;\n        }\n  \
    \      for (int i = 1; i <= h; i++) {\n            if (((l >> i) << i) != l) update(l\
    \ >> i);\n            if (((r >> i) << i) != r) update((r - 1) >> i);\n      \
    \  }\n    }    \n\n    void apply(int idx, F f) { apply(idx, idx + 1, f); }\n\
    };\n"
  code: "template <class M, auto op, auto e, class F, auto mapping, auto composition,\
    \ auto id>\nstruct lazy_segtree {\n    int n, h;\n    vector<M> d;\n    vector<F>\
    \ lazy;\n    lazy_segtree(int data_size) {\n        int x = 1;\n        while\
    \ (data_size > (1 << x)) x++;\n        n = 1 << x, h = x;\n        d.resize(2\
    \ * n, e());\n        lazy.resize(n, id());\n    }\n\n    void update(int idx)\
    \ { d[idx] = op(d[2 * idx], d[2 * idx + 1]); }\n\n    void all_apply(int idx,\
    \ F f) {\n        d[idx] = mapping(f, d[idx]);\n        if (idx < n) lazy[idx]\
    \ = composition(f, lazy[idx]);\n    }\n\n    void push(int idx) {\n        all_apply(2\
    \ * idx, lazy[idx]);\n        all_apply(2 * idx + 1, lazy[idx]);\n        lazy[idx]\
    \ = id();\n    }\n\n    void set(int idx, M x) {\n        idx += n;\n        for\
    \ (int i = h; i >= 1; i--) push(idx >> i);\n        d[idx] = x;\n        for (int\
    \ i = 1; i <= h; i++) update(idx >> i);\n    }\n\n    M prod(int l, int r) {\n\
    \        l += n, r += n;\n        for (int i = h; i >= 1; i--) {\n           \
    \ if (((l >> i) << i) != l) push(l >> i);\n            if (((r >> i) << i) !=\
    \ r) push((r - 1) >> i);\n        }\n        M L = e(), R = e();\n        for\
    \ (; l < r; l >>= 1, r >>= 1) {\n            if (l & 1) L = op(L, d[l++]);\n \
    \           if (r & 1) R = op(d[--r], R);\n        }\n        return op(L, R);\n\
    \    }\n\n    M get(int idx) { return prod(idx, idx + 1); }\n\n    M all_prod()\
    \ { return d[1]; }\n\n    void apply(int l, int r, F f) {\n        l += n, r +=\
    \ n;\n        for (int i = h; i >= 1; i--) {\n            if (((l >> i) << i)\
    \ != l) push(l >> i);\n            if (((r >> i) << i) != r) push((r - 1) >> i);\n\
    \        }\n        {\n            int l2 = l, r2 = r;\n            for(; l <\
    \ r; l >>= 1, r >>= 1) {\n                if (l & 1) all_apply(l++, f);\n    \
    \            if (r & 1) all_apply(--r, f);\n            }\n            l = l2;\n\
    \            r = r2;\n        }\n        for (int i = 1; i <= h; i++) {\n    \
    \        if (((l >> i) << i) != l) update(l >> i);\n            if (((r >> i)\
    \ << i) != r) update((r - 1) >> i);\n        }\n    }    \n\n    void apply(int\
    \ idx, F f) { apply(idx, idx + 1, f); }\n};"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/lazy-segment-tree.hpp
  requiredBy: []
  timestamp: '2024-09-21 13:06:46+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data-structure/lazy-segment-tree.hpp
layout: document
title: Lazy Segment Tree
---
