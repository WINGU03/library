#include <bits/stdc++.h>
using namespace std;
#include <atcoder/modint>
using namespace atcoder;
#ifdef local
#include <debug.hpp>
#else
#define debug(...)
#endif
#define rep(i, n) for (int i = 0; i < n; i++)
template <class T> istream& operator>>(istream& I, vector<T>& V) {for (T& X : V) I >> X; return I;}
template <class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}
template <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}