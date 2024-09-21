---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structure/segment-tree.hpp
    title: Segment Tree
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A
  bundledCode: "#line 1 \"verify/segment-tree.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 1 \"data-structure/segment-tree.hpp\"\
    \ntemplate <class M, auto op, auto e>\nstruct segtree {\n    int n;\n    vector<int>\
    \ d;\n    segtree(int data_size) {\n        int x = 1;\n        while (data_size\
    \ > (1 << x)) x++;\n        n = 1 << x;\n        d.resize(2 * n, e());\n    }\n\
    \n    void set(int idx, M x) {\n        idx += n;\n        d[idx] = x;\n     \
    \   while (idx >>= 1) d[idx] = op(d[2 * idx], d[2 * idx + 1]);\n    }\n\n    M\
    \ get(int idx) { return d[idx + n]; }\n\n    M operator[](int idx) { return get(idx);\
    \ }\n\n    M prod(int l, int r) {\n        M L = e(), R = e();\n        for (l\
    \ += n, r += n; l < r; l >>= 1, r >>= 1) {\n            if (l & 1) L = op(L, d[l++]);\n\
    \            if (r & 1) R = op(d[--r], R);\n        }\n        return op(L, R);\n\
    \    }\n\n    M all_prod() { return d[1]; }\n};\n#line 7 \"verify/segment-tree.test.cpp\"\
    \n\nint op(int a, int b) {\n    return min(a, b);\n}\n\nint e() {\n    return\
    \ (1 << 30) - 1 + (1 << 30);\n}\n\nint main() {\n    int n, q;\n    cin >> n >>\
    \ q;\n    segtree<int, op, e> seg(n);\n    while (q--) {\n        int t;\n   \
    \     cin >> t;\n        if (t == 0) {\n            int i, x;\n            cin\
    \ >> i >> x;\n            seg.set(i, x);\n        } else {\n            int l,\
    \ r;\n            cin >> l >> r;\n            cout << seg.prod(l, r + 1) << endl;\n\
    \        }\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A\"\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#include \"data-structure/segment-tree.hpp\"\
    \n\nint op(int a, int b) {\n    return min(a, b);\n}\n\nint e() {\n    return\
    \ (1 << 30) - 1 + (1 << 30);\n}\n\nint main() {\n    int n, q;\n    cin >> n >>\
    \ q;\n    segtree<int, op, e> seg(n);\n    while (q--) {\n        int t;\n   \
    \     cin >> t;\n        if (t == 0) {\n            int i, x;\n            cin\
    \ >> i >> x;\n            seg.set(i, x);\n        } else {\n            int l,\
    \ r;\n            cin >> l >> r;\n            cout << seg.prod(l, r + 1) << endl;\n\
    \        }\n    }\n    return 0;\n}"
  dependsOn:
  - data-structure/segment-tree.hpp
  isVerificationFile: true
  path: verify/segment-tree.test.cpp
  requiredBy: []
  timestamp: '2024-09-21 13:38:24+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/segment-tree.test.cpp
layout: document
redirect_from:
- /verify/verify/segment-tree.test.cpp
- /verify/verify/segment-tree.test.cpp.html
title: verify/segment-tree.test.cpp
---
