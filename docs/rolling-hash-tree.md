---
title: Rolling Hash Tree
documentation_of: ./string/rolling-hash-tree.hpp
---

## コンストラクタ

```cpp
(1) SegmentRollingHash seg(string s) // reverse x
(2) SegmentRollingHash seg(string s, true) // reverse o
```

(1)では、文字列を反対方向から見たハッシュを取らないため、定数倍がよくなる。
(2)では、回文判定が行える。

## set

```cpp
void seg.set(int i, char c)
```

文字列の一点更新

## get

```cpp
ll get(int l, int r)
```

閉区間[l, r)のハッシュ取得

## r_get

```cpp
ll r_get(int l, int r)
```

閉区間[l, r)の逆ハッシュ取得