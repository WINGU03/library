---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/cc.test.cpp
    title: verify/cc.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/combination.test.cpp
    title: verify/combination.test.cpp
  - icon: ':x:'
    path: verify/dynamic-bfs.test.cpp
    title: verify/dynamic-bfs.test.cpp
  - icon: ':x:'
    path: verify/enum-divisor.test.cpp
    title: verify/enum-divisor.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/eratosthenes.test.cpp
    title: verify/eratosthenes.test.cpp
  - icon: ':x:'
    path: verify/extgcd.test.cpp
    title: verify/extgcd.test.cpp
  - icon: ':x:'
    path: verify/mo.test.cpp
    title: verify/mo.test.cpp
  - icon: ':x:'
    path: verify/next-combination.test.cpp
    title: verify/next-combination.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/prime-factorize.test.cpp
    title: verify/prime-factorize.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/rerooting.test.cpp
    title: verify/rerooting.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/rolling-hash.test.cpp
    title: verify/rolling-hash.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/segment-tree-rolling-hash.test.cpp
    title: verify/segment-tree-rolling-hash.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: '#line 1 "template.hpp"

    #include <bits/stdc++.h>

    using namespace std;

    #include <atcoder/modint>

    using namespace atcoder;

    #ifdef DEFINED_ONLY_IN_LOCAL

    #include <dump.hpp>

    #define dump(...) cpp_dump(__VA_ARGS__)

    #else

    #undef dump

    #define dump(...)

    #endif

    #define rep(i, n) for (int i = 0; i < n; i++)

    template <class T> istream& operator>>(istream& I, vector<T>& V) { for (T& X :
    V) I >> X; return I; }

    '
  code: '#include <bits/stdc++.h>

    using namespace std;

    #include <atcoder/modint>

    using namespace atcoder;

    #ifdef DEFINED_ONLY_IN_LOCAL

    #include <dump.hpp>

    #define dump(...) cpp_dump(__VA_ARGS__)

    #else

    #undef dump

    #define dump(...)

    #endif

    #define rep(i, n) for (int i = 0; i < n; i++)

    template <class T> istream& operator>>(istream& I, vector<T>& V) { for (T& X :
    V) I >> X; return I; }'
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy: []
  timestamp: '2024-10-01 21:17:41+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - verify/dynamic-bfs.test.cpp
  - verify/segment-tree-rolling-hash.test.cpp
  - verify/combination.test.cpp
  - verify/cc.test.cpp
  - verify/prime-factorize.test.cpp
  - verify/rerooting.test.cpp
  - verify/enum-divisor.test.cpp
  - verify/next-combination.test.cpp
  - verify/eratosthenes.test.cpp
  - verify/mo.test.cpp
  - verify/rolling-hash.test.cpp
  - verify/extgcd.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
