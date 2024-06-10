template <typename T = int>
struct CC {
    bool initialized;
    vector<T> xs;
    unordered_map<T, int> mp;
    CC() : initialized(false) {}
    void add(T x) {
        xs.push_back(x);
    }
    void init() {
        sort(xs.begin(), xs.end());
        xs.erase(unique(xs.begin(), xs.end()), xs.end());
        for (int i = 0; i < (int)xs.size(); i++) {
            mp[xs[i]] = i;
        }
        initialized = true;
    }
    int operator()(T x) {
        if (!initialized) init();
        return mp[x];
    }
    T operator[](int i) {
        if (!initialized) init();
        return xs[i];
    }
    int size() {
        if (!initialized) init();
        return xs.size();
    }
};