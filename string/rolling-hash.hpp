mt19937_64 r(time(0));
static const int mod1 = 1000000007, mod2 = 1000000009;
using mint1 = static_modint<mod1>;
using mint2 = static_modint<mod2>;
static const int base1 = r() % (mod1 - 4) + 2, base2 = r() % (mod2 - 4) + 2;

struct RollingHash {
    vector<mint1> hash1, power1;
    vector<mint2> hash2, power2;
    int n;

    explicit RollingHash(const string &S = "") {
        n = (int)S.size();
        hash1.assign(n + 1, 0), hash2.assign(n + 1, 0);
        power1.assign(n + 1, 1), power2.assign(n + 1, 1);
        for (int i = 0; i < n; ++i) {
            hash1[i + 1] = hash1[i] * base1 + S[i];
            hash2[i + 1] = hash2[i] * base2 + S[i];
            power1[i + 1] = power1[i] * base1;
            power2[i + 1] = power2[i] * base2;
        }
    }

    inline long long get(int l, int r) const {
        mint1 res1 = hash1[r] - hash1[l] * power1[r - l];
        mint2 res2 = hash2[r] - hash2[l] * power2[r - l];
        return (ll)res1.val() * mod2 + res2.val();
    }

    inline long long get() const {
        return (ll)hash1.back().val() * mod2 + hash2.back().val();
    }

    inline int getLCP(int a, int b) const {
        int len = min((int)hash1.size() - a, (int)hash1.size() - b);
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

    // get lcp of S[a:] and T[b:]
    inline int getLCP(const RollingHash &T, int a, int b) const {
        int len = min((int)hash1.size() - a, (int)hash1.size() - b);
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