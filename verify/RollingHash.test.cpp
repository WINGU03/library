#define PROBLEM "https://judge.yosupo.jp/problem/zalgorithm"

#include <bits/stdc++.h>
using namespace std;
#include "other/Macro"
#include "string/RollingHash.cpp"

int main() {
    string s;
    cin >> s;
    RollingHash rol(s);
    vector<int> ans;
    rep(i, (int)s.size()) {
        ans.push_back(rol.getLCP(0, i));
    }
    cout << ans;
    return 0;
}