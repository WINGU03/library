mt19937_64 r(time(0));
static constexpr ll mod = (1LL << 61) - 1;
static const ll base = r() % (mod - 4) + 2;

struct RollingHash {
    using i128 = __int128_t;
    vector<ll> hash, power;
    int n;
    string s;

    inline ll add(ll a, ll b) const {
        if ((a += b) >= mod) a -= mod;
        return a;
    }

    inline ll mul(ll a, ll b) const {
        i128 x = (i128)a * b;
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

    inline ll get(int l, int r) const {
        return add(hash[r], mod - mul(hash[l], power[r - l]));
    }

    inline ll get() const {
        return hash.back();
    }

    inline ll connect(ll hash1, ll hash2, int hash2_len) const {
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
        int len = min((int)hash.size() - a, (int)hash.size() - b);
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