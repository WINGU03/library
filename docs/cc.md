---
title: 座標圧縮
documentation_of: //misc/cc.hpp
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