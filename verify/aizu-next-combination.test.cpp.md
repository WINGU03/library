---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.0/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.0/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.0/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.12.0/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: misc/next_combination.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B\"\n\n\
    #include <bits/stdc++.h>\n#include \"template.hpp\"\n#include \"misc/next_combination.hpp\"\
    \n\nint main() {\n    int n, s;\n    while (cin >> n >> s) {\n        if (n ==\
    \ 0 and s == 0) exit(0);\n        vector<int> p(n);\n        iota(all(p), 1);\n\
    \        int ans = 0;\n        do {\n            int cur = 0;\n            rep(i,\
    \ 3) cur += p[i];\n            if (cur == s) ans++;\n        } while (next_combination(all(p),\
    \ 3));\n        cout << ans << endl;\n    }\n    return 0;\n}"
  dependsOn: []
  isVerificationFile: true
  path: verify/aizu-next-combination.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/aizu-next-combination.test.cpp
layout: document
redirect_from:
- /verify/verify/aizu-next-combination.test.cpp
- /verify/verify/aizu-next-combination.test.cpp.html
title: verify/aizu-next-combination.test.cpp
---
