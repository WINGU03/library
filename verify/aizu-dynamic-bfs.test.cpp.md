---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/dynamic-bfs.hpp
    title: "\u52D5\u7684BFS"
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
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
  bundledCode: "#line 1 \"verify/aizu-dynamic-bfs.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n\
    #define rep2(i, a, b) for (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i,\
    \ a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a,\
    \ b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define rrep(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i,\
    \ a, b) for (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(),\
    \ a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\nconst int inf = 1e9;\nconst ll INF = 1e18;\nconst\
    \ int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1, 0};\nconst int ddx[8]\
    \ = {1, 0, -1, 0, 1, -1, 1, -1};\nconst int ddy[8] = {0, 1, 0, -1, 1, -1, -1,\
    \ 1};\n\nstruct cincout {\n    cincout() {\n        ios_base::sync_with_stdio(false);\n\
    \        cin.tie(nullptr);\n        cout << fixed << setprecision(15);\n    }\n\
    } init;\n\n// chmax chmin\ntemplate <class T>\ninline bool chmax(T &a, T b) {\n\
    \    if (a < b) {\n        a = b;\n        return true;\n    }\n    return false;\n\
    }\n\ntemplate <class T>\ninline bool chmin(T &a, T b) {\n    if (a > b) {\n  \
    \      a = b;\n        return true;\n    }\n    return false;\n}\n\n// pair\n\
    template <class T1, class T2>\nistream &operator>>(istream &is, pair<T1, T2> &p)\
    \ {\n    is >> p.first >> p.second;\n    return is;\n}\n\ntemplate <class T1,\
    \ class T2>\nostream &operator<<(ostream &os, const pair<T1, T2> &p) {\n    os\
    \ << p.first << \" \" << p.second << '\\n';\n    return os;\n}\n\n// vector\n\
    template <class T>\nistream &operator>>(istream &is, vector<T> &v) {\n    for\
    \ (T &in : v) {\n        is >> in;\n    }\n    return is;\n}\n\ntemplate <class\
    \ T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n    rep(i, (int)v.size())\
    \ {\n        os << v[i] << \" \\n\"[i + 1 == (int)v.size()];\n    }\n    return\
    \ os;\n}\n\ntemplate <class T>\nistream &operator>>(istream &is, vector<vector<T>>\
    \ &vv) {\n    for (vector<T> &v : vv) {\n        is >> v;\n    }\n    return is;\n\
    }\n\ntemplate <class T>\nostream &operator<<(ostream &os, vector<vector<T>> &vv)\
    \ {\n    for (vector<T> &v : vv) {\n        os << v;\n    }\n    return os;\n\
    }\n\n// bit\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n}\n\n// grid out\n\
    bool out(int ni, int nj, int h, int w) {\n    return (ni < 0 or ni >= h or nj\
    \ < 0 or nj >= w);\n}\n\n// popcount\nint pc(ll x) {\n    return __builtin_popcountll(x);\n\
    }\n\n// max(vector)\ntemplate <class T>\nT max(vector<T> x) {\n    return *max_element(x.begin(),\
    \ x.end());\n}\n#line 1 \"graph/dynamic-bfs.hpp\"\ntemplate <class T, class f>\n\
    int dynamic_bfs(T& s, f& nxt, T& g) {\n    if (s == g) return 0;\n    map<T, int>\
    \ dist;\n    queue<T> q;\n    dist[s] = 0;\n    q.push(s);\n    while (!q.empty())\
    \ {\n        auto v = q.front();\n        q.pop();\n        for (const auto& u\
    \ : nxt(v)) {\n            if (dist.count(u)) continue;\n            if (u ==\
    \ g) return dist[v] + 1;\n            dist[u] = dist[v] + 1;\n            q.push(u);\n\
    \        }\n    }\n    return -1;\n}\n#line 6 \"verify/aizu-dynamic-bfs.test.cpp\"\
    \n\nint main() {\n    int n = 3;\n    vector p(n, vector<int>(n));\n    cin >>\
    \ p;\n\n    vector ans(n, vector<int>(n));\n    rep(i, n) rep(j, n) if (i != 2\
    \ or j != 2) ans[i][j] = i * n + j + 1;\n\n    auto f = [&](vector<vector<int>>\
    \ &x) {\n        vector<vector<vector<int>>> res;\n        rep(i, n) rep(j, n)\
    \ if (x[i][j] == 0) {\n            rep(d, 4) {\n                int ni = i + dx[d],\
    \ nj = j + dy[d];\n                if (out(ni, nj, n, n)) continue;\n        \
    \        auto nex = x;\n                swap(nex[i][j], nex[ni][nj]);\n      \
    \          res.push_back(nex);\n            }\n        }\n        return res;\n\
    \    };\n\n    cout << dynamic_bfs(p, f, ans) << endl;\n    return 0;\n}\n"
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
  timestamp: '2024-07-12 20:31:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/aizu-dynamic-bfs.test.cpp
layout: document
redirect_from:
- /verify/verify/aizu-dynamic-bfs.test.cpp
- /verify/verify/aizu-dynamic-bfs.test.cpp.html
title: verify/aizu-dynamic-bfs.test.cpp
---
