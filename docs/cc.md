---
title: 座標圧縮
documentation_of: ./other/cc.hpp
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