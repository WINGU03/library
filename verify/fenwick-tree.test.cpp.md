---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structure/fenwick-tree.hpp
    title: Fenwick Tree
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B
  bundledCode: "#line 1 \"verify/fenwick-tree.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 1 \"data-structure/fenwick-tree.hpp\"\
    \ntemplate <class T>\nstruct fenwick_tree {\n    int n;\n    vector<T> d;\n  \
    \  fenwick_tree(int n) : n(n) {\n        d.resize(n);\n    }\n\n    T sum(int\
    \ r) {\n        T s = 0;\n        for (; r > 0; r -= r & -r) s += d[r - 1];\n\
    \        return s;\n    }\n\n    T sum(int l, int r) { return sum(r) - sum(l);\
    \ }\n\n    void add(int idx, T x) {\n        for (idx++; idx <= n; idx += idx\
    \ & -idx) d[idx - 1] += x;\n    }\n};\n#line 7 \"verify/fenwick-tree.test.cpp\"\
    \n\nint main() {\n    int n, q;\n    cin >> n >> q;\n    fenwick_tree<int> f(n);\n\
    \    while (q--) {\n        int t;\n        cin >> t;\n        if (t == 0) {\n\
    \            int i, x;\n            cin >> i >> x;\n            f.add(i - 1, x);\n\
    \        } else {\n            int l, r;\n            cin >> l >> r;\n       \
    \     cout << f.sum(l - 1, r) << endl;\n        }\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#include \"data-structure/fenwick-tree.hpp\"\
    \n\nint main() {\n    int n, q;\n    cin >> n >> q;\n    fenwick_tree<int> f(n);\n\
    \    while (q--) {\n        int t;\n        cin >> t;\n        if (t == 0) {\n\
    \            int i, x;\n            cin >> i >> x;\n            f.add(i - 1, x);\n\
    \        } else {\n            int l, r;\n            cin >> l >> r;\n       \
    \     cout << f.sum(l - 1, r) << endl;\n        }\n    }\n    return 0;\n}\n"
  dependsOn:
  - data-structure/fenwick-tree.hpp
  isVerificationFile: true
  path: verify/fenwick-tree.test.cpp
  requiredBy: []
  timestamp: '2024-09-21 13:38:24+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/fenwick-tree.test.cpp
layout: document
redirect_from:
- /verify/verify/fenwick-tree.test.cpp
- /verify/verify/fenwick-tree.test.cpp.html
title: verify/fenwick-tree.test.cpp
---
