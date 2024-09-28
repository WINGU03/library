---
title: Rolling Hash(一点変更反転可能)
documentation_of: //string/segment-tree-rolling-hash.hpp
---

## コンストラクタ

```cpp
(1) rolling_hash seg(string s) // reverse off
(2) rolling_hash seg(string s, true) // reverse on
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