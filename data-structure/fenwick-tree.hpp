template <class T>
struct fenwick_tree {
    int n;
    vector<T> d;
    fenwick_tree(int n) : n(n) {
        d.resize(n);
    }

    T sum(int r) {
        T s = 0;
        for (; r > 0; r -= r & -r) s += d[r - 1];
        return s;
    }

    T sum(int l, int r) { return sum(r) - sum(l); }

    void add(int idx, T x) {
        for (idx++; idx <= n; idx += idx & -idx) d[idx - 1] += x;
    }
};