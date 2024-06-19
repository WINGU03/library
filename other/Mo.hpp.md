---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/yosupo-mo1.test.cpp
    title: verify/yosupo-mo1.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/yosupo-mo2.test.cpp
    title: verify/yosupo-mo2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"other/Mo.hpp\"\ntemplate <class M>\nstruct Mo {\n    using\
    \ T = typename M::T;\n    int backet;\n    vector<int> left, right, order;\n \
    \   Mo(int N, int Q) {\n        order.resize(Q);\n        backet = max<int>(1,\
    \ (double)(N) / max<double>(1, sqrt(Q * 2.0 / 3)));\n        iota(order.begin(),\
    \ order.end(), 0);\n    }\n    void add_query(int lf, int ri) {\n        left.emplace_back(lf);\n\
    \        right.emplace_back(ri);\n    }\n    vector<T> run() {\n        vector<T>\
    \ answer(order.size());\n        sort(order.begin(), order.end(), [&](int a, int\
    \ b) {\n            int ab = left[a] / backet, bb = left[b] / backet;\n      \
    \      if (ab != bb) return ab < bb;\n            if (ab & 1) return right[a]\
    \ < right[b];\n            return right[a] > right[b];\n        });\n        int\
    \ nl = 0, nr = 0;\n        for (int i : order) {\n            while (nl > left[i])\
    \ {\n                M::add_left(--nl);\n            }\n            while (right[i]\
    \ > nr) {\n                M::add_right(nr++);\n            }\n            while\
    \ (nl < left[i]) {\n                M::del_left(nl++);\n            }\n      \
    \      while (right[i] < nr) {\n                M::del_right(--nr);\n        \
    \    }\n            answer[i] = M::res(i);\n        }\n        return answer;\n\
    \    }\n};\n"
  code: "template <class M>\nstruct Mo {\n    using T = typename M::T;\n    int backet;\n\
    \    vector<int> left, right, order;\n    Mo(int N, int Q) {\n        order.resize(Q);\n\
    \        backet = max<int>(1, (double)(N) / max<double>(1, sqrt(Q * 2.0 / 3)));\n\
    \        iota(order.begin(), order.end(), 0);\n    }\n    void add_query(int lf,\
    \ int ri) {\n        left.emplace_back(lf);\n        right.emplace_back(ri);\n\
    \    }\n    vector<T> run() {\n        vector<T> answer(order.size());\n     \
    \   sort(order.begin(), order.end(), [&](int a, int b) {\n            int ab =\
    \ left[a] / backet, bb = left[b] / backet;\n            if (ab != bb) return ab\
    \ < bb;\n            if (ab & 1) return right[a] < right[b];\n            return\
    \ right[a] > right[b];\n        });\n        int nl = 0, nr = 0;\n        for\
    \ (int i : order) {\n            while (nl > left[i]) {\n                M::add_left(--nl);\n\
    \            }\n            while (right[i] > nr) {\n                M::add_right(nr++);\n\
    \            }\n            while (nl < left[i]) {\n                M::del_left(nl++);\n\
    \            }\n            while (right[i] < nr) {\n                M::del_right(--nr);\n\
    \            }\n            answer[i] = M::res(i);\n        }\n        return\
    \ answer;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: other/Mo.hpp
  requiredBy: []
  timestamp: '2024-06-19 14:02:03+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/yosupo-mo1.test.cpp
  - verify/yosupo-mo2.test.cpp
documentation_of: other/Mo.hpp
layout: document
redirect_from:
- /library/other/Mo.hpp
- /library/other/Mo.hpp.html
title: other/Mo.hpp
---
