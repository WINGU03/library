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
    \ namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n#include <dump.hpp>\n#define\
    \ dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n#define dump(...)\n#endif\n\
    #define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n#define rep2(i, a, b) for\
    \ (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i, a, b, c) for (int i =\
    \ (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a, b, c, d, e, ...)\
    \ e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
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
    \ os, const vector<vector<T>>& vv) {for (vector<T>& v : vv) {os << v;} return\
    \ os;}\ninline bool bit(ll x, int p) {return (x >> p) & 1;}\ninline bool out(int\
    \ ni, int nj, int h, int w) {return (ni < 0 or ni >= h or nj < 0 or nj >= w);}\n\
    inline int pc(ll x) {return __builtin_popcountll(x);}\ntemplate <class T> inline\
    \ T max(vector<T> x) {return *max_element(x.begin(), x.end());}\ntemplate <class\
    \ T> inline T min(vector<T> x) {return *min_element(x.begin(), x.end());}\ntemplate\
    \ <class T> inline T sum(vector<T> x) {return reduce(x.begin(), x.end());}\n#line\
    \ 1 \"string/rolling-hash.hpp\"\nmt19937_64 r(time(0));\nstatic constexpr ll mod\
    \ = (1LL << 61) - 1;\nstatic const ll base = r() % (mod - 4) + 2;\n\nstruct RollingHash\
    \ {\n    using i128 = __int128_t;\n    vector<ll> hash, power;\n    int n;\n \
    \   string s;\n\n    inline ll add(ll a, ll b) const {\n        if ((a += b) >=\
    \ mod) a -= mod;\n        return a;\n    }\n\n    inline ll mul(ll a, ll b) const\
    \ {\n        i128 x = (i128)a * b;\n        return add(x >> 61, x & mod);\n  \
    \  }\n\n    explicit RollingHash(const string& S) {\n        n = (int)S.size();\n\
    \        s = S;\n        hash.resize(n + 1, 0);\n        power.resize(n + 1, 1);\n\
    \        for (int i = 0; i < n; i++) {\n            hash[i + 1] = add(mul(hash[i],\
    \ base), S[i]);\n            power[i + 1] = mul(power[i], base);\n        }\n\
    \    }\n\n    inline ll get(int l, int r) const {\n        return add(hash[r],\
    \ mod - mul(hash[l], power[r - l]));\n    }\n\n    inline ll get() const {\n \
    \       return hash.back();\n    }\n\n    inline ll connect(ll hash1, ll hash2,\
    \ int hash2_len) const {\n        return add(mul(hash1, power[hash2_len]), hash2);\n\
    \    }\n\n    inline int lcp(int a, int b) const {\n        int len = min((int)hash.size()\
    \ - a, (int)hash.size() - b);\n        int left = 0, right = len;\n        while\
    \ (right - left > 1) {\n            int mid = (left + right) / 2;\n          \
    \  if (get(a, a + mid) != get(b, b + mid)) {\n                right = mid;\n \
    \           } else {\n                left = mid;\n            }\n        }\n\
    \        return left;\n    }\n\n    inline int lcp(const RollingHash& T, int a,\
    \ int b) const {\n        int len = min((int)hash.size() - a, (int)hash.size()\
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
  timestamp: '2024-08-06 22:54:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/aizu-rolling-hash.test.cpp
layout: document
redirect_from:
- /verify/verify/aizu-rolling-hash.test.cpp
- /verify/verify/aizu-rolling-hash.test.cpp.html
title: verify/aizu-rolling-hash.test.cpp
---
