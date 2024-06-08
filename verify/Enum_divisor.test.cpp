#define PROBLEM "https://atcoder.jp/contests/abc180/tasks/abc180_c"

#include<bits/stdc++.h>
using namespace std;
#include "other/Macro"
#include "math/Enum_divisor"

int main(){
    int n;
    cin >> n;
    auto ans = enum_divisor(n);
    for(auto x : ans){
        cout << x << endl;
    }
    return 0;
}