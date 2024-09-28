---
title: 拡張ユークリッドの互除法
documentation_of: //math/extgcd.hpp
---

# extgcd

```cpp
long long extgcd(long long a, long long b, long long &x, long long &y)
```

gcd(a, b) を返す。
ax + by = gcd(a, b) を満たす x と y が格納される。