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
    void add_query(int left_id, int right_id) {
        left.emplace_back(left_id);
        right.emplace_back(right_id);
    }
    vector<T> run() {
        vector<T> answer(order.size());
        sort(order.begin(), order.end(), [&](int a, int b) {
            int a_block = left[a] / backet, b_block = left[b] / backet;
            if (a_block != b_block) return a_block < b_block;
            if (a_block & 1) return right[a] < right[b];
            return right[a] > right[b];
        });
        int now_left = 0, now_right = 0;
        for (int i : order) {
            while (now_left > left[i]) {
                M::add_left(--now_left);
            }
            while (right[i] > now_right) {
                M::add_right(now_right++);
            }
            while (now_left < left[i]) {
                M::del_left(now_left++);
            }
            while (right[i] < now_right) {
                M::del_right(--now_right);
            }
            answer[i] = M::res(i);
        }
        return answer;
    }
};