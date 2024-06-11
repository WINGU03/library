#define PROBLEM "https://yukicoder.me/problems/no/2761"

#include <bits/stdc++.h>

#include "template"

#include "string/segment-rolling-hash.hpp"

int main() {
    int n, l, q;
    cin >> n >> l >> q;
    vector<string> s(n);
    cin >> s;
    vector<SegmentRollingHash> RollingHash(n);
    rep(i, n) {
        RollingHash[i] = SegmentRollingHash(s[i]);
    }

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int k;
            char c, d;
            cin >> k >> c >> d;
            k--;
            rep(i, n) {
                if (s[i][k] == c) {
                    s[i][k] = d;
                    RollingHash[i].set(k, d);
                }
            }
        } else {
            string t;
            cin >> t;
            int m = t.size();
            ll cor1 = 0, cor2 = 0;
            rep(i, m) {
                cor1 = cor1 * base1 + t[i];
                cor1 %= mod1;
            }
            rep(i, m) {
                cor2 = cor2 * base2 + t[i];
                cor2 %= mod2;
            }

            int ans = 0;
            rep(i, n) {
                if (RollingHash[i].get(0, m) == cor1 * mod2 + cor2) ans++;
            }

            cout << ans << endl;
        }
    }
    return 0;
}