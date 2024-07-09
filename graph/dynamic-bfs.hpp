template <class T, class f>
int dynamic_bfs(T& s, f& nxt, T& g) {
    if (s == g) return 0;
    map<T, int> dist;
    queue<T> q;
    dist[s] = 0;
    q.push(s);
    while (!q.empty()) {
        auto v = q.front();
        q.pop();
        for (const auto& u : nxt(v)) {
            if (dist.count(u)) continue;
            if (u == g) return dist[v] + 1;
            dist[u] = dist[v] + 1;
            q.push(u);
        }
    }
    return -1;
}