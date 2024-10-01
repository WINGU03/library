#include <bits/stdc++.h>
using namespace std;
#include <atcoder/modint>
using namespace atcoder;
#ifdef DEFINED_ONLY_IN_LOCAL
#include <dump.hpp>
#define dump(...) cpp_dump(__VA_ARGS__)
#else
#undef dump
#define dump(...)
#endif
#define rep(i, n) for (int i = 0; i < n; i++)
template <class T> istream& operator>>(istream& I, vector<T>& V) { for (T& X : V) I >> X; return I; }