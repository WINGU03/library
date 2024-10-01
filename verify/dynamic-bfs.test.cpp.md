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
  bundledCode: "#line 1 \"verify/dynamic-bfs.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B\"\
    \n\n#include <bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep(i, n) for (int i = 0; i < n; i++)\ntemplate\
    \ <class T> istream& operator>>(istream& I, vector<T>& V) { for (T& X : V) I >>\
    \ X; return I; }\n#line 1 \"graph/dynamic-bfs.hpp\"\ntemplate <class T, class\
    \ f>\nint dynamic_bfs(T& s, f& nxt, T& g) {\n    if (s == g) return 0;\n    map<T,\
    \ int> dist;\n    queue<T> q;\n    dist[s] = 0;\n    q.push(s);\n    while (!q.empty())\
    \ {\n        auto v = q.front();\n        q.pop();\n        for (const auto& u\
    \ : nxt(v)) {\n            if (dist.count(u)) continue;\n            if (u ==\
    \ g) return dist[v] + 1;\n            dist[u] = dist[v] + 1;\n            q.push(u);\n\
    \        }\n    }\n    return -1;\n}\n#line 6 \"verify/dynamic-bfs.test.cpp\"\n\
    \nint dx[4] = {-1, 0, 1, 0};\nint dy[4] = {0, 1, 0, -1};\n\nint main() {\n   \
    \ int n = 3;\n    vector p(n, vector<int>(n));\n    cin >> p;\n\n    vector ans(n,\
    \ vector<int>(n));\n    rep(i, n) rep(j, n) if (i != 2 or j != 2) ans[i][j] =\
    \ i * n + j + 1;\n\n    auto f = [&](vector<vector<int>> &x) {\n        vector<vector<vector<int>>>\
    \ res;\n        rep(i, n) rep(j, n) if (x[i][j] == 0) {\n            rep(d, 4)\
    \ {\n                int ni = i + dx[d], nj = j + dy[d];\n                if (ni\
    \ < 0 or nj < 0 or ni >= n or nj >= n) continue;\n                auto nex = x;\n\
    \                swap(nex[i][j], nex[ni][nj]);\n                res.push_back(nex);\n\
    \            }\n        }\n        return res;\n    };\n\n    cout << dynamic_bfs(p,\
    \ f, ans) << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/13/ALDS1_13_B\"\
    \n\n#include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"graph/dynamic-bfs.hpp\"\
    \n\nint dx[4] = {-1, 0, 1, 0};\nint dy[4] = {0, 1, 0, -1};\n\nint main() {\n \
    \   int n = 3;\n    vector p(n, vector<int>(n));\n    cin >> p;\n\n    vector\
    \ ans(n, vector<int>(n));\n    rep(i, n) rep(j, n) if (i != 2 or j != 2) ans[i][j]\
    \ = i * n + j + 1;\n\n    auto f = [&](vector<vector<int>> &x) {\n        vector<vector<vector<int>>>\
    \ res;\n        rep(i, n) rep(j, n) if (x[i][j] == 0) {\n            rep(d, 4)\
    \ {\n                int ni = i + dx[d], nj = j + dy[d];\n                if (ni\
    \ < 0 or nj < 0 or ni >= n or nj >= n) continue;\n                auto nex = x;\n\
    \                swap(nex[i][j], nex[ni][nj]);\n                res.push_back(nex);\n\
    \            }\n        }\n        return res;\n    };\n\n    cout << dynamic_bfs(p,\
    \ f, ans) << endl;\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - graph/dynamic-bfs.hpp
  isVerificationFile: true
  path: verify/dynamic-bfs.test.cpp
  requiredBy: []
  timestamp: '2024-10-01 21:26:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/dynamic-bfs.test.cpp
layout: document
redirect_from:
- /verify/verify/dynamic-bfs.test.cpp
- /verify/verify/dynamic-bfs.test.cpp.html
title: verify/dynamic-bfs.test.cpp
---
