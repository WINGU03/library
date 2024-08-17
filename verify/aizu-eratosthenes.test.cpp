#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/0009"

#include <bits/stdc++.h>
#include "template.hpp"
#include "math/eratosthenes.hpp"

using P = pair<int, int>;
using T = tuple<int, int, int>;
int main() {
    int n;
    while (cin >> n) {
        auto p = sieve(n);
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            if (p[i]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}