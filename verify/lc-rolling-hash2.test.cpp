#define PROBLEM "https://judge.yosupo.jp/problem/suffixarray"

#include <bits/stdc++.h>

#include "template.hpp"

#include "string/rolling-hash.hpp"

int main(){
    string s;
    cin >> s;
    RollingHash rol(s);
    auto ans = rol.suffix_array();
    cout << ans;
    return 0;
}