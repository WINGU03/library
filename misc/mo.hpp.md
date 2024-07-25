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
  bundledCode: "#line 1 \"misc/mo.hpp\"\ntemplate <class M>\nstruct Mo {\n    using\
    \ T = typename M::T;\n    int backet;\n    vector<int> left, right, order;\n \
    \   Mo(int N, int Q) {\n        order.resize(Q);\n        backet = max<int>(1,\
    \ (double)(N) / max<double>(1, sqrt(Q * 2.0 / 3)));\n        iota(order.begin(),\
    \ order.end(), 0);\n    }\n    void add_query(int left_id, int right_id) {\n \
    \       left.emplace_back(left_id);\n        right.emplace_back(right_id);\n \
    \   }\n    vector<T> run() {\n        vector<T> answer(order.size());\n      \
    \  sort(order.begin(), order.end(), [&](int a, int b) {\n            int a_block\
    \ = left[a] / backet, b_block = left[b] / backet;\n            if (a_block !=\
    \ b_block) return a_block < b_block;\n            if (a_block & 1) return right[a]\
    \ < right[b];\n            return right[a] > right[b];\n        });\n        int\
    \ now_left = 0, now_right = 0;\n        for (int i : order) {\n            while\
    \ (now_left > left[i]) {\n                M::add_left(--now_left);\n         \
    \   }\n            while (right[i] > now_right) {\n                M::add_right(now_right++);\n\
    \            }\n            while (now_left < left[i]) {\n                M::del_left(now_left++);\n\
    \            }\n            while (right[i] < now_right) {\n                M::del_right(--now_right);\n\
    \            }\n            answer[i] = M::res(i);\n        }\n        return\
    \ answer;\n    }\n};\n"
  code: "template <class M>\nstruct Mo {\n    using T = typename M::T;\n    int backet;\n\
    \    vector<int> left, right, order;\n    Mo(int N, int Q) {\n        order.resize(Q);\n\
    \        backet = max<int>(1, (double)(N) / max<double>(1, sqrt(Q * 2.0 / 3)));\n\
    \        iota(order.begin(), order.end(), 0);\n    }\n    void add_query(int left_id,\
    \ int right_id) {\n        left.emplace_back(left_id);\n        right.emplace_back(right_id);\n\
    \    }\n    vector<T> run() {\n        vector<T> answer(order.size());\n     \
    \   sort(order.begin(), order.end(), [&](int a, int b) {\n            int a_block\
    \ = left[a] / backet, b_block = left[b] / backet;\n            if (a_block !=\
    \ b_block) return a_block < b_block;\n            if (a_block & 1) return right[a]\
    \ < right[b];\n            return right[a] > right[b];\n        });\n        int\
    \ now_left = 0, now_right = 0;\n        for (int i : order) {\n            while\
    \ (now_left > left[i]) {\n                M::add_left(--now_left);\n         \
    \   }\n            while (right[i] > now_right) {\n                M::add_right(now_right++);\n\
    \            }\n            while (now_left < left[i]) {\n                M::del_left(now_left++);\n\
    \            }\n            while (right[i] < now_right) {\n                M::del_right(--now_right);\n\
    \            }\n            answer[i] = M::res(i);\n        }\n        return\
    \ answer;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: misc/mo.hpp
  requiredBy: []
  timestamp: '2024-06-22 09:18:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/yosupo-mo2.test.cpp
  - verify/yosupo-mo1.test.cpp
documentation_of: misc/mo.hpp
layout: document
title: "Mo\u2019s algorithm"
---

# コンストラクタ

```cpp

struct M {
    using T = ;
    static void add_left(int pos) {
        
    }
    static void add_right(int pos) {
        
    }
    static void del_left(int pos) {
        
    }
    static void del_right(int pos) {
        
    }
    static T res(int i) {

    }
};

Mo<M> mo(N, Q);

```