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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: string/rolling-hash-tree.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://yukicoder.me/problems/no/2761\"\n\n#include <bits/stdc++.h>\n\
    \n#include \"template.hpp\"\n\n#include \"string/rolling-hash-tree.hpp\"\n\nint\
    \ main() {\n    int n, l, q;\n    cin >> n >> l >> q;\n    vector<string> s(n);\n\
    \    cin >> s;\n    vector<rolling_hash> rolling_hash(n);\n    rep(i, n) {\n \
    \       rolling_hash[i] = rolling_hash(s[i]);\n    }\n\n    while (q--) {\n  \
    \      int type;\n        cin >> type;\n        if (type == 1) {\n           \
    \ int k;\n            char c, d;\n            cin >> k >> c >> d;\n          \
    \  k--;\n            rep(i, n) {\n                if (s[i][k] == c) {\n      \
    \              s[i][k] = d;\n                    rolling_hash[i].set(k, d);\n\
    \                }\n            }\n        } else {\n            string t;\n \
    \           cin >> t;\n            int m = t.size();\n            rolling_hash\
    \ rol(t);\n\n            int ans = 0;\n            rep(i, n) {\n             \
    \   if (rolling_hash[i].get(0, m) == rol.get(0, m)) ans++;\n            }\n\n\
    \            cout << ans << endl;\n        }\n    }\n    return 0;\n}"
  dependsOn: []
  isVerificationFile: true
  path: verify/segment-tree-rolling-hash.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/segment-tree-rolling-hash.test.cpp
layout: document
redirect_from:
- /verify/verify/segment-tree-rolling-hash.test.cpp
- /verify/verify/segment-tree-rolling-hash.test.cpp.html
title: verify/segment-tree-rolling-hash.test.cpp
---
