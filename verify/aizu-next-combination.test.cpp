#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_B"

#include <bits/stdc++.h>
#include "template.hpp"

template <typename T>
bool next_combination(const T first, const T last, int k) {
    const T subset = first + k;
    if (first == last || first == subset || last == subset) {
        return false;
    }
    T src = subset;
    while (first != src) {
        src--;
        if (*src < *(last - 1)) {
            T dest = subset;
            while (*src >= *dest) {
                dest++;
            }
            iter_swap(src, dest);
            rotate(src + 1, dest + 1, last);
            rotate(subset, subset + (last - dest) - 1, last);
            return true;
        }
    }
    rotate(first, subset, last);
    return false;
}

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