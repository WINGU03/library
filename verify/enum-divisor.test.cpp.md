---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/enum-divisor.hpp
    title: math/enum-divisor.hpp
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
    PROBLEM: https://yukicoder.me/problems/no/888
    links:
    - https://yukicoder.me/problems/no/888
  bundledCode: "#line 1 \"verify/enum-divisor.test.cpp\"\n#define PROBLEM \"https://yukicoder.me/problems/no/888\"\
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
    }\n#line 1 \"math/enum-divisor.hpp\"\nvector<ll> enum_divisor(ll n) {\n    vector<ll>\
    \ res;\n    for (int i = 1; (ll)i * i <= n; i++) {\n        if (n % i == 0) {\n\
    \            res.push_back(i);\n            ll j = n / i;\n            if (j !=\
    \ i) res.push_back(j);\n        }\n    }\n    sort(res.begin(), res.end());\n\
    \    return res;\n}\n#line 6 \"verify/enum-divisor.test.cpp\"\n\nint main(){\n\
    \    ll n;\n    cin >> n;\n    auto divisors = enum_divisor(n);\n    ll ans =\
    \ 0;\n    for (auto divisor : divisors) {\n        ans += divisor;\n    }\n  \
    \  cout << ans << endl;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://yukicoder.me/problems/no/888\"\n\n#include <bits/stdc++.h>\n\
    #include \"template.hpp\"\n#include \"math/enum-divisor.hpp\"\n\nint main(){\n\
    \    ll n;\n    cin >> n;\n    auto divisors = enum_divisor(n);\n    ll ans =\
    \ 0;\n    for (auto divisor : divisors) {\n        ans += divisor;\n    }\n  \
    \  cout << ans << endl;\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - math/enum-divisor.hpp
  isVerificationFile: true
  path: verify/enum-divisor.test.cpp
  requiredBy: []
  timestamp: '2024-06-17 20:15:00+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/enum-divisor.test.cpp
layout: document
redirect_from:
- /verify/verify/enum-divisor.test.cpp
- /verify/verify/enum-divisor.test.cpp.html
title: verify/enum-divisor.test.cpp
---
