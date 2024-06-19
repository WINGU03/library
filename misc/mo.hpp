template <class M>
struct Mo {
    using T = typename M::T;
    int backet;
    vector<int> left, right, order;
    Mo(int N, int Q) {
        order.resize(Q);
        backet = max<int>(1, (double)(N) / max<double>(1, sqrt(Q * 2.0 / 3)));
        iota(order.begin(), order.end(), 0);
    }
    void add_query(int lf, int ri) {
        left.emplace_back(lf);
        right.emplace_back(ri);
    }
    vector<T> run() {
        vector<T> answer(order.size());
        sort(order.begin(), order.end(), [&](int a, int b) {
            int ab = left[a] / backet, bb = left[b] / backet;
            if (ab != bb) return ab < bb;
            if (ab & 1) return right[a] < right[b];
            return right[a] > right[b];
        });
        int nl = 0, nr = 0;
        for (int i : order) {
            while (nl > left[i]) {
                M::add_left(--nl);
            }
            while (right[i] > nr) {
                M::add_right(nr++);
            }
            while (nl < left[i]) {
                M::del_left(nl++);
            }
            while (right[i] < nr) {
                M::del_right(--nr);
            }
            answer[i] = M::res(i);
        }
        return answer;
    }
};