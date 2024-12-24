#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_E"

#include <bits/stdc++.h>
#include "template.hpp"

#include <atcoder/modint>
using mint = atcoder::modint1000000007;
#include "math/combination.hpp"

int main() {
    int n, k;
    cin >> n >> k;
    combination c(k);
    cout << c.com(k, n).val() << endl;
    return 0;
}