#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B"

#include<bits/stdc++.h>
#include "template.hpp"
#include "string/rolling-hash.hpp"

int main() {
    string T, P;
    cin >> T >> P;
    int N = T.size(), M = P.size();
    rolling_hash RT(T), RP(P);
    rep(i, N - M + 1) {
        if(RT.get(i, i + M) == RP.get()) {
            cout << i << endl;
        }
    }
    return 0;
}