#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B"

#include <bits/stdc++.h>
#include "template.hpp"
#include "other/next_combination.hpp"

int main() {
    int n, s;
    while (cin >> n >> s) {
        if (n == 0 and s == 0) exit(0);
        vector<int> p(n);
        iota(all(p), 1);
        int ans = 0;
        do {
            int cur = 0;
            rep(i, 3) cur += p[i];
            if (cur == s) ans++;
        } while (next_combination(all(p), 3));
        cout << ans << endl;
    }
    return 0;
}