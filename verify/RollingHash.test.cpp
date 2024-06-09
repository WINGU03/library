#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_A"

#include <bits/stdc++.h>
#include "other/Macro"
#include "string/RollingHash.cpp"

int main() {
    string T, P;
    cin >> T >> P;
    int N = T.size(), M = P.size();
    RollingHash RT(T), RP(P);
    rep(i, N) {
        int cur = RT.getLCP(RP, i, 0);
        if (cur == M) cout << i << endl;
    }
    return 0;
}