vector<P> prime_factorize(ll n) {
    vector<P> res;
    for (int p = 2; ll(p) * p <= n; p++) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) {
            num++;
            n /= p;
        }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}