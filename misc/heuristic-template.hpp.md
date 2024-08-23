---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/heuristic-template.test.cpp
    title: verify/heuristic-template.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"misc/heuristic-template.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n#include <atcoder/all>\nusing namespace atcoder;\n#ifdef\
    \ DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n\
    #else\n#undef dump\n#define dump(...)\n#endif\n#define rep1(i, a) for (int i =\
    \ 0; i < (int)(a); i++)\n#define rep2(i, a, b) for (int i = (int)(a); i < (int)(b);\
    \ i++)\n#define rep3(i, a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))\n\
    #define overloadRep(a, b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__,\
    \ rep3, rep2, rep1)(__VA_ARGS__)\n#define all(a) a.begin(), a.end()\n#define rall(a)\
    \ a.rbegin(), a.rend()\nusing ll = long long;\nusing ull = unsigned long long;\n\
    const int inf = 1e9;\nconst ll INF = 1e18;\nconst int dx[4] = {0, 1, 0, -1};\n\
    const int dy[4] = {1, 0, -1, 0};\nconst int ddx[8] = {1, 0, -1, 0, 1, -1, 1, -1};\n\
    const int ddy[8] = {0, 1, 0, -1, 1, -1, -1, 1};\ntemplate <class T> inline bool\
    \ chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}\ntemplate\
    \ <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return\
    \ false;}\ntemplate <class T1, class T2> istream& operator>>(istream& is, pair<T1,\
    \ T2>& p) {is >> p.first >> p.second; return is;}\ntemplate <class T1, class T2>\
    \ ostream& operator<<(ostream& os, const pair<T1, T2>& p) {os << p.first << \"\
    \ \" << p.second << '\\n'; return os;}\ntemplate <class T> istream& operator>>(istream&\
    \ is, vector<T>& v) {for (T& in : v) {is >> in;} return is;}\ntemplate <class\
    \ T> ostream& operator<<(ostream& os, const vector<T>& v) {rep(i, (int)v.size())\
    \ {os << v[i] << \" \\n\"[i + 1 == (int)v.size()];} return os;}\ntemplate <class\
    \ T> istream& operator>>(istream& is, vector<vector<T>>& vv) {for (vector<T>&\
    \ v : vv) {is >> v;} return is;}\ntemplate <class T> ostream& operator<<(ostream&\
    \ os, vector<vector<T>>& vv) {for (vector<T>& v : vv) {os << v;} return os;}\n\
    inline bool bit(ll x, int p) {return (x >> p) & 1;}\ninline bool out(int ni, int\
    \ nj, int h, int w) {return (ni < 0 or ni >= h or nj < 0 or nj >= w);}\ninline\
    \ int pc(ll x) {return __builtin_popcountll(x);}\ntemplate <class T> inline T\
    \ max(vector<T> x) {return *max_element(x.begin(), x.end());}\ntemplate <class\
    \ T> inline T min(vector<T> x) {return *min_element(x.begin(), x.end());}\ntemplate\
    \ <class T> inline T sum(vector<T> x) {return reduce(x.begin(), x.end());}\nclass\
    \ Random {\n   public:\n    mt19937 mt;\n    uniform_real_distribution<double>\
    \ dd_{0, 1.0};\n    Random(const int seed = 0): mt(mt19937(seed)) {}\n    inline\
    \ int nextInt(const int l,const int r) {uniform_int_distribution<int> di(l,r);return\
    \ di(mt);}\n    inline double nextDouble() {return dd_(mt);}\n    inline double\
    \ nextLog() {return log(dd_(mt));}\n};\nRandom rnd{};\nusing namespace chrono;\n\
    using time_data = high_resolution_clock::time_point;\n#define now_time high_resolution_clock::now()\n\
    #define change_mil(a) duration_cast<milliseconds>(a).count()\n#define change_mic(a)\
    \ duration_cast<microseconds>(a).count()\nclass TimeKeeperDouble {\n   private:\n\
    \    time_data start_time_;\n    double time_threshold_;\n    double now_time_\
    \ = 0;\n   public:\n    TimeKeeperDouble(const double time_threshold): start_time_(now_time),\
    \ time_threshold_(time_threshold) {}\n    void setNowTime() {auto diff = now_time\
    \ - this->start_time_;this->now_time_ = change_mic(diff) * 1e-3;}\n    double\
    \ getNowTime() const {return this->now_time_;}\n    bool isTimeOver() const {return\
    \ now_time_ >= time_threshold_;}\n};\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n#include <atcoder/all>\n\
    using namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n\
    #define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n#define dump(...)\n\
    #endif\n#define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n#define rep2(i,\
    \ a, b) for (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i, a, b, c) for\
    \ (int i = (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a, b, c,\
    \ d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define all(a) a.begin(), a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing\
    \ ll = long long;\nusing ull = unsigned long long;\nconst int inf = 1e9;\nconst\
    \ ll INF = 1e18;\nconst int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1,\
    \ 0};\nconst int ddx[8] = {1, 0, -1, 0, 1, -1, 1, -1};\nconst int ddy[8] = {0,\
    \ 1, 0, -1, 1, -1, -1, 1};\ntemplate <class T> inline bool chmax(T& a, T b) {if\
    \ (a < b) {a = b; return true;} return false;}\ntemplate <class T> inline bool\
    \ chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}\ntemplate\
    \ <class T1, class T2> istream& operator>>(istream& is, pair<T1, T2>& p) {is >>\
    \ p.first >> p.second; return is;}\ntemplate <class T1, class T2> ostream& operator<<(ostream&\
    \ os, const pair<T1, T2>& p) {os << p.first << \" \" << p.second << '\\n'; return\
    \ os;}\ntemplate <class T> istream& operator>>(istream& is, vector<T>& v) {for\
    \ (T& in : v) {is >> in;} return is;}\ntemplate <class T> ostream& operator<<(ostream&\
    \ os, const vector<T>& v) {rep(i, (int)v.size()) {os << v[i] << \" \\n\"[i + 1\
    \ == (int)v.size()];} return os;}\ntemplate <class T> istream& operator>>(istream&\
    \ is, vector<vector<T>>& vv) {for (vector<T>& v : vv) {is >> v;} return is;}\n\
    template <class T> ostream& operator<<(ostream& os, vector<vector<T>>& vv) {for\
    \ (vector<T>& v : vv) {os << v;} return os;}\ninline bool bit(ll x, int p) {return\
    \ (x >> p) & 1;}\ninline bool out(int ni, int nj, int h, int w) {return (ni <\
    \ 0 or ni >= h or nj < 0 or nj >= w);}\ninline int pc(ll x) {return __builtin_popcountll(x);}\n\
    template <class T> inline T max(vector<T> x) {return *max_element(x.begin(), x.end());}\n\
    template <class T> inline T min(vector<T> x) {return *min_element(x.begin(), x.end());}\n\
    template <class T> inline T sum(vector<T> x) {return reduce(x.begin(), x.end());}\n\
    class Random {\n   public:\n    mt19937 mt;\n    uniform_real_distribution<double>\
    \ dd_{0, 1.0};\n    Random(const int seed = 0): mt(mt19937(seed)) {}\n    inline\
    \ int nextInt(const int l,const int r) {uniform_int_distribution<int> di(l,r);return\
    \ di(mt);}\n    inline double nextDouble() {return dd_(mt);}\n    inline double\
    \ nextLog() {return log(dd_(mt));}\n};\nRandom rnd{};\nusing namespace chrono;\n\
    using time_data = high_resolution_clock::time_point;\n#define now_time high_resolution_clock::now()\n\
    #define change_mil(a) duration_cast<milliseconds>(a).count()\n#define change_mic(a)\
    \ duration_cast<microseconds>(a).count()\nclass TimeKeeperDouble {\n   private:\n\
    \    time_data start_time_;\n    double time_threshold_;\n    double now_time_\
    \ = 0;\n   public:\n    TimeKeeperDouble(const double time_threshold): start_time_(now_time),\
    \ time_threshold_(time_threshold) {}\n    void setNowTime() {auto diff = now_time\
    \ - this->start_time_;this->now_time_ = change_mic(diff) * 1e-3;}\n    double\
    \ getNowTime() const {return this->now_time_;}\n    bool isTimeOver() const {return\
    \ now_time_ >= time_threshold_;}\n};"
  dependsOn: []
  isVerificationFile: false
  path: misc/heuristic-template.hpp
  requiredBy: []
  timestamp: '2024-08-23 17:22:06+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/heuristic-template.test.cpp
documentation_of: misc/heuristic-template.hpp
layout: document
title: Heuristic template
---
