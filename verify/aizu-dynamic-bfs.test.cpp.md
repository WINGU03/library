---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/dynamic-bfs.hpp
    title: "\u52D5\u7684BFS"
  - icon: ':x:'
    path: template.hpp
    title: template.hpp
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
  bundledCode: "#line 1 \"verify/aizu-dynamic-bfs.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n\
    #define rep2(i, a, b) for (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i,\
    \ a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a,\
    \ b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define all(a) a.begin(), a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing\
    \ ll = long long;\nusing ull = unsigned long long;\nconst int inf = 1e9;\nconst\
    \ ll INF = 1e18;\nconst int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1,\
    \ 0};\nconst int ddx[8] = {1, 0, -1, 0, 1, -1, 1, -1};\nconst int ddy[8] = {0,\
    \ 1, 0, -1, 1, -1, -1, 1};\nstruct cincout {cincout() {ios_base::sync_with_stdio(false);\
    \ cin.tie(nullptr); cout << fixed << setprecision(15);}} init;\ntemplate <class\
    \ T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}\n\
    template <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;}\
    \ return false;}\ntemplate <class T1, class T2> istream& operator>>(istream& is,\
    \ pair<T1, T2>& p) {is >> p.first >> p.second; return is;}\ntemplate <class T1,\
    \ class T2> ostream& operator<<(ostream& os, const pair<T1, T2>& p) {os << p.first\
    \ << \" \" << p.second << '\\n'; return os;}\ntemplate <class T> istream& operator>>(istream&\
    \ is, vector<T>& v) {for (T& in : v) {is >> in;} return is;}\ntemplate <class\
    \ T> ostream& operator<<(ostream& os, const vector<T>& v) {rep(i, (int)v.size())\
    \ {os << v[i] << \" \\n\"[i + 1 == (int)v.size()];} return os;}\ntemplate <class\
    \ T> istream& operator>>(istream& is, vector<vector<T>>& vv) {for (vector<T>&\
    \ v : vv) {is >> v;} return is;}\ntemplate <class T> ostream& operator<<(ostream&\
    \ os, const vector<T>& vv) {for (vector<T>& v : vv) {os << v;} return os;}\ninline\
    \ bool bit(ll x, int p) {return (x >> p) & 1;}\ninline bool out(int ni, int nj,\
    \ int h, int w) {return (ni < 0 or ni >= h or nj < 0 or nj >= w);}\ninline int\
    \ pc(ll x) {return __builtin_popcountll(x);}\ntemplate <class T> inline T max(vector<T>\
    \ x) {return *max_element(x.begin(), x.end());}\ntemplate <class T> inline T min(vector<T>\
    \ x) {return *min_element(x.begin(), x.end());}\ntemplate <class T> inline T sum(vector<T>\
    \ x) {return reduce(x.begin(), x.end());}\n#line 1 \"graph/dynamic-bfs.hpp\"\n\
    template <class T, class f>\nint dynamic_bfs(T& s, f& nxt, T& g) {\n    if (s\
    \ == g) return 0;\n    map<T, int> dist;\n    queue<T> q;\n    dist[s] = 0;\n\
    \    q.push(s);\n    while (!q.empty()) {\n        auto v = q.front();\n     \
    \   q.pop();\n        for (const auto& u : nxt(v)) {\n            if (dist.count(u))\
    \ continue;\n            if (u == g) return dist[v] + 1;\n            dist[u]\
    \ = dist[v] + 1;\n            q.push(u);\n        }\n    }\n    return -1;\n}\n\
    #line 6 \"verify/aizu-dynamic-bfs.test.cpp\"\n\nint main() {\n    int n = 3;\n\
    \    vector p(n, vector<int>(n));\n    cin >> p;\n\n    vector ans(n, vector<int>(n));\n\
    \    rep(i, n) rep(j, n) if (i != 2 or j != 2) ans[i][j] = i * n + j + 1;\n\n\
    \    auto f = [&](vector<vector<int>> &x) {\n        vector<vector<vector<int>>>\
    \ res;\n        rep(i, n) rep(j, n) if (x[i][j] == 0) {\n            rep(d, 4)\
    \ {\n                int ni = i + dx[d], nj = j + dy[d];\n                if (out(ni,\
    \ nj, n, n)) continue;\n                auto nex = x;\n                swap(nex[i][j],\
    \ nex[ni][nj]);\n                res.push_back(nex);\n            }\n        }\n\
    \        return res;\n    };\n\n    cout << dynamic_bfs(p, f, ans) << endl;\n\
    \    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"graph/dynamic-bfs.hpp\"\
    \n\nint main() {\n    int n = 3;\n    vector p(n, vector<int>(n));\n    cin >>\
    \ p;\n\n    vector ans(n, vector<int>(n));\n    rep(i, n) rep(j, n) if (i != 2\
    \ or j != 2) ans[i][j] = i * n + j + 1;\n\n    auto f = [&](vector<vector<int>>\
    \ &x) {\n        vector<vector<vector<int>>> res;\n        rep(i, n) rep(j, n)\
    \ if (x[i][j] == 0) {\n            rep(d, 4) {\n                int ni = i + dx[d],\
    \ nj = j + dy[d];\n                if (out(ni, nj, n, n)) continue;\n        \
    \        auto nex = x;\n                swap(nex[i][j], nex[ni][nj]);\n      \
    \          res.push_back(nex);\n            }\n        }\n        return res;\n\
    \    };\n\n    cout << dynamic_bfs(p, f, ans) << endl;\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - graph/dynamic-bfs.hpp
  isVerificationFile: true
  path: verify/aizu-dynamic-bfs.test.cpp
  requiredBy: []
  timestamp: '2024-08-06 22:46:40+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/aizu-dynamic-bfs.test.cpp
layout: document
redirect_from:
- /verify/verify/aizu-dynamic-bfs.test.cpp
- /verify/verify/aizu-dynamic-bfs.test.cpp.html
title: verify/aizu-dynamic-bfs.test.cpp
---
