---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/rolling-hash.hpp
    title: Rolling Hash
  - icon: ':question:'
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
  bundledCode: "#line 1 \"verify/rolling-hash.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B\"\
    \n\n#include<bits/stdc++.h>\n#line 2 \"template.hpp\"\nusing namespace std;\n\
    #include <atcoder/modint>\nusing namespace atcoder;\n#ifdef DEFINED_ONLY_IN_LOCAL\n\
    #include <dump.hpp>\n#define dump(...) cpp_dump(__VA_ARGS__)\n#else\n#undef dump\n\
    #define dump(...)\n#endif\n#define rep(i, n) for (int i = 0; i < n; i++)\ntemplate\
    \ <class T> istream& operator>>(istream& I, vector<T>& V) { for (T& X : V) I >>\
    \ X; return I; }\n#line 1 \"string/rolling-hash.hpp\"\nrandom_device rd;\nmt19937_64\
    \ rnd(rd());\nstatic constexpr long long mod = (1LL << 61) - 1;\nstatic const\
    \ long long base = rnd() % (mod - 4) + 2;\nstruct rolling_hash {\n    vector<long\
    \ long> hash, power;\n    int n;\n    string s;\n\n    inline long long add(long\
    \ long a, long long b) const {\n        if ((a += b) >= mod) a -= mod;\n     \
    \   return a;\n    }\n\n    inline long long mul(long long a, long long b) const\
    \ {\n        __int128_t x = (__int128_t)a * b;\n        return add(x >> 61, x\
    \ & mod);\n    }\n\n    explicit rolling_hash(const string& S) {\n        n =\
    \ (int)S.size();\n        s = S;\n        hash.resize(n + 1, 0);\n        power.resize(n\
    \ + 1, 1);\n        for (int i = 0; i < n; i++) {\n            hash[i + 1] = add(mul(hash[i],\
    \ base), S[i]);\n            power[i + 1] = mul(power[i], base);\n        }\n\
    \    }\n\n    inline long long get(int l, int r) const {\n        return add(hash[r],\
    \ mod - mul(hash[l], power[r - l]));\n    }\n\n    inline long long get() const\
    \ {\n        return hash.back();\n    }\n\n    inline long long connect(long long\
    \ hash1, long long hash2, int hash2_len) const {\n        return add(mul(hash1,\
    \ power[hash2_len]), hash2);\n    }\n\n    inline int lcp(int a, int b) const\
    \ {\n        int len = min((int)hash.size() - a, (int)hash.size() - b);\n    \
    \    int left = 0, right = len;\n        while (right - left > 1) {\n        \
    \    int mid = (left + right) / 2;\n            if (get(a, a + mid) != get(b,\
    \ b + mid)) {\n                right = mid;\n            } else {\n          \
    \      left = mid;\n            }\n        }\n        return left;\n    }\n\n\
    \    inline int lcp(const rolling_hash& T, int a, int b) const {\n        int\
    \ len = min((int)hash.size() - a, (int)T.hash.size() - b);\n        int left =\
    \ 0, right = len;\n        while (right - left > 1) {\n            int mid = (left\
    \ + right) / 2;\n            if (get(a, a + mid) != T.get(b, b + mid)) {\n   \
    \             right = mid;\n            } else {\n                left = mid;\n\
    \            }\n        }\n        return left;\n    }\n};\n#line 6 \"verify/rolling-hash.test.cpp\"\
    \n\nint main() {\n    string T, P;\n    cin >> T >> P;\n    int N = T.size(),\
    \ M = P.size();\n    rolling_hash RT(T), RP(P);\n    rep(i, N - M + 1) {\n   \
    \     if(RT.get(i, i + M) == RP.get()) {\n            cout << i << endl;\n   \
    \     }\n    }\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B\"\
    \n\n#include<bits/stdc++.h>\n#include \"template.hpp\"\n#include \"string/rolling-hash.hpp\"\
    \n\nint main() {\n    string T, P;\n    cin >> T >> P;\n    int N = T.size(),\
    \ M = P.size();\n    rolling_hash RT(T), RP(P);\n    rep(i, N - M + 1) {\n   \
    \     if(RT.get(i, i + M) == RP.get()) {\n            cout << i << endl;\n   \
    \     }\n    }\n    return 0;\n}"
  dependsOn:
  - template.hpp
  - string/rolling-hash.hpp
  isVerificationFile: true
  path: verify/rolling-hash.test.cpp
  requiredBy: []
  timestamp: '2024-10-01 21:17:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/rolling-hash.test.cpp
layout: document
redirect_from:
- /verify/verify/rolling-hash.test.cpp
- /verify/verify/rolling-hash.test.cpp.html
title: verify/rolling-hash.test.cpp
---
