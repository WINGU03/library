vector<bool> sieve(int N) {
    vector<bool> isprime(N + 1, true);
    isprime[0] = false;
    isprime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isprime[i] == false) continue;
        for (int j = i * 2; j <= N; j += i) {
            isprime[j] = false;
        }
    }
    return isprime;
}