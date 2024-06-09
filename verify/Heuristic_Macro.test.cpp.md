---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/Heuristic_Macro.cpp
    title: other/Heuristic_Macro.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B
  bundledCode: "#line 1 \"verify/Heuristic_Macro.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"other/Heuristic_Macro.cpp\"\nusing namespace\
    \ std;\nusing namespace chrono;\n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n\
    #define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n#define dump(...)\n\
    #endif\ntemplate<class T>inline bool chmax(T &a,T b){if(a<b){a=b;return true;}return\
    \ false;}\ntemplate<class T>inline bool chmin(T &a,T b){if(a>b){a=b;return true;}return\
    \ false;}\n#define rep1(i,a) for(int i=0;i<(int)(a);i++)\n#define rep2(i,a,b)\
    \ for(int i =(int)(a);i<(int)(b);i++)\n#define rep3(i,a,b,c) for(int i=(int)(a);i<(int)(b);i+=(int)(c))\n\
    #define overloadRep(a,b,c,d,e,...)e\n#define rep(...) overloadRep(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)\n\
    #define rrep(i,a,b) for(int i=(int)(a);i<=(int)(b);i++)\n#define drep(i,a,b) for(int\
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
    \ isTimeOver() const {return now_time_ >= time_threshold_;}\n};\n#line 5 \"verify/Heuristic_Macro.test.cpp\"\
    \n\nint main() {\n    int n = 3;\n    vector a(n, vector<int>(3));\n    rep(i,\
    \ n) rep(j, n) cin >> a[i][j];\n\n    vector<vector<int>> ans = {{1, 2, 3}, {4,\
    \ 5, 6}, {7, 8, 0}};\n\n    if (ans == a) {\n        cout << 0 << endl;\n    \
    \    return 0;\n    }\n\n    map<vector<vector<int>>, int> dist;\n    map<vector<vector<int>>,\
    \ bool> used;\n    queue<vector<vector<int>>> q;\n    used[a] = true;\n    q.push(a);\n\
    \    while (q.size()) {\n        auto cur = q.front();\n        q.pop();\n   \
    \     rep(i, 3) rep(j, 3) if (cur[i][j] == 0) {\n            rep(d, 4) {\n   \
    \             int ni = i + dx[d], nj = j + dy[d];\n                if (ni < 0\
    \ or ni >= n or nj < 0 or nj >= n) continue;\n                auto nex = cur;\n\
    \                swap(nex[ni][nj], nex[i][j]);\n                if (nex == ans)\
    \ {\n                    cout << dist[cur] + 1 << endl;\n                    return\
    \ 0;\n                }\n                if (used[nex]) continue;\n          \
    \      dist[nex] = dist[cur] + 1;\n                used[nex] = true;\n       \
    \         q.push(nex);\n            }\n        }\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B\"\
    \n\n#include <bits/stdc++.h>\n#include \"other/Heuristic_Macro\"\n\nint main()\
    \ {\n    int n = 3;\n    vector a(n, vector<int>(3));\n    rep(i, n) rep(j, n)\
    \ cin >> a[i][j];\n\n    vector<vector<int>> ans = {{1, 2, 3}, {4, 5, 6}, {7,\
    \ 8, 0}};\n\n    if (ans == a) {\n        cout << 0 << endl;\n        return 0;\n\
    \    }\n\n    map<vector<vector<int>>, int> dist;\n    map<vector<vector<int>>,\
    \ bool> used;\n    queue<vector<vector<int>>> q;\n    used[a] = true;\n    q.push(a);\n\
    \    while (q.size()) {\n        auto cur = q.front();\n        q.pop();\n   \
    \     rep(i, 3) rep(j, 3) if (cur[i][j] == 0) {\n            rep(d, 4) {\n   \
    \             int ni = i + dx[d], nj = j + dy[d];\n                if (ni < 0\
    \ or ni >= n or nj < 0 or nj >= n) continue;\n                auto nex = cur;\n\
    \                swap(nex[ni][nj], nex[i][j]);\n                if (nex == ans)\
    \ {\n                    cout << dist[cur] + 1 << endl;\n                    return\
    \ 0;\n                }\n                if (used[nex]) continue;\n          \
    \      dist[nex] = dist[cur] + 1;\n                used[nex] = true;\n       \
    \         q.push(nex);\n            }\n        }\n    }\n    return 0;\n}"
  dependsOn:
  - other/Heuristic_Macro.cpp
  isVerificationFile: true
  path: verify/Heuristic_Macro.test.cpp
  requiredBy: []
  timestamp: '2024-06-10 00:15:14+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/Heuristic_Macro.test.cpp
layout: document
redirect_from:
- /verify/verify/Heuristic_Macro.test.cpp
- /verify/verify/Heuristic_Macro.test.cpp.html
title: verify/Heuristic_Macro.test.cpp
---
