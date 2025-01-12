template <class M, auto op, auto e, class F, auto mapping, auto composition, auto id>
struct lazy_segtree {
    int n, h;
    vector<M> d;
    vector<F> lazy;
    lazy_segtree(int data_size) {
        int x = 1;
        while (data_size > (1 << x)) x++;
        n = 1 << x, h = x;
        d.resize(2 * n, e());
        lazy.resize(n, id());
    }

    void update(int idx) { d[idx] = op(d[2 * idx], d[2 * idx + 1]); }

    void all_apply(int idx, F f) {
        d[idx] = mapping(f, d[idx]);
        if (idx < n) lazy[idx] = composition(f, lazy[idx]);
    }

    void push(int idx) {
        all_apply(2 * idx, lazy[idx]);
        all_apply(2 * idx + 1, lazy[idx]);
        lazy[idx] = id();
    }

    void set(int idx, M x) {
        idx += n;
        for (int i = h; i >= 1; i--) push(idx >> i);
        d[idx] = x;
        for (int i = 1; i <= h; i++) update(idx >> i);
    }

    M prod(int l, int r) {
        l += n, r += n;
        for (int i = h; i >= 1; i--) {
            if (((l >> i) << i) != l) push(l >> i);
            if (((r >> i) << i) != r) push((r - 1) >> i);
        }
        M L = e(), R = e();
        for (; l < r; l >>= 1, r >>= 1) {
            if (l & 1) L = op(L, d[l++]);
            if (r & 1) R = op(d[--r], R);
        }
        return op(L, R);
    }

    M get(int idx) {
        idx += n;
        for (int i = h; i >= 1; i--) push(idx >> i);
        return d[idx];
    }

    M all_prod() { return d[1]; }

    void apply(int l, int r, F f) {
        l += n, r += n;
        for (int i = h; i >= 1; i--) {
            if (((l >> i) << i) != l) push(l >> i);
            if (((r >> i) << i) != r) push((r - 1) >> i);
        }
        {
            int l2 = l, r2 = r;
            for(; l < r; l >>= 1, r >>= 1) {
                if (l & 1) all_apply(l++, f);
                if (r & 1) all_apply(--r, f);
            }
            l = l2;
            r = r2;
        }
        for (int i = 1; i <= h; i++) {
            if (((l >> i) << i) != l) update(l >> i);
            if (((r >> i) << i) != r) update((r - 1) >> i);
        }
    }    

    void apply(int idx, F f) { apply(idx, idx + 1, f); }
};