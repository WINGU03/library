#define PROBLEM "https://yukicoder.me/problems/no/2761"

#include <bits/stdc++.h>

#include "template.hpp"

#include "string/segment-tree-rolling-hash.hpp"

int main() {
    int n, l, q;
    cin >> n >> l >> q;
    vector<string> s(n);
    cin >> s;
    vector<rolling_hash> rs;
    rep(i, n) {
        rs.push_back(rolling_hash(s[i]));
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
                    rs[i].set(k, d);
                }
            }
        } else {
            string t;
            cin >> t;
            int m = t.size();
            rolling_hash rt(t);

            int ans = 0;
            rep(i, n) {
                if (rs[i].get(0, m) == rt.get(0, m)) ans++;
            }

            cout << ans << endl;
        }
    }
    return 0;
}