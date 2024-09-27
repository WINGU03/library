random_device rd;
mt19937_64 rnd(rd());
static constexpr long long mod = (1LL << 61) - 1;
static const long long base = rnd() % (mod - 4) + 2;
struct RollingHash {
    vector<long long> hash, power;
    int n;
    string s;

    inline long long add(long long a, long long b) const {
        if ((a += b) >= mod) a -= mod;
        return a;
    }

    inline long long mul(long long a, long long b) const {
        __int128_t x = (__int128_t)a * b;
        return add(x >> 61, x & mod);
    }

    explicit RollingHash(const string& S) {
        n = (int)S.size();
        s = S;
        hash.resize(n + 1, 0);
        power.resize(n + 1, 1);
        for (int i = 0; i < n; i++) {
            hash[i + 1] = add(mul(hash[i], base), S[i]);
            power[i + 1] = mul(power[i], base);
        }
    }

    inline long long get(int l, int r) const {
        return add(hash[r], mod - mul(hash[l], power[r - l]));
    }

    inline long long get() const {
        return hash.back();
    }

    inline long long connect(long long hash1, long long hash2, int hash2_len) const {
        return add(mul(hash1, power[hash2_len]), hash2);
    }

    inline int lcp(int a, int b) const {
        int len = min((int)hash.size() - a, (int)hash.size() - b);
        int left = 0, right = len;
        while (right - left > 1) {
            int mid = (left + right) / 2;
            if (get(a, a + mid) != get(b, b + mid)) {
                right = mid;
            } else {
                left = mid;
            }
        }
        return left;
    }

    inline int lcp(const RollingHash& T, int a, int b) const {
        int len = min((int)hash.size() - a, (int)T.hash.size() - b);
        int left = 0, right = len;
        while (right - left > 1) {
            int mid = (left + right) / 2;
            if (get(a, a + mid) != T.get(b, b + mid)) {
                right = mid;
            } else {
                left = mid;
            }
        }
        return left;
    }
};