#include <bits/stdc++.h>
using namespace std;
#include <atcoder/modint>
using namespace atcoder;
#ifdef local
#include <cpp-dump.hpp>
#define dump cpp_dump
#else
#undef dump
#define dump(...)
#endif
#define rep(i, n) for (int i = 0; i < n; i++)
template <class T> istream& operator>>(istream& I, vector<T>& V) { for (T& X : V) I >> X; return I; }