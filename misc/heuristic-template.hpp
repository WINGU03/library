#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#ifdef DEFINED_ONLY_IN_LOCAL
#include <dump.hpp>
#define dump(...) cpp_dump(__VA_ARGS__)
#else
#undef dump
#define dump(...)
#endif
class TimeKeeperDouble {
   private:
    chrono::high_resolution_clock::time_point start_time_;
    double time_threshold_;
    double now_time_ = 0;
   public:
    TimeKeeperDouble(const double time_threshold) : start_time_(chrono::high_resolution_clock::now()), time_threshold_(time_threshold) {}
    void setNowTime() {auto diff = chrono::high_resolution_clock::now() - this->start_time_; this->now_time_ = chrono::duration_cast<chrono::microseconds>(diff).count() * 1e-3;}
    double getNowTime() const {return this->now_time_;}
    bool isTimeOver() const {return now_time_ >= time_threshold_;}
};
class Random {
   public:
    mt19937 mt;
    uniform_real_distribution<double> dd_{0, 1.0};
    Random(const int seed = 0): mt(mt19937(seed)) {}
    inline int nextInt(const int l, const int r) {uniform_int_distribution<int> di(l,r); return di(mt);} // l <= x <= r
    inline double nextDouble() {return dd_(mt);} // 0 < x < 1.0
    inline double nextLog() {return log(dd_(mt));} // 0 < x < 1.0 (log)
};
Random rnd{};

#define rep(i, a) for (int i = 0; i < a; i++)