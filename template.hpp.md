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
    path: verify/dynamic-bfs.test.cpp
    title: verify/dynamic-bfs.test.cpp
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
  - icon: ':x:'
    path: verify/rolling-hash-tree.test.cpp
    title: verify/rolling-hash-tree.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/rolling-hash.test.cpp
    title: verify/rolling-hash.test.cpp
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

    #define rep1(a) for (int i = 0; i < a; i++)

    #define rep2(i, a) for (int i = 0; i < a; i++)

    #define rep3(i, a, b) for (int i = a; i < b; i++)

    #define rep4(i, a, b, c) for (int i = a; i < b; i += c)

    #define overloadRep(a, b, c, d, e, ...) e

    #define rep(...) overloadRep(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)

    #define all(a) a.begin(), a.end()

    #define rall(a) a.rbegin(), a.rend()

    #define endl ''\n''

    #define INT(...) int __VA_ARGS__; input(__VA_ARGS__)

    #define LL(...) ll __VA_ARGS__; input(__VA_ARGS__)

    using ll = long long;

    using ull = unsigned long long;

    const int inf = 1e9;

    const ll INF = 1e18;

    const int dx[4] = {0, 1, 0, -1};

    const int dy[4] = {1, 0, -1, 0};

    const int ddx[8] = {1, 0, -1, 0, 1, -1, 1, -1};

    const int ddy[8] = {0, 1, 0, -1, 1, -1, -1, 1};

    struct cincout {cincout() {ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cout << fixed << setprecision(15);}} init;

    template <class... T> void input(T&... a) {(cin >> ... >> a);}

    template <class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;}
    return false;}

    template <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;}
    return false;}

    template <class T1, class T2> istream& operator>>(istream& is, pair<T1, T2>& p)
    {is >> p.first >> p.second; return is;}

    template <class T1, class T2> ostream& operator<<(ostream& os, const pair<T1,
    T2>& p) {os << p.first << " " << p.second << ''\n''; return os;}

    template <class T> istream& operator>>(istream& is, vector<T>& v) {for (T& in
    : v) {is >> in;} return is;}

    template <class T> ostream& operator<<(ostream& os, const vector<T>& v) {rep(i,
    (int)v.size()) {os << v[i] << " \n"[i + 1 == (int)v.size()];} return os;}

    template <class T> istream& operator>>(istream& is, vector<vector<T>>& vv) {for
    (vector<T>& v : vv) {is >> v;} return is;}

    template <class T> ostream& operator<<(ostream& os, vector<vector<T>>& vv) {for
    (vector<T>& v : vv) {os << v;} return os;}

    template <class T> inline T max(vector<T> x) {return *max_element(x.begin(), x.end());}

    template <class T> inline T min(vector<T> x) {return *min_element(x.begin(), x.end());}

    template <class T> inline T sum(vector<T> x) {return reduce(x.begin(), x.end());}

    template <class... T> constexpr auto min(T... a) {return min(initializer_list<common_type_t<T...>>{a...});}

    template <class... T> constexpr auto max(T... a) {return max(initializer_list<common_type_t<T...>>{a...});}

    inline bool bit(ll x, int p) {return (x >> p) & 1;}

    inline bool out(int ni, int nj, int h, int w) {return (ni < 0 or ni >= h or nj
    < 0 or nj >= w);}

    inline int pc(ll x) {return __builtin_popcountll(x);}

    void Yes(bool judge = true) {cout << (judge ? "Yes" : "No") << endl;}

    void No(bool judge = true) {cout << (judge ? "No" : "Yes") << endl;}

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

    #define rep1(a) for (int i = 0; i < a; i++)

    #define rep2(i, a) for (int i = 0; i < a; i++)

    #define rep3(i, a, b) for (int i = a; i < b; i++)

    #define rep4(i, a, b, c) for (int i = a; i < b; i += c)

    #define overloadRep(a, b, c, d, e, ...) e

    #define rep(...) overloadRep(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)

    #define all(a) a.begin(), a.end()

    #define rall(a) a.rbegin(), a.rend()

    #define endl ''\n''

    #define INT(...) int __VA_ARGS__; input(__VA_ARGS__)

    #define LL(...) ll __VA_ARGS__; input(__VA_ARGS__)

    using ll = long long;

    using ull = unsigned long long;

    const int inf = 1e9;

    const ll INF = 1e18;

    const int dx[4] = {0, 1, 0, -1};

    const int dy[4] = {1, 0, -1, 0};

    const int ddx[8] = {1, 0, -1, 0, 1, -1, 1, -1};

    const int ddy[8] = {0, 1, 0, -1, 1, -1, -1, 1};

    struct cincout {cincout() {ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cout << fixed << setprecision(15);}} init;

    template <class... T> void input(T&... a) {(cin >> ... >> a);}

    template <class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;}
    return false;}

    template <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;}
    return false;}

    template <class T1, class T2> istream& operator>>(istream& is, pair<T1, T2>& p)
    {is >> p.first >> p.second; return is;}

    template <class T1, class T2> ostream& operator<<(ostream& os, const pair<T1,
    T2>& p) {os << p.first << " " << p.second << ''\n''; return os;}

    template <class T> istream& operator>>(istream& is, vector<T>& v) {for (T& in
    : v) {is >> in;} return is;}

    template <class T> ostream& operator<<(ostream& os, const vector<T>& v) {rep(i,
    (int)v.size()) {os << v[i] << " \n"[i + 1 == (int)v.size()];} return os;}

    template <class T> istream& operator>>(istream& is, vector<vector<T>>& vv) {for
    (vector<T>& v : vv) {is >> v;} return is;}

    template <class T> ostream& operator<<(ostream& os, vector<vector<T>>& vv) {for
    (vector<T>& v : vv) {os << v;} return os;}

    template <class T> inline T max(vector<T> x) {return *max_element(x.begin(), x.end());}

    template <class T> inline T min(vector<T> x) {return *min_element(x.begin(), x.end());}

    template <class T> inline T sum(vector<T> x) {return reduce(x.begin(), x.end());}

    template <class... T> constexpr auto min(T... a) {return min(initializer_list<common_type_t<T...>>{a...});}

    template <class... T> constexpr auto max(T... a) {return max(initializer_list<common_type_t<T...>>{a...});}

    inline bool bit(ll x, int p) {return (x >> p) & 1;}

    inline bool out(int ni, int nj, int h, int w) {return (ni < 0 or ni >= h or nj
    < 0 or nj >= w);}

    inline int pc(ll x) {return __builtin_popcountll(x);}

    void Yes(bool judge = true) {cout << (judge ? "Yes" : "No") << endl;}

    void No(bool judge = true) {cout << (judge ? "No" : "Yes") << endl;}'
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy: []
  timestamp: '2024-09-14 18:40:33+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - verify/dynamic-bfs.test.cpp
  - verify/combination.test.cpp
  - verify/cc.test.cpp
  - verify/prime-factorize.test.cpp
  - verify/rerooting.test.cpp
  - verify/enum-divisor.test.cpp
  - verify/next-combination.test.cpp
  - verify/eratosthenes.test.cpp
  - verify/rolling-hash-tree.test.cpp
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
