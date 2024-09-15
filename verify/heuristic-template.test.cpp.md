---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: misc/heuristic-template.hpp
    title: Heuristic template
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B
  bundledCode: "#line 1 \"verify/heuristic-template.test.cpp\"\n#define PROBLEM \"\
    https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B\"\n\n#include\
    \ <bits/stdc++.h>\n#line 2 \"misc/heuristic-template.hpp\"\nusing namespace std;\n\
    #include <atcoder/all>\nusing namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\nclass TimeKeeperDouble {\n   private:\n    chrono::high_resolution_clock::time_point\
    \ start_time_;\n    double time_threshold_;\n    double now_time_ = 0;\n   public:\n\
    \    TimeKeeperDouble(const double time_threshold) : start_time_(chrono::high_resolution_clock::now()),\
    \ time_threshold_(time_threshold) {}\n    void setNowTime() {auto diff = chrono::high_resolution_clock::now()\
    \ - this->start_time_; this->now_time_ = chrono::duration_cast<chrono::microseconds>(diff).count()\
    \ * 1e-3;}\n    double getNowTime() const {return this->now_time_;}\n    bool\
    \ isTimeOver() const {return now_time_ >= time_threshold_;}\n};\nclass Random\
    \ {\n   public:\n    mt19937 mt;\n    uniform_real_distribution<double> dd_{0,\
    \ 1.0};\n    Random(const int seed = 0): mt(mt19937(seed)) {}\n    inline int\
    \ nextInt(const int l,const int r) {uniform_int_distribution<int> di(l,r); return\
    \ di(mt);} // l <= x <= r\n    inline double nextDouble() {return dd_(mt);} //\
    \ 0 < x < 1.0\n    inline double nextLog() {return log(dd_(mt));} // 0 < x < 1.0\
    \ (log)\n};\nRandom rnd{};\n\n#define rep(i, a) for (int i = 0; i < a; i++)\n\
    #line 5 \"verify/heuristic-template.test.cpp\"\n\nint main() {\n    int n = 3;\n\
    \    vector a(n, vector<int>(3));\n    rep(i, n) rep(j, n) cin >> a[i][j];\n\n\
    \    vector<vector<int>> ans = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};\n\n    if (ans\
    \ == a) {\n        cout << 0 << endl;\n        return 0;\n    }\n\n    map<vector<vector<int>>,\
    \ int> dist;\n    map<vector<vector<int>>, bool> used;\n    queue<vector<vector<int>>>\
    \ q;\n    used[a] = true;\n    q.push(a);\n    while (q.size()) {\n        auto\
    \ cur = q.front();\n        q.pop();\n        rep(i, 3) rep(j, 3) if (cur[i][j]\
    \ == 0) {\n            rep(d, 4) {\n                int ni = i + dx[d], nj = j\
    \ + dy[d];\n                if (ni < 0 or ni >= n or nj < 0 or nj >= n) continue;\n\
    \                auto nex = cur;\n                swap(nex[ni][nj], nex[i][j]);\n\
    \                if (nex == ans) {\n                    cout << dist[cur] + 1\
    \ << endl;\n                    return 0;\n                }\n               \
    \ if (used[nex]) continue;\n                dist[nex] = dist[cur] + 1;\n     \
    \           used[nex] = true;\n                q.push(nex);\n            }\n \
    \       }\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B\"\
    \n\n#include <bits/stdc++.h>\n#include \"misc/heuristic-template.hpp\"\n\nint\
    \ main() {\n    int n = 3;\n    vector a(n, vector<int>(3));\n    rep(i, n) rep(j,\
    \ n) cin >> a[i][j];\n\n    vector<vector<int>> ans = {{1, 2, 3}, {4, 5, 6}, {7,\
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
  - misc/heuristic-template.hpp
  isVerificationFile: true
  path: verify/heuristic-template.test.cpp
  requiredBy: []
  timestamp: '2024-09-15 16:59:39+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/heuristic-template.test.cpp
layout: document
redirect_from:
- /verify/verify/heuristic-template.test.cpp
- /verify/verify/heuristic-template.test.cpp.html
title: verify/heuristic-template.test.cpp
---
