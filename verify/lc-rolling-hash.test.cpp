#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_palindromes"

#include <bits/stdc++.h>

#include "template.hpp"

#include "string/rolling-hash.hpp"

int main() {
    string s;
    cin >> s;
    int n = s.size();

    RollingHash rol(s);

    reverse(all(s));
    RollingHash reverse_rol(s);

    rep(i, n - 1) {
        int ans1 = rol.lcp(reverse_rol, i, n - i - 1);
        int ans2 = rol.lcp(reverse_rol, i + 1, n - i - 1);

        cout << ans1 * 2 - 1 << " " << ans2 * 2 << " ";
    }
    cout << rol.lcp(reverse_rol, n - 1, 0) * 2 - 1 << endl;
    return 0;
}