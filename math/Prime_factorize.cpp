#pragma once

#include <iostream>
#include <vector>

std::vector<std::pair<long long, long long> > prime_factorize(long long n) {
    std::vector<std::pair<long long, long long> > res;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) {
            ++num;
            n /= p;
        }
        res.push_back(std::make_pair(p, num));
    }
    if (n != 1) res.push_back(std::make_pair(n, 1));
    return res;
}