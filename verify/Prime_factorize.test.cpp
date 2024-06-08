#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A"

#include <bits/stdc++.h>
#include "other/Macro"
#include "math/Prime_factorize"

int main() {
    int n;
    cin >> n;
    auto p = prime_factorize(n);
    cout << n << ':';
    for (auto [number, val] : p) {
        rep(i, val) cout << " " << number;
    }
    cout << endl;
    return 0;
}