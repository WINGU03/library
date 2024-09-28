#define PROBLEM "https://yukicoder.me/problems/no/2761"

#include <bits/stdc++.h>

#include "template.hpp"

#include "string/rolling-hash-tree.hpp"

int main() {
    int n, l, q;
    cin >> n >> l >> q;
    vector<string> s(n);
    cin >> s;
    vector<rolling_hash> rolling_hash(n);
    rep(i, n) {
        rolling_hash[i] = rolling_hash(s[i]);
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
                    rolling_hash[i].set(k, d);
                }
            }
        } else {
            string t;
            cin >> t;
            int m = t.size();
            rolling_hash rol(t);

            int ans = 0;
            rep(i, n) {
                if (rolling_hash[i].get(0, m) == rol.get(0, m)) ans++;
            }

            cout << ans << endl;
        }
    }
    return 0;
}