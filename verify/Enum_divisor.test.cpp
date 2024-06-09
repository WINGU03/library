#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D&lang=jp"

#include <bits/stdc++.h>
#include "other/Macro"
#include "math/Enum_divisor"

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    auto divisors = enum_divisor(c);
    int ans = 0;
    for (int i = a; i <= b; i++) {
        bool ok = false;
        for (auto divisor : divisors) {
            if (i == divisor) ok = true;
        }
        if (ok) ans++;
    }
    cout << ans << endl;
    return 0;
}