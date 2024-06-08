template<typename T=int>
struct CC {
  bool initialized;
  vector<T> xs;
  unordered_map<T, int> mp;
  CC(): initialized(false) {}
  void add(T x) { xs.push_back(x);}
  void init() {
    sort(xs.begin(), xs.end());
    xs.erase(unique(xs.begin(),xs.end()),xs.end());
    for(int i = 0; i < (int)xs.size(); i++){
      mp[xs[i]] = i;
    }
    initialized = true;
  }
	// xが座圧後何番目かを返す
  int operator()(T x) {
    if (!initialized) init();
    return mp[x];
  }
    // 座圧後のi番目の値を返す
  T operator[](int i) {
    if (!initialized) init();
    return xs[i];
  }
    // 座圧後のサイズを返す
  int size() {
    if (!initialized) init();
    return xs.size();
  }
};