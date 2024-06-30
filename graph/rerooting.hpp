template <typename Cost>
struct Edge {
    int src, to;
    Cost cost;
    Edge(int s, int t, Cost c = 1) : src(s), to(t), cost(c) {}
    // デフォルトでは行き先を返す
    operator int() const { return to; }
};

template <typename Cost>
struct Graph : vector<vector<Edge<Cost>>> {
    Graph(int n) : vector<vector<Edge<Cost>>>(n) {}
    void add_edge(int s, int t, Cost c = 1) { (*this)[s].emplace_back(s, t, c); }
};

template <
    typename Cost,
    typename Data,
    Data (*merge)(Data, Data),
    Data (*e)(),
    Data (*leaf)(),
    Data (*apply)(Data, int, int, Cost)>
struct Rerooting : Graph<Cost> {
    // memo : 0を根としたときのiの部分木の値(i自身は含まれない)
    vector<Data> dp, memo;

    Rerooting(int n) : Graph<Cost>::Graph(n) {}

    vector<Data> run() {
        memo.resize((*this).size(), e());
        dp.resize((*this).size());
        dfs1(0, -1);
        dfs2(0, -1, e());
        return dp;
    }
    // 0を根とした木の全ての部分木について値を求める
    void dfs1(int c, int p) {
        bool upd = false;
        for (Edge<Cost>& d : (*this)[c]) {
            if (d != p) {
                dfs1(d, c);
                upd = true;
                memo[c] = merge(memo[c], apply(memo[d], d, c, d.cost));
            }
        }
        if (!upd) memo[c] = leaf();
    }
    // 行きがけ順で頂点の値を確定(valには、根の移動が行われるとき、元々根だった頂点の値が格納される)
    void dfs2(int c, int p, const Data& val) {
        vector<Data> ds{val};
        for (Edge<Cost>& d : (*this)[c]) {
            if (d != p) {
                ds.push_back(apply(memo[d], d, c, d.cost));
            }
        }
        int n = ds.size(), idx = 1;
        // 前からの累積と後ろからの累積
        vector<Data> head(n + 1, e()), tail(n + 1, e());
        for (int i = 1; i <= n; i++) head[i] = merge(head[i - 1], ds[i - 1]);
        for (int i = n - 1; i >= 0; i--) tail[i] = merge(tail[i + 1], ds[i]);
        // cの値は全ての子孫についての累積
        dp[c] = head[n];

        for (Edge<Cost>& d : (*this)[c]) {
            if (d != p) {
                Data sub = merge(head[idx], tail[idx + 1]);
                dfs2(d, c, apply(sub, c, d, d.cost));
                idx++;
            }
        }
    }
};