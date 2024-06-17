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
    PROBLEM: https://judge.yosupo.jp/problem/suffixarray
    links:
    - https://judge.yosupo.jp/problem/suffixarray
  bundledCode: "#line 1 \"verify/lc-rolling-hash2.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/suffixarray\"\
    \n\n#include <bits/stdc++.h>\n\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep1(i, a) for (int i = 0; i < (int)(a); i++)\n\
    #define rep2(i, a, b) for (int i = (int)(a); i < (int)(b); i++)\n#define rep3(i,\
    \ a, b, c) for (int i = (int)(a); i < (int)(b); i += (int)(c))\n#define overloadRep(a,\
    \ b, c, d, e, ...) e\n#define rep(...) overloadRep(__VA_ARGS__, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define rrep(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)\n#define drep(i,\
    \ a, b) for (int i = (int)(a); i >= (int)(b); i--)\n#define all(a) a.begin(),\
    \ a.end()\n#define rall(a) a.rbegin(), a.rend()\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\nusing P = pair<ll, ll>;\nusing T = tuple<ll, ll,\
    \ ll>;\nconst int inf = 1e9;\nconst ll INF = 1e18;\nconst int dx[4] = {0, 1, 0,\
    \ -1};\nconst int dy[4] = {1, 0, -1, 0};\n\nstruct cincout {\n    cincout() {\n\
    \        ios_base::sync_with_stdio(false);\n        cin.tie(nullptr);\n      \
    \  cout << fixed << setprecision(15);\n    }\n} init;\n\ntemplate <class T>\n\
    inline bool chmax(T &a, T b) {\n    if (a < b) {\n        a = b;\n        return\
    \ true;\n    }\n    return false;\n}\n\ntemplate <class T>\ninline bool chmin(T\
    \ &a, T b) {\n    if (a > b) {\n        a = b;\n        return true;\n    }\n\
    \    return false;\n}\n\ntemplate <class T1, class T2>\nistream &operator>>(istream\
    \ &is, pair<T1, T2> &p) {\n    is >> p.first >> p.second;\n    return is;\n}\n\
    \ntemplate <class T1, class T2>\nostream &operator<<(ostream &os, const pair<T1,\
    \ T2> &p) {\n    os << p.first << \" \" << p.second << '\\n';\n    return os;\n\
    }\n\ntemplate <class T>\nistream &operator>>(istream &is, vector<T> &v) {\n  \
    \  for (T &in : v) {\n        is >> in;\n    }\n    return is;\n}\n\ntemplate\
    \ <class T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n    rep(i,\
    \ (int)v.size()) {\n        os << v[i] << \" \\n\"[i + 1 == (int)v.size()];\n\
    \    }\n    return os;\n}\n\ntemplate <class T>\nistream &operator>>(istream &is,\
    \ vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        is >> v;\n\
    \    }\n    return is;\n}\n\ntemplate <class T>\nostream &operator<<(ostream &os,\
    \ vector<vector<T>> &vv) {\n    for (vector<T> &v : vv) {\n        os << v;\n\
    \    }\n    return os;\n}\n\nbool bit(ll x, int p) {\n    return (x >> p) & 1;\n\
    }\n\nbool out(int ni, int nj, int h, int w) {\n    return (ni < 0 or ni >= h or\
    \ nj < 0 or nj >= w);\n}\n\nint pc(ll x) {\n    return __builtin_popcountll(x);\n\
    }\n#line 6 \"verify/lc-rolling-hash2.test.cpp\"\n\n#line 1 \"string/rolling-hash.hpp\"\
    \nmt19937_64 r(time(0));\nstatic constexpr ll mod = (1LL << 61) - 1;\nstatic const\
    \ ll base = r() % (mod - 4) + 2;\n\nstruct RollingHash {\n    using i128 = __int128_t;\n\
    \    vector<ll> hash, power;\n    int n;\n    string s;\n\n    inline ll add(ll\
    \ a, ll b) const {\n        if ((a += b) >= mod) a -= mod;\n        return a;\n\
    \    }\n\n    inline ll mul(ll a, ll b) const {\n        i128 x = (i128)a * b;\n\
    \        return add(x >> 61, x & mod);\n    }\n\n    explicit RollingHash(const\
    \ string& S) {\n        n = (int)S.size();\n        s = S;\n        hash.resize(n\
    \ + 1, 0);\n        power.resize(n + 1, 1);\n        for (int i = 0; i < n; i++)\
    \ {\n            hash[i + 1] = add(mul(hash[i], base), S[i]);\n            power[i\
    \ + 1] = mul(power[i], base);\n        }\n    }\n\n    inline ll get(int l, int\
    \ r) const {\n        return add(hash[r], mod - mul(hash[l], power[r - l]));\n\
    \    }\n\n    inline ll get() const {\n        return hash.back();\n    }\n\n\
    \    inline ll connect(ll hash1, ll hash2, int hash2_len) const {\n        return\
    \ add(mul(hash1, power[hash2_len]), hash2);\n    }\n\n    inline int lcp(int a,\
    \ int b) const {\n        int len = min((int)hash.size() - a, (int)hash.size()\
    \ - b);\n        int left = 0, right = len;\n        while (right - left > 1)\
    \ {\n            int mid = (left + right) / 2;\n            if (get(a, a + mid)\
    \ != get(b, b + mid)) {\n                right = mid;\n            } else {\n\
    \                left = mid;\n            }\n        }\n        return left;\n\
    \    }\n\n    inline int lcp(const RollingHash& T, int a, int b) const {\n   \
    \     int len = min((int)hash.size() - a, (int)hash.size() - b);\n        int\
    \ left = 0, right = len;\n        while (right - left > 1) {\n            int\
    \ mid = (left + right) / 2;\n            if (get(a, a + mid) != T.get(b, b + mid))\
    \ {\n                right = mid;\n            } else {\n                left\
    \ = mid;\n            }\n        }\n        return left;\n    }\n\n    inline\
    \ vector<int> suffix_array() {\n        vector<int> p(n);\n        iota(all(p),\
    \ 0);\n        sort(all(p), [&](int i, int j) {\n            int k = lcp(i, j);\n\
    \            if (i + k >= n) return true;\n            if (j + k >= n) return\
    \ false;\n            return (s[i + k] <= s[j + k]);\n        });\n        return\
    \ p;\n    }\n};\n#line 8 \"verify/lc-rolling-hash2.test.cpp\"\n\nint main(){\n\
    \    string s;\n    cin >> s;\n    RollingHash rol(s);\n    auto ans = rol.suffix_array();\n\
    \    cout << ans;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/suffixarray\"\n\n#include\
    \ <bits/stdc++.h>\n\n#include \"template.hpp\"\n\n#include \"string/rolling-hash.hpp\"\
    \n\nint main(){\n    string s;\n    cin >> s;\n    RollingHash rol(s);\n    auto\
    \ ans = rol.suffix_array();\n    cout << ans;\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - string/rolling-hash.hpp
  isVerificationFile: true
  path: verify/lc-rolling-hash2.test.cpp
  requiredBy: []
  timestamp: '2024-06-17 20:15:00+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/lc-rolling-hash2.test.cpp
layout: document
redirect_from:
- /verify/verify/lc-rolling-hash2.test.cpp
- /verify/verify/lc-rolling-hash2.test.cpp.html
title: verify/lc-rolling-hash2.test.cpp
---
