#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/0070"

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
    vector<int> p(10);
    iota(all(p), 0);
    while (cin >> n >> s) {
        int ans = 0;
        do {
            vector<int> now;
            rep(i, n) now.push_back(p[i]);
            do {
                int cur = 0;
                for (int i = 1; i <= n; i++) cur += i * now[i - 1];
                if (cur == s) ans++;
            } while (next_permutation(all(now)));
        } while (next_combination(all(p), n));
        cout << ans << endl;
    }
    return 0;
}