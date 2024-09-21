template <class M, auto op, auto e>
struct segtree {
    int n;
    vector<int> d;
    segtree(int data_size) {
        int x = 1;
        while (data_size > (1 << x)) x++;
        n = 1 << x;
        d.resize(2 * n, e());
    }

    void set(int idx, M x) {
        idx += n;
        d[idx] = x;
        while (idx >>= 1) d[idx] = op(d[2 * idx], d[2 * idx + 1]);
    }

    M get(int idx) { return d[idx + n]; }

    M operator[](int idx) { return get(idx); }

    M prod(int l, int r) {
        M L = e(), R = e();
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l & 1) L = op(L, d[l++]);
            if (r & 1) R = op(d[--r], R);
        }
        return op(L, R);
    }

    M all_prod() { return d[1]; }
};