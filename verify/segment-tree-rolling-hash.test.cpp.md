---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/segment-tree-rolling-hash.hpp
    title: "Rolling Hash(\u4E00\u70B9\u5909\u66F4\u53CD\u8EE2\u53EF\u80FD)"
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
    PROBLEM: https://yukicoder.me/problems/no/2761
    links:
    - https://yukicoder.me/problems/no/2761
  bundledCode: "#line 1 \"verify/segment-tree-rolling-hash.test.cpp\"\n#define PROBLEM\
    \ \"https://yukicoder.me/problems/no/2761\"\n\n#include <bits/stdc++.h>\n\n#line\
    \ 2 \"template.hpp\"\nusing namespace std;\n#include <atcoder/modint>\nusing namespace\
    \ atcoder;\n#ifdef local\n#include <debug.hpp>\n#else\n#define debug(...)\n#endif\n\
    #define rep(i, n) for (int i = 0; i < n; i++)\ntemplate <class T> istream& operator>>(istream&\
    \ I, vector<T>& V) { for (T& X : V) I >> X; return I; }\n#line 6 \"verify/segment-tree-rolling-hash.test.cpp\"\
    \n\n#line 1 \"string/segment-tree-rolling-hash.hpp\"\n#include <atcoder/segtree>\n\
    \nrandom_device rd;\nmt19937_64 rnd(rd());\nstatic constexpr long long mod = (1LL\
    \ << 61) - 1;\nstatic const long long base = rnd() % (mod - 4) + 2;\n\nusing D\
    \ = pair<long long, long long>;\n\nD op(D l, D r) {\n    auto [a, b] = l;\n  \
    \  auto [c, d] = r;\n    __int128_t x = (__int128_t)a * d + c;\n    return D(x\
    \ % mod, ((__int128_t)b * d) % mod);\n}\nD e() {\n    return D(0, 1);\n}\n\nD\
    \ op_(D l, D r) {\n    auto [a, b] = l;\n    auto [c, d] = r;\n    __int128_t\
    \ x = (__int128_t)c * b + a;\n    return D(x % mod, ((__int128_t)b * d) % mod);\n\
    }\n\nstruct rolling_hash {\n    segtree<D, op, e> seg;\n    segtree<D, op_, e>\
    \ rseg;\n    bool reverse;\n\n    explicit rolling_hash(const string &s = \"\"\
    , bool reverse_ = false)\n        : reverse(reverse_) {\n        int n = s.size();\n\
    \        seg = segtree<D, op, e>(n);\n        if (reverse) rseg = segtree<D, op_,\
    \ e>(n);\n        rep(i, n) {\n            seg.set(i, D(s[i], base));\n      \
    \      if (reverse) rseg.set(i, D(s[i], base));\n        }\n    }\n\n    inline\
    \ void set(int i, char c) {\n        seg.set(i, D(c, base));\n        if (reverse)\
    \ rseg.set(i, D(c, base));\n    }\n\n    inline long long get(int l, int r) {\n\
    \        auto [a, b] = seg.prod(l, r);\n        return a;\n    }\n\n    inline\
    \ long long rget(int l, int r) {\n        auto [a, b] = rseg.prod(l, r);\n   \
    \     return a;\n    }\n};\n#line 8 \"verify/segment-tree-rolling-hash.test.cpp\"\
    \n\nint main() {\n    int n, l, q;\n    cin >> n >> l >> q;\n    vector<string>\
    \ s(n);\n    cin >> s;\n    vector<rolling_hash> rs;\n    rep(i, n) {\n      \
    \  rs.push_back(rolling_hash(s[i]));\n    }\n\n    while (q--) {\n        int\
    \ type;\n        cin >> type;\n        if (type == 1) {\n            int k;\n\
    \            char c, d;\n            cin >> k >> c >> d;\n            k--;\n \
    \           rep(i, n) {\n                if (s[i][k] == c) {\n               \
    \     s[i][k] = d;\n                    rs[i].set(k, d);\n                }\n\
    \            }\n        } else {\n            string t;\n            cin >> t;\n\
    \            int m = t.size();\n            rolling_hash rt(t);\n\n          \
    \  int ans = 0;\n            rep(i, n) {\n                if (rs[i].get(0, m)\
    \ == rt.get(0, m)) ans++;\n            }\n\n            cout << ans << endl;\n\
    \        }\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://yukicoder.me/problems/no/2761\"\n\n#include <bits/stdc++.h>\n\
    \n#include \"template.hpp\"\n\n#include \"string/segment-tree-rolling-hash.hpp\"\
    \n\nint main() {\n    int n, l, q;\n    cin >> n >> l >> q;\n    vector<string>\
    \ s(n);\n    cin >> s;\n    vector<rolling_hash> rs;\n    rep(i, n) {\n      \
    \  rs.push_back(rolling_hash(s[i]));\n    }\n\n    while (q--) {\n        int\
    \ type;\n        cin >> type;\n        if (type == 1) {\n            int k;\n\
    \            char c, d;\n            cin >> k >> c >> d;\n            k--;\n \
    \           rep(i, n) {\n                if (s[i][k] == c) {\n               \
    \     s[i][k] = d;\n                    rs[i].set(k, d);\n                }\n\
    \            }\n        } else {\n            string t;\n            cin >> t;\n\
    \            int m = t.size();\n            rolling_hash rt(t);\n\n          \
    \  int ans = 0;\n            rep(i, n) {\n                if (rs[i].get(0, m)\
    \ == rt.get(0, m)) ans++;\n            }\n\n            cout << ans << endl;\n\
    \        }\n    }\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - string/segment-tree-rolling-hash.hpp
  isVerificationFile: true
  path: verify/segment-tree-rolling-hash.test.cpp
  requiredBy: []
  timestamp: '2024-10-28 22:30:38+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/segment-tree-rolling-hash.test.cpp
layout: document
redirect_from:
- /verify/verify/segment-tree-rolling-hash.test.cpp
- /verify/verify/segment-tree-rolling-hash.test.cpp.html
title: verify/segment-tree-rolling-hash.test.cpp
---
