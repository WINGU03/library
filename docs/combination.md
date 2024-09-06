---
title: 二項係数(mod)
documentation_of: //math/combination.hpp
---

mod 998244353 or 1000000007 の nCr を O(MAX) の前計算 -> 逐次 O(1) で求められる
※ #include "math/combination.hpp" の前に using mint = (modint998244353 or modint1000000007)

# コンストラクタ

```cpp
combination(int MAX)
```

# nCr

```cpp
mint com(int n, int r)
```