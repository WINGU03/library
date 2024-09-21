#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C"

#include <bits/stdc++.h>
#include "template.hpp"
#include "math/eratosthenes.hpp"

int main() {
    int n;
    cin >> n;
    auto p = sieve((int)1e8);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (p[x]) ans++;
    }
    cout << ans << endl;
    return 0;
}