#define PROBLEM "https://yukicoder.me/problems/no/888"

#include <bits/stdc++.h>
#include "template.hpp"
#include "math/enum-divisor.hpp"

int main(){
    long long n;
    cin >> n;
    auto divisors = enum_divisor(n);
    long long ans = 0;
    for (auto divisor : divisors) {
        ans += divisor;
    }
    cout << ans << endl;
    return 0;
}