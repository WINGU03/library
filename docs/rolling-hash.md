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

閉区間[l, r) のハッシュを返す。

$O(1)$

## all get

```cpp
ll R.get()
```

S[0:] のハッシュを返す。

$O(1)$

## connect

```cpp
ll R.connect(ll s_hash, ll t_hash, ll t_len)
```

文字列S と 文字列T をこの順番で連結した文字列のハッシュ値を返す。

## lcp

```cpp
int R.lcp(int a,int b)
```

S[a:] と S[b:] の 最長共通部分接頭辞(LCP)を返す。

$O(logN)$

## lcp(other RollingHash)

```cpp
int R.lcp(RollingHash &other,int a,int b)
```

S[a:] と T[b:] の 最長共通部分接頭辞(LCP)を返す。

$O(logN)$

## suffix_array(ACL にあるので実質不要)

```cpp
vector<int> suffix_array()
```

S の 接尾辞配列(Suffix-Array)を返す。

$O(Nlog(N)^2)$
