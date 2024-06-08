---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"other/CC.cpp\"\ntemplate<typename T=int>\nstruct CC {\n\
    \  bool initialized;\n  vector<T> xs;\n  CC(): initialized(false) {}\n  void add(T\
    \ x) { xs.push_back(x);}\n  void init() {\n    sort(xs.begin(), xs.end());\n \
    \   xs.erase(unique(xs.begin(),xs.end()),xs.end());\n    initialized = true;\n\
    \  }\n\t// x\u304C\u5EA7\u5727\u5F8C\u4F55\u756A\u76EE\u304B\u3092\u8FD4\u3059\
    \n  int operator()(T x) {\n    if (!initialized) init();\n    return upper_bound(xs.begin(),\
    \ xs.end(), x) - xs.begin() - 1;\n  }\n    // \u5EA7\u5727\u5F8C\u306Ei\u756A\u76EE\
    \u306E\u5024\u3092\u8FD4\u3059\n  T operator[](int i) {\n    if (!initialized)\
    \ init();\n    return xs[i];\n  }\n    // \u5EA7\u5727\u5F8C\u306E\u30B5\u30A4\
    \u30BA\u3092\u8FD4\u3059\n  int size() {\n    if (!initialized) init();\n    return\
    \ xs.size();\n  }\n};\n"
  code: "template<typename T=int>\nstruct CC {\n  bool initialized;\n  vector<T> xs;\n\
    \  CC(): initialized(false) {}\n  void add(T x) { xs.push_back(x);}\n  void init()\
    \ {\n    sort(xs.begin(), xs.end());\n    xs.erase(unique(xs.begin(),xs.end()),xs.end());\n\
    \    initialized = true;\n  }\n\t// x\u304C\u5EA7\u5727\u5F8C\u4F55\u756A\u76EE\
    \u304B\u3092\u8FD4\u3059\n  int operator()(T x) {\n    if (!initialized) init();\n\
    \    return upper_bound(xs.begin(), xs.end(), x) - xs.begin() - 1;\n  }\n    //\
    \ \u5EA7\u5727\u5F8C\u306Ei\u756A\u76EE\u306E\u5024\u3092\u8FD4\u3059\n  T operator[](int\
    \ i) {\n    if (!initialized) init();\n    return xs[i];\n  }\n    // \u5EA7\u5727\
    \u5F8C\u306E\u30B5\u30A4\u30BA\u3092\u8FD4\u3059\n  int size() {\n    if (!initialized)\
    \ init();\n    return xs.size();\n  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: other/CC.cpp
  requiredBy: []
  timestamp: '2024-06-08 10:03:27+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/CC.cpp
layout: document
redirect_from:
- /library/other/CC.cpp
- /library/other/CC.cpp.html
title: other/CC.cpp
---
