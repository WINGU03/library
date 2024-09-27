vector<long long> enum_divisor(long long n) {
    vector<long long> res;
    for (int i = 1; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);
            long long j = n / i;
            if (j != i) res.push_back(j);
        }
    }
    sort(res.begin(), res.end());
    return res;
}