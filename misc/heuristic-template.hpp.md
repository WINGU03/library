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
    #else\n#undef dump\n#define dump(...)\n#endif\nclass TimeKeeperDouble {\n   private:\n\
    \    chrono::high_resolution_clock::time_point start_time_;\n    double time_threshold_;\n\
    \    double now_time_ = 0;\n   public:\n    TimeKeeperDouble(const double time_threshold)\
    \ : start_time_(chrono::high_resolution_clock::now()), time_threshold_(time_threshold)\
    \ {}\n    void setNowTime() {auto diff = chrono::high_resolution_clock::now()\
    \ - this->start_time_; this->now_time_ = chrono::duration_cast<chrono::microseconds>(diff).count()\
    \ * 1e-3;}\n    double getNowTime() const {return this->now_time_;}\n    bool\
    \ isTimeOver() const {return now_time_ >= time_threshold_;}\n};\nclass Random\
    \ {\n   public:\n    mt19937 mt;\n    uniform_real_distribution<double> dd_{0,\
    \ 1.0};\n    Random(): mt(chrono::steady_clock::now().time_since_epoch().count())\
    \ {}\n    inline int nextInt(const int l, const int r) {uniform_int_distribution<int>\
    \ di(l,r); return di(mt);} // l <= x <= r\n    inline double nextDouble() {return\
    \ dd_(mt);} // 0 < x < 1.0\n    inline double nextLog() {return log(dd_(mt));}\
    \ // 0 < x < 1.0 (log)\n};\nRandom rnd{};\n\n#define rep(i, a) for (int i = 0;\
    \ i < a; i++)\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n#include <atcoder/all>\n\
    using namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n\
    #define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n#define dump(...)\n\
    #endif\nclass TimeKeeperDouble {\n   private:\n    chrono::high_resolution_clock::time_point\
    \ start_time_;\n    double time_threshold_;\n    double now_time_ = 0;\n   public:\n\
    \    TimeKeeperDouble(const double time_threshold) : start_time_(chrono::high_resolution_clock::now()),\
    \ time_threshold_(time_threshold) {}\n    void setNowTime() {auto diff = chrono::high_resolution_clock::now()\
    \ - this->start_time_; this->now_time_ = chrono::duration_cast<chrono::microseconds>(diff).count()\
    \ * 1e-3;}\n    double getNowTime() const {return this->now_time_;}\n    bool\
    \ isTimeOver() const {return now_time_ >= time_threshold_;}\n};\nclass Random\
    \ {\n   public:\n    mt19937 mt;\n    uniform_real_distribution<double> dd_{0,\
    \ 1.0};\n    Random(): mt(chrono::steady_clock::now().time_since_epoch().count())\
    \ {}\n    inline int nextInt(const int l, const int r) {uniform_int_distribution<int>\
    \ di(l,r); return di(mt);} // l <= x <= r\n    inline double nextDouble() {return\
    \ dd_(mt);} // 0 < x < 1.0\n    inline double nextLog() {return log(dd_(mt));}\
    \ // 0 < x < 1.0 (log)\n};\nRandom rnd{};\n\n#define rep(i, a) for (int i = 0;\
    \ i < a; i++)"
  dependsOn: []
  isVerificationFile: false
  path: misc/heuristic-template.hpp
  requiredBy: []
  timestamp: '2024-09-15 17:22:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/heuristic-template.test.cpp
documentation_of: misc/heuristic-template.hpp
layout: document
title: Heuristic template
---
