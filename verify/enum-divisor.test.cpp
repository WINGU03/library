#define PROBLEM "https://yukicoder.me/problems/no/888"

#include <bits/stdc++.h>
#include "template.hpp"
#include "math/enum-divisor.hpp"

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