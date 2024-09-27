---
title: Rolling Hash Tree
documentation_of: //string/rolling-hash-tree.hpp
---

## コンストラクタ

```cpp
(1) SegmentRollingHash seg(string s) // reverse off
(2) SegmentRollingHash seg(string s, true) // reverse on
```

(1)では、文字列を反対方向から見たハッシュを取らないため、定数倍がよくなる。
(2)では、回文判定が行える。

## set

```cpp
void set(int i, char c)
```

文字列の一点更新

## get

```cpp
long long get(int l, int r)
```

閉区間[l, r)のハッシュ値を返す。

## rget

```cpp
long long rget(int l, int r)
```

閉区間[l, r)を逆から見たハッシュ値を返す。