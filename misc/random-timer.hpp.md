---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"misc/random-timer.hpp\"\nclass TimeKeeperDouble {\n  private:\n\
    \    chrono::high_resolution_clock::time_point start_time_;\n    double time_threshold_;\n\
    \    double now_time_ = 0;\n\n  public:\n    TimeKeeperDouble(const double time_threshold)\
    \ : start_time_(chrono::high_resolution_clock::now()), time_threshold_(time_threshold)\
    \ {}\n    void setNowTime() {\n        auto diff = chrono::high_resolution_clock::now()\
    \ - this->start_time_;\n        this->now_time_ = chrono::duration_cast<chrono::microseconds>(diff).count()\
    \ * 1e-3;\n    }\n    double getNowTime() const { return this->now_time_; }\n\
    \    bool isTimeOver() const { return now_time_ >= time_threshold_; }\n};\nclass\
    \ Random {\n  public:\n    mt19937 mt;\n    uniform_real_distribution<double>\
    \ dd_{0, 1.0};\n    Random() : mt(chrono::steady_clock::now().time_since_epoch().count())\
    \ {}\n    inline int nextInt(const int l, const int r) {\n        uniform_int_distribution<int>\
    \ di(l, r);\n        return di(mt);\n    }  // l <= x <= r\n    inline double\
    \ nextDouble() { return dd_(mt); }    // 0 < x < 1.0\n    inline double nextLog()\
    \ { return log(dd_(mt)); }  // 0 < x < 1.0 (log)\n};\nRandom rnd{};\n"
  code: "class TimeKeeperDouble {\n  private:\n    chrono::high_resolution_clock::time_point\
    \ start_time_;\n    double time_threshold_;\n    double now_time_ = 0;\n\n  public:\n\
    \    TimeKeeperDouble(const double time_threshold) : start_time_(chrono::high_resolution_clock::now()),\
    \ time_threshold_(time_threshold) {}\n    void setNowTime() {\n        auto diff\
    \ = chrono::high_resolution_clock::now() - this->start_time_;\n        this->now_time_\
    \ = chrono::duration_cast<chrono::microseconds>(diff).count() * 1e-3;\n    }\n\
    \    double getNowTime() const { return this->now_time_; }\n    bool isTimeOver()\
    \ const { return now_time_ >= time_threshold_; }\n};\nclass Random {\n  public:\n\
    \    mt19937 mt;\n    uniform_real_distribution<double> dd_{0, 1.0};\n    Random()\
    \ : mt(chrono::steady_clock::now().time_since_epoch().count()) {}\n    inline\
    \ int nextInt(const int l, const int r) {\n        uniform_int_distribution<int>\
    \ di(l, r);\n        return di(mt);\n    }  // l <= x <= r\n    inline double\
    \ nextDouble() { return dd_(mt); }    // 0 < x < 1.0\n    inline double nextLog()\
    \ { return log(dd_(mt)); }  // 0 < x < 1.0 (log)\n};\nRandom rnd{};"
  dependsOn: []
  isVerificationFile: false
  path: misc/random-timer.hpp
  requiredBy: []
  timestamp: '2024-12-12 00:59:18+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: misc/random-timer.hpp
layout: document
redirect_from:
- /library/misc/random-timer.hpp
- /library/misc/random-timer.hpp.html
title: misc/random-timer.hpp
---
