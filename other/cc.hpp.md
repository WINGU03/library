---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/cc.test.cpp
    title: verify/cc.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"other/cc.hpp\"\ntemplate <typename T = int>\nstruct CC {\n\
    \    bool initialized;\n    vector<T> xs;\n    unordered_map<T, int> mp;\n   \
    \ CC() : initialized(false) {}\n    void add(T x) {\n        xs.push_back(x);\n\
    \    }\n    void init() {\n        sort(xs.begin(), xs.end());\n        xs.erase(unique(xs.begin(),\
    \ xs.end()), xs.end());\n        for (int i = 0; i < (int)xs.size(); i++) {\n\
    \            mp[xs[i]] = i;\n        }\n        initialized = true;\n    }\n \
    \   int operator()(T x) {\n        if (!initialized) init();\n        return mp[x];\n\
    \    }\n    T operator[](int i) {\n        if (!initialized) init();\n       \
    \ return xs[i];\n    }\n    int size() {\n        if (!initialized) init();\n\
    \        return xs.size();\n    }\n};\n"
  code: "template <typename T = int>\nstruct CC {\n    bool initialized;\n    vector<T>\
    \ xs;\n    unordered_map<T, int> mp;\n    CC() : initialized(false) {}\n    void\
    \ add(T x) {\n        xs.push_back(x);\n    }\n    void init() {\n        sort(xs.begin(),\
    \ xs.end());\n        xs.erase(unique(xs.begin(), xs.end()), xs.end());\n    \
    \    for (int i = 0; i < (int)xs.size(); i++) {\n            mp[xs[i]] = i;\n\
    \        }\n        initialized = true;\n    }\n    int operator()(T x) {\n  \
    \      if (!initialized) init();\n        return mp[x];\n    }\n    T operator[](int\
    \ i) {\n        if (!initialized) init();\n        return xs[i];\n    }\n    int\
    \ size() {\n        if (!initialized) init();\n        return xs.size();\n   \
    \ }\n};"
  dependsOn: []
  isVerificationFile: false
  path: other/cc.hpp
  requiredBy: []
  timestamp: '2024-06-10 17:44:10+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/cc.test.cpp
documentation_of: other/cc.hpp
layout: document
redirect_from:
- /library/other/cc.hpp
- /library/other/cc.hpp.html
title: other/cc.hpp
---
