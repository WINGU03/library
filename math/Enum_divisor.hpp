vector<ll> enum_divisor(ll n) {
    vector<ll> res;
    for (int i = 1; ll(i) * i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);
            ll j = n / i;
            if (j != i) res.push_back(j);
        }
    }
    sort(res.begin(), res.end());
    return res;
}