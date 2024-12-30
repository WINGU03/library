---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/cc.test.cpp
    title: verify/cc.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/combination.test.cpp
    title: verify/combination.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/enum-divisor.test.cpp
    title: verify/enum-divisor.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/eratosthenes.test.cpp
    title: verify/eratosthenes.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/extgcd.test.cpp
    title: verify/extgcd.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/mo.test.cpp
    title: verify/mo.test.cpp
  - icon: ':heavy_check_mark:'
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
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 1 "template.hpp"

    #include <bits/stdc++.h>

    using namespace std;

    #ifdef local

    #include <debug.hpp>

    #else

    #define debug(...)

    #endif

    #define rep(i, n) for (int i = 0; i < n; i++)

    template <class T> istream& operator>>(istream& I, vector<T>& V) {for (T& X :
    V) I >> X; return I;}

    template <class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;}
    return false;}

    template <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;}
    return false;}

    vector<int> di = {-1, 1, 0, 0}, dj = {0, 0, -1, 1}; int inf = 2e9; long INF =
    1e18;

    '
  code: '#include <bits/stdc++.h>

    using namespace std;

    #ifdef local

    #include <debug.hpp>

    #else

    #define debug(...)

    #endif

    #define rep(i, n) for (int i = 0; i < n; i++)

    template <class T> istream& operator>>(istream& I, vector<T>& V) {for (T& X :
    V) I >> X; return I;}

    template <class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;}
    return false;}

    template <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;}
    return false;}

    vector<int> di = {-1, 1, 0, 0}, dj = {0, 0, -1, 1}; int inf = 2e9; long INF =
    1e18;'
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy: []
  timestamp: '2024-12-30 13:49:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/rolling-hash.test.cpp
  - verify/segment-tree-rolling-hash.test.cpp
  - verify/rerooting.test.cpp
  - verify/enum-divisor.test.cpp
  - verify/prime-factorize.test.cpp
  - verify/eratosthenes.test.cpp
  - verify/combination.test.cpp
  - verify/next-combination.test.cpp
  - verify/extgcd.test.cpp
  - verify/cc.test.cpp
  - verify/mo.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
