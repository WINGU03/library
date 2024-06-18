---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/aizu-cc.test.cpp
    title: verify/aizu-cc.test.cpp
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
  - verify/aizu-cc.test.cpp
documentation_of: other/cc.hpp
layout: document
title: "\u5EA7\u6A19\u5727\u7E2E"
---

## コンストラクタ

```cpp
CC c;
```

long long型である必要がある場合

```cpp
CC<long long> c;
```

## ()

```cpp
int c(T x)
```

座標圧縮後、$x$が配列内で何番目の値かを返す

## []

```cpp
T c[i]
```

座標圧縮後、$i$番目の値を返す

## size()

```cpp
int c.size()
```

座標圧縮後の配列サイズを返す