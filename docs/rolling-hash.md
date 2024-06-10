---
title: Rolling Hash
documentation_of: //string/rolling-hash.hpp
---

## コンストラクタ

```cpp
RollingHash R(string s)
```

## get

```cpp
ll R.get(int l, int r)
```

## all get

```cpp
ll R.get()
```

## getLCP

```cpp
int R.getLCP(int l,int r)
```

## getLCP(other RollingHash)

```cpp
int R.getLCP(RollingHash &other,int l,int r)
```