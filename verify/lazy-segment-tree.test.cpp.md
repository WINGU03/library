---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structure/lazy-segment-tree.hpp
    title: Lazy Segment Tree
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_I
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_I
  bundledCode: "#line 1 \"verify/lazy-segment-tree.test.cpp\"\n#define PROBLEM \"\
    https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_I\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#line 1 \"data-structure/lazy-segment-tree.hpp\"\
    \ntemplate <class M, auto op, auto e, class F, auto mapping, auto composition,\
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
    \ idx, F f) { apply(idx, idx + 1, f); }\n};\n#line 7 \"verify/lazy-segment-tree.test.cpp\"\
    \n\nstruct M {\n    int x, w;\n};\n\nM op(M a, M b) {\n    a.x += b.x;\n    a.w\
    \ += b.w;\n    return a;\n}\n\nM e() {\n    return {0, 0};\n}\n\nM mapp(int f,\
    \ M a) {\n    if (f != 2000) a.x = f * a.w;\n    return a;\n}\n\nint comp(int\
    \ f, int g) {\n    return f == 2000 ? g : f;\n}\n\nint id() {\n    return 2000;\n\
    }\n\nint main() {\n    int n, q;\n    cin >> n >> q;\n    lazy_segtree<M, op,\
    \ e, int, mapp, comp, id> seg(n);\n    for (int i = 0; i < n; i++) seg.set(i,\
    \ {0, 1});\n    while (q--) {\n        int t;\n        cin >> t;\n        if (t\
    \ == 0) {\n            int l, r, x;\n            cin >> l >> r >> x;\n       \
    \     seg.apply(l, r + 1, x);\n        } else {\n            int l, r;\n     \
    \       cin >> l >> r;\n            cout << seg.prod(l, r + 1).x << endl;\n  \
    \      }\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_I\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"data-structure/lazy-segment-tree.hpp\"\
    \n\nstruct M {\n    int x, w;\n};\n\nM op(M a, M b) {\n    a.x += b.x;\n    a.w\
    \ += b.w;\n    return a;\n}\n\nM e() {\n    return {0, 0};\n}\n\nM mapp(int f,\
    \ M a) {\n    if (f != 2000) a.x = f * a.w;\n    return a;\n}\n\nint comp(int\
    \ f, int g) {\n    return f == 2000 ? g : f;\n}\n\nint id() {\n    return 2000;\n\
    }\n\nint main() {\n    int n, q;\n    cin >> n >> q;\n    lazy_segtree<M, op,\
    \ e, int, mapp, comp, id> seg(n);\n    for (int i = 0; i < n; i++) seg.set(i,\
    \ {0, 1});\n    while (q--) {\n        int t;\n        cin >> t;\n        if (t\
    \ == 0) {\n            int l, r, x;\n            cin >> l >> r >> x;\n       \
    \     seg.apply(l, r + 1, x);\n        } else {\n            int l, r;\n     \
    \       cin >> l >> r;\n            cout << seg.prod(l, r + 1).x << endl;\n  \
    \      }\n    }\n    return 0;\n}"
  dependsOn:
  - data-structure/lazy-segment-tree.hpp
  isVerificationFile: true
  path: verify/lazy-segment-tree.test.cpp
  requiredBy: []
  timestamp: '2024-09-21 13:41:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/lazy-segment-tree.test.cpp
layout: document
redirect_from:
- /verify/verify/lazy-segment-tree.test.cpp
- /verify/verify/lazy-segment-tree.test.cpp.html
title: verify/lazy-segment-tree.test.cpp
---
