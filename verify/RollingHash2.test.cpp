#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B"

#include<bits/stdc++.h>
#include "other/Macro"
#include "string/RollingHash"

int main() {
    string T, P;
    cin >> T >> P;
    int N = T.size(), M = P.size();
    RollingHash RT(T), RP(P);
    rep(i, N - M + 1) {
        if(RT.get(i, i + M) == RP.get(0, M)){
            cout << i << endl;
        }
    }
    return 0;
}