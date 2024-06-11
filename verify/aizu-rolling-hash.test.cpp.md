---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/rolling-hash.hpp
    title: Rolling Hash
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B
  bundledCode: "#line 1 \"verify/aizu-rolling-hash.test.cpp\"\n#define PROBLEM \"\
    https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B\"\n\n#include<bits/stdc++.h>\n\
    #line 2 \"template.hpp\"\nusing namespace std;\n#include <atcoder/modint>\nusing\
    \ namespace atcoder;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n#define\
    \ dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n#define dump(...)\n#endif\n\
    #define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n#define rep2(i, a, b) for\
    \ (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i, a, b, c) for (int i =\
    \ (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a, b, c, d, e, ...)\
    \ e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define rrep(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i,\
    \ a, b) for (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(),\
    \ a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing\
    \ P = pair<ll, ll>;\nusing T = tuple<ll, ll, ll>;\nconst int inf = 1e9;\nconst\
    \ ll INF = 1e18;\nconst int dx[4] = {0, 1, 0, -1};\nconst int dy[4] = {1, 0, -1,\
    \ 0};\n\nstruct cincout {\n    cincout() {\n        ios_base::sync_with_stdio(false);\n\
    \        cin.tie(nullptr);\n        cout << fixed << setprecision(15);\n    }\n\
    } init;\n\ntemplate <class T>\ninline bool chmax(T &a, T b) {\n    if (a < b)\
    \ {\n        a = b;\n        return true;\n    }\n    return false;\n}\n\ntemplate\
    \ <class T>\ninline bool chmin(T &a, T b) {\n    if (a > b) {\n        a = b;\n\
    \        return true;\n    }\n    return false;\n}\n\ntemplate <class T>\nistream\
    \ &operator>>(istream &is, vector<T> &v) {\n    for (T &in : v) {\n        is\
    \ >> in;\n    }\n    return is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const vector<T> &v) {\n    rep(i, (int)v.size()) {\n        os << v[i]\
    \ << \" \\n\"[i + 1 == (int)v.size()];\n    }\n    return os;\n}\n\ntemplate <class\
    \ T>\nistream &operator>>(istream &is, vector<vector<T>> &vv) {\n    for (vector<T>\
    \ &v : vv) {\n        is >> v;\n    }\n    return is;\n}\n\ntemplate <class T>\n\
    ostream &operator<<(ostream &os, vector<vector<T>> &vv) {\n    for (vector<T>\
    \ &v : vv) {\n        os << v;\n    }\n    return os;\n}\n\ntemplate <class T1,\
    \ class T2>\nistream &operator>>(istream &is, pair<T1, T2> &p) {\n    is >> p.first\
    \ >> p.second;\n    return is;\n}\n\ntemplate <class T1, class T2>\nostream &operator<<(ostream\
    \ &os, const pair<T1, T2> &p) {\n    os << p.first << \" \" << p.second << '\\\
    n';\n    return os;\n}\n\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n\
    }\n\nbool out(int ni, int nj, int h, int w) {\n    return (ni < 0 or ni >= h or\
    \ nj < 0 or nj >= w);\n}\n\nint pc(ll x) {\n    return __builtin_popcountll(x);\n\
    }\n#line 1 \"string/rolling-hash.hpp\"\nmt19937_64 r(time(0));\nstatic const int\
    \ mod1 = 1000000007, mod2 = 1000000009;\nusing mint1 = static_modint<mod1>;\n\
    using mint2 = static_modint<mod2>;\nstatic const int base1 = r() % (mod1 - 4)\
    \ + 2, base2 = r() % (mod2 - 4) + 2;\n\nstruct RollingHash {\n    vector<mint1>\
    \ hash1, power1;\n    vector<mint2> hash2, power2;\n    int n;\n\n    explicit\
    \ RollingHash(const string &S = \"\") {\n        n = (int)S.size();\n        hash1.assign(n\
    \ + 1, 0), hash2.assign(n + 1, 0);\n        power1.assign(n + 1, 1), power2.assign(n\
    \ + 1, 1);\n        for (int i = 0; i < n; ++i) {\n            hash1[i + 1] =\
    \ hash1[i] * base1 + S[i];\n            hash2[i + 1] = hash2[i] * base2 + S[i];\n\
    \            power1[i + 1] = power1[i] * base1;\n            power2[i + 1] = power2[i]\
    \ * base2;\n        }\n    }\n\n    inline long long get(int l, int r) const {\n\
    \        mint1 res1 = hash1[r] - hash1[l] * power1[r - l];\n        mint2 res2\
    \ = hash2[r] - hash2[l] * power2[r - l];\n        return (ll)res1.val() * mod2\
    \ + res2.val();\n    }\n\n    inline long long get() const {\n        return (ll)hash1.back().val()\
    \ * mod2 + hash2.back().val();\n    }\n\n    inline int getLCP(int a, int b) const\
    \ {\n        int len = min((int)hash1.size() - a, (int)hash1.size() - b);\n  \
    \      int left = 0, right = len;\n        while (right - left > 1) {\n      \
    \      int mid = (left + right) / 2;\n            if (get(a, a + mid) != get(b,\
    \ b + mid)) {\n                right = mid;\n            } else {\n          \
    \      left = mid;\n            }\n        }\n        return left;\n    }\n\n\
    \    // get lcp of S[a:] and T[b:]\n    inline int getLCP(const RollingHash &T,\
    \ int a, int b) const {\n        int len = min((int)hash1.size() - a, (int)hash1.size()\
    \ - b);\n        int left = 0, right = len;\n        while (right - left > 1)\
    \ {\n            int mid = (left + right) / 2;\n            if (get(a, a + mid)\
    \ != T.get(b, b + mid)) {\n                right = mid;\n            } else {\n\
    \                left = mid;\n            }\n        }\n        return left;\n\
    \    }\n};\n#line 6 \"verify/aizu-rolling-hash.test.cpp\"\n\nint main() {\n  \
    \  string T, P;\n    cin >> T >> P;\n    int N = T.size(), M = P.size();\n   \
    \ RollingHash RT(T), RP(P);\n    rep(i, N - M + 1) {\n        if(RT.get(i, i +\
    \ M) == RP.get()) {\n            cout << i << endl;\n        }\n    }\n    return\
    \ 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B\"\
    \n\n#include<bits/stdc++.h>\n#include \"template.hpp\"\n#include \"string/rolling-hash.hpp\"\
    \n\nint main() {\n    string T, P;\n    cin >> T >> P;\n    int N = T.size(),\
    \ M = P.size();\n    RollingHash RT(T), RP(P);\n    rep(i, N - M + 1) {\n    \
    \    if(RT.get(i, i + M) == RP.get()) {\n            cout << i << endl;\n    \
    \    }\n    }\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - string/rolling-hash.hpp
  isVerificationFile: true
  path: verify/aizu-rolling-hash.test.cpp
  requiredBy: []
  timestamp: '2024-06-11 21:35:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/aizu-rolling-hash.test.cpp
layout: document
redirect_from:
- /verify/verify/aizu-rolling-hash.test.cpp
- /verify/verify/aizu-rolling-hash.test.cpp.html
title: verify/aizu-rolling-hash.test.cpp
---
