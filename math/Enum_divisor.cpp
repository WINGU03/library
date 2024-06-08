#include <algorithm>
#include <iostream>
#include <vector>

std::vector<long long> enum_divisor(long long n) {
    std::vector<long long> res;
    for (long long i = 1LL; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            long long j = n / i;
            if (j != i) res.push_back(j);
        }
    }
    std::sort(res.begin(), res.end());
    return res;
}