---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/aizu-cc.test.cpp
    title: verify/aizu-cc.test.cpp
  - icon: ':x:'
    path: verify/yosupo-mo1.test.cpp
    title: verify/yosupo-mo1.test.cpp
  - icon: ':x:'
    path: verify/yosupo-mo2.test.cpp
    title: verify/yosupo-mo2.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"misc/cc.hpp\"\ntemplate <typename T = int>\nstruct CC {\n\
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
  path: misc/cc.hpp
  requiredBy: []
  timestamp: '2024-06-19 21:24:21+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - verify/aizu-cc.test.cpp
  - verify/yosupo-mo2.test.cpp
  - verify/yosupo-mo1.test.cpp
documentation_of: misc/cc.hpp
layout: document
title: "\u5EA7\u6A19\u5727\u7E2E"
---

数列を座標圧縮し、
- ある値$x$が座標圧縮後、何番目か
- 座標圧縮後の$i$番目の値
- 座標圧縮後の配列サイズ
を$O(1)$で取得できる。

# コンストラクタ

```cpp
CC<T> c
```

- $T$はint / ll

# add

```cpp
void c.add(T x)
```

- $O(1)$

# ()

```cpp
int c(T x)
```

座標圧縮後、$x$が配列内で何番目の値かを返す

- $O(1)$

## []

```cpp
T c[i]
```

座標圧縮後、$i$番目の値を返す

- $O(1)$

## size()

```cpp
int c.size()
```

座標圧縮後の配列サイズを返す

- $O(1)$