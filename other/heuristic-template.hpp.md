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
  bundledCode: "#line 1 \"other/heuristic-template.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\nusing namespace chrono;\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\ntemplate<class T>inline bool chmax(T &a,T b){if(a<b){a=b;return\
    \ true;}return false;}\ntemplate<class T>inline bool chmin(T &a,T b){if(a>b){a=b;return\
    \ true;}return false;}\n#define rep1(i,a) for(int i=0;i<(int)(a);i++)\n#define\
    \ rep2(i,a,b) for(int i =(int)(a);i<(int)(b);i++)\n#define rep3(i,a,b,c) for(int\
    \ i=(int)(a);i<(int)(b);i+=(int)(c))\n#define overloadRep(a,b,c,d,e,...)e\n#define\
    \ rep(...) overloadRep(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)\n#define rrep(i,a,b)\
    \ for(int i=(int)(a);i<=(int)(b);i++)\n#define drep(i,a,b) for(int i=(int)(a);i>=(int)(b);i--)\n\
    #define all(a) a.begin(),a.end()\n#define rall(a) a.rbegin(),a.rend()\nconst int\
    \ inf=1e9;\nconst long INF=1e18;\nconst int dx[4]={0,1,0,-1};\nconst int dy[4]={1,0,-1,0};\n\
    bool bit(long x, int p){return (x>>p)&1;}\nbool out(int ni, int nj, int h, int\
    \ w){return (ni<0 or ni>=h or nj<0 or nj>=w);}\nint pc(long x){return __builtin_popcountl(x);}\n\
    class Random {\n   public:\n    mt19937 mt;\n    uniform_real_distribution<double>\
    \ dd_{0, 1.0};\n    Random(const int seed = 0): mt(mt19937(seed)) {}\n    inline\
    \ int nextInt(const int l,const int r) {uniform_int_distribution<int> di(l,r);return\
    \ di(mt);}\n    inline double nextDouble() {return dd_(mt);}\n    inline double\
    \ nextLog() {return log(dd_(mt));}\n};\nRandom rnd{};\nusing time_data = high_resolution_clock::time_point;\n\
    #define now_time high_resolution_clock::now()\n#define change_mil(a) duration_cast<milliseconds>(a).count()\n\
    #define change_mic(a) duration_cast<microseconds>(a).count()\nclass TimeKeeperDouble\
    \ {\n   private:\n    time_data start_time_;\n    double time_threshold_;\n  \
    \  double now_time_ = 0;\n   public:\n    TimeKeeperDouble(const double time_threshold):\
    \ start_time_(now_time), time_threshold_(time_threshold) {}\n    void setNowTime()\
    \ {auto diff = now_time - this->start_time_;this->now_time_ = change_mic(diff)\
    \ * 1e-3;}\n    double getNowTime() const {return this->now_time_;}\n    bool\
    \ isTimeOver() const {return now_time_ >= time_threshold_;}\n};\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\nusing namespace chrono;\n\
    #ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n\
    #else\n#undef dump\n#define dump(...)\n#endif\ntemplate<class T>inline bool chmax(T\
    \ &a,T b){if(a<b){a=b;return true;}return false;}\ntemplate<class T>inline bool\
    \ chmin(T &a,T b){if(a>b){a=b;return true;}return false;}\n#define rep1(i,a) for(int\
    \ i=0;i<(int)(a);i++)\n#define rep2(i,a,b) for(int i =(int)(a);i<(int)(b);i++)\n\
    #define rep3(i,a,b,c) for(int i=(int)(a);i<(int)(b);i+=(int)(c))\n#define overloadRep(a,b,c,d,e,...)e\n\
    #define rep(...) overloadRep(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)\n#define\
    \ rrep(i,a,b) for(int i=(int)(a);i<=(int)(b);i++)\n#define drep(i,a,b) for(int\
    \ i=(int)(a);i>=(int)(b);i--)\n#define all(a) a.begin(),a.end()\n#define rall(a)\
    \ a.rbegin(),a.rend()\nconst int inf=1e9;\nconst long INF=1e18;\nconst int dx[4]={0,1,0,-1};\n\
    const int dy[4]={1,0,-1,0};\nbool bit(long x, int p){return (x>>p)&1;}\nbool out(int\
    \ ni, int nj, int h, int w){return (ni<0 or ni>=h or nj<0 or nj>=w);}\nint pc(long\
    \ x){return __builtin_popcountl(x);}\nclass Random {\n   public:\n    mt19937\
    \ mt;\n    uniform_real_distribution<double> dd_{0, 1.0};\n    Random(const int\
    \ seed = 0): mt(mt19937(seed)) {}\n    inline int nextInt(const int l,const int\
    \ r) {uniform_int_distribution<int> di(l,r);return di(mt);}\n    inline double\
    \ nextDouble() {return dd_(mt);}\n    inline double nextLog() {return log(dd_(mt));}\n\
    };\nRandom rnd{};\nusing time_data = high_resolution_clock::time_point;\n#define\
    \ now_time high_resolution_clock::now()\n#define change_mil(a) duration_cast<milliseconds>(a).count()\n\
    #define change_mic(a) duration_cast<microseconds>(a).count()\nclass TimeKeeperDouble\
    \ {\n   private:\n    time_data start_time_;\n    double time_threshold_;\n  \
    \  double now_time_ = 0;\n   public:\n    TimeKeeperDouble(const double time_threshold):\
    \ start_time_(now_time), time_threshold_(time_threshold) {}\n    void setNowTime()\
    \ {auto diff = now_time - this->start_time_;this->now_time_ = change_mic(diff)\
    \ * 1e-3;}\n    double getNowTime() const {return this->now_time_;}\n    bool\
    \ isTimeOver() const {return now_time_ >= time_threshold_;}\n};"
  dependsOn: []
  isVerificationFile: false
  path: other/heuristic-template.hpp
  requiredBy: []
  timestamp: '2024-06-10 17:44:10+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/heuristic-template.test.cpp
documentation_of: other/heuristic-template.hpp
layout: document
redirect_from:
- /library/other/heuristic-template.hpp
- /library/other/heuristic-template.hpp.html
title: other/heuristic-template.hpp
---
