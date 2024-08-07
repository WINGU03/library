#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#ifdef DEFINED_ONLY_IN_LOCAL
#include <dump.hpp>
#define dump(...) cpp_dump(__VA_ARGS__)
#else
#undef dump
#define dump(...)
#endif
template<class T>inline bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<class T>inline bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}
#define rep1(i,a) for(int i=0;i<(int)(a);i++)
#define rep2(i,a,b) for(int i =(int)(a);i<(int)(b);i++)
#define rep3(i,a,b,c) for(int i=(int)(a);i<(int)(b);i+=(int)(c))
#define overloadRep(a,b,c,d,e,...)e
#define rep(...) overloadRep(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep(i,a,b) for(int i=(int)(a);i<=(int)(b);i++)
#define drep(i,a,b) for(int i=(int)(a);i>=(int)(b);i--)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
using ll = long long;
const int inf=1e9;
const ll INF=1e18;
const int dx[4]={0,1,0,-1};
const int dy[4]={1,0,-1,0};
const int ddx[8]={1,1,1,0,-1,-1,-1,0};
const int ddy[8]={1,0,-1,-1,-1,0,1,1};
bool bit(ll x, int p){return (x>>p)&1;}
bool out(int ni, int nj, int h, int w){return (ni<0 or ni>=h or nj<0 or nj>=w);}
int pc(ll x){return __builtin_popcountll(x);}
class Random {
   public:
    mt19937 mt;
    uniform_real_distribution<double> dd_{0, 1.0};
    Random(const int seed = 0): mt(mt19937(seed)) {}
    inline int nextInt(const int l,const int r) {uniform_int_distribution<int> di(l,r);return di(mt);}
    inline double nextDouble() {return dd_(mt);}
    inline double nextLog() {return log(dd_(mt));}
};
Random rnd{};
using time_data = high_resolution_clock::time_point;
#define now_time high_resolution_clock::now()
#define change_mil(a) duration_cast<milliseconds>(a).count()
#define change_mic(a) duration_cast<microseconds>(a).count()
class TimeKeeperDouble {
   private:
    time_data start_time_;
    double time_threshold_;
    double now_time_ = 0;
   public:
    TimeKeeperDouble(const double time_threshold): start_time_(now_time), time_threshold_(time_threshold) {}
    void setNowTime() {auto diff = now_time - this->start_time_;this->now_time_ = change_mic(diff) * 1e-3;}
    double getNowTime() const {return this->now_time_;}
    bool isTimeOver() const {return now_time_ >= time_threshold_;}
};