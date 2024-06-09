---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/CC.test.cpp
    title: verify/CC.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"other/CC.hpp\"\ntemplate<typename T=int>\nstruct CC {\n\
    \  bool initialized;\n  vector<T> xs;\n  unordered_map<T, int> mp;\n  CC(): initialized(false)\
    \ {}\n  void add(T x) { xs.push_back(x);}\n  void init() {\n    sort(xs.begin(),\
    \ xs.end());\n    xs.erase(unique(xs.begin(),xs.end()),xs.end());\n    for(int\
    \ i = 0; i < (int)xs.size(); i++){\n      mp[xs[i]] = i;\n    }\n    initialized\
    \ = true;\n  }\n\t// x\u304C\u5EA7\u5727\u5F8C\u4F55\u756A\u76EE\u304B\u3092\u8FD4\
    \u3059\n  int operator()(T x) {\n    if (!initialized) init();\n    return mp[x];\n\
    \  }\n    // \u5EA7\u5727\u5F8C\u306Ei\u756A\u76EE\u306E\u5024\u3092\u8FD4\u3059\
    \n  T operator[](int i) {\n    if (!initialized) init();\n    return xs[i];\n\
    \  }\n    // \u5EA7\u5727\u5F8C\u306E\u30B5\u30A4\u30BA\u3092\u8FD4\u3059\n  int\
    \ size() {\n    if (!initialized) init();\n    return xs.size();\n  }\n};\n"
  code: "template<typename T=int>\nstruct CC {\n  bool initialized;\n  vector<T> xs;\n\
    \  unordered_map<T, int> mp;\n  CC(): initialized(false) {}\n  void add(T x) {\
    \ xs.push_back(x);}\n  void init() {\n    sort(xs.begin(), xs.end());\n    xs.erase(unique(xs.begin(),xs.end()),xs.end());\n\
    \    for(int i = 0; i < (int)xs.size(); i++){\n      mp[xs[i]] = i;\n    }\n \
    \   initialized = true;\n  }\n\t// x\u304C\u5EA7\u5727\u5F8C\u4F55\u756A\u76EE\
    \u304B\u3092\u8FD4\u3059\n  int operator()(T x) {\n    if (!initialized) init();\n\
    \    return mp[x];\n  }\n    // \u5EA7\u5727\u5F8C\u306Ei\u756A\u76EE\u306E\u5024\
    \u3092\u8FD4\u3059\n  T operator[](int i) {\n    if (!initialized) init();\n \
    \   return xs[i];\n  }\n    // \u5EA7\u5727\u5F8C\u306E\u30B5\u30A4\u30BA\u3092\
    \u8FD4\u3059\n  int size() {\n    if (!initialized) init();\n    return xs.size();\n\
    \  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: other/CC.hpp
  requiredBy: []
  timestamp: '2024-06-09 17:51:02+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/CC.test.cpp
documentation_of: other/CC.hpp
layout: document
redirect_from:
- /library/other/CC.hpp
- /library/other/CC.hpp.html
title: other/CC.hpp
---
