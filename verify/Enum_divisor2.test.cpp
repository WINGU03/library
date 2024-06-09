#define PROBLEM "https://yukicoder.me/problems/no/888"

#include <bits/stdc++.h>
#include "other/Macro"
#include "math/Enum_divisor"

int main(){
    ll n;
    cin >> n;
    auto divisors = enum_divisor(n);
    ll ans = 0;
    for (auto divisor : divisors) {
        ans += divisor;
    }
    cout << ans << endl;
    return 0;
}