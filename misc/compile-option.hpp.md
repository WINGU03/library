---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/compile-option.test.cpp
    title: verify/compile-option.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 1 "misc/compile-option.hpp"

    #pragma GCC target("avx2")

    #pragma GCC optimize("O3")

    #pragma GCC optimize("unroll-loops")

    '
  code: '#pragma GCC target("avx2")

    #pragma GCC optimize("O3")

    #pragma GCC optimize("unroll-loops")'
  dependsOn: []
  isVerificationFile: false
  path: misc/compile-option.hpp
  requiredBy: []
  timestamp: '2024-06-19 21:24:21+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/compile-option.test.cpp
documentation_of: misc/compile-option.hpp
layout: document
title: "\u30B3\u30F3\u30D1\u30A4\u30EB\u30AA\u30D7\u30B7\u30E7\u30F3"
---
