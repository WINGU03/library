---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/next-combination.test.cpp
    title: verify/next-combination.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"misc/next-combination.hpp\"\ntemplate <typename T>\nbool\
    \ next_combination(const T first, const T last, int k) {\n    const T subset =\
    \ first + k;\n    if (first == last || first == subset || last == subset) {\n\
    \        return false;\n    }\n    T src = subset;\n    while (first != src) {\n\
    \        src--;\n        if (*src < *(last - 1)) {\n            T dest = subset;\n\
    \            while (*src >= *dest) {\n                dest++;\n            }\n\
    \            iter_swap(src, dest);\n            rotate(src + 1, dest + 1, last);\n\
    \            rotate(subset, subset + (last - dest) - 1, last);\n            return\
    \ true;\n        }\n    }\n    rotate(first, subset, last);\n    return false;\n\
    }\n"
  code: "template <typename T>\nbool next_combination(const T first, const T last,\
    \ int k) {\n    const T subset = first + k;\n    if (first == last || first ==\
    \ subset || last == subset) {\n        return false;\n    }\n    T src = subset;\n\
    \    while (first != src) {\n        src--;\n        if (*src < *(last - 1)) {\n\
    \            T dest = subset;\n            while (*src >= *dest) {\n         \
    \       dest++;\n            }\n            iter_swap(src, dest);\n          \
    \  rotate(src + 1, dest + 1, last);\n            rotate(subset, subset + (last\
    \ - dest) - 1, last);\n            return true;\n        }\n    }\n    rotate(first,\
    \ subset, last);\n    return false;\n}"
  dependsOn: []
  isVerificationFile: false
  path: misc/next-combination.hpp
  requiredBy: []
  timestamp: '2024-06-19 21:24:21+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/next-combination.test.cpp
documentation_of: misc/next-combination.hpp
layout: document
title: Next combination
---
