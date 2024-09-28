---
title: Rolling Hash
documentation_of: //string/rolling-hash.hpp
---

## コンストラクタ

```cpp
rolling_hash R(string s)
```

## get

```cpp
long long get(int l, int r)
```

閉区間[l, r) のハッシュを返す。

$O(1)$

## all get

```cpp
long long get()
```

S[0:] のハッシュを返す。

$O(1)$

## connect

```cpp
long long connect(long long S_hash, long long T_hash, long long T_len)
```
$O(1)$

文字列S と 文字列T をこの順番で連結した文字列のハッシュ値を返す。

## lcp

```cpp
int lcp(int a,int b)
```

S[a:] と S[b:] の 最長共通部分接頭辞(LCP)を返す。

$O(logN)$

## lcp(other RollingHash)

```cpp
int lcp(RollingHash &T,int a,int b)
```

S[a:] と T[b:] の 最長共通部分接頭辞(LCP)を返す。

$O(logN)$
