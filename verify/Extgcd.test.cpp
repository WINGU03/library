#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E"

#include <bits/stdc++.h>
using namespace std;
#include "math/Extgcd"
#include "other/Macro"

int main() {
    int a, b;
    cin >> a >> b;
    ll x, y;
    extgcd(a, b, x, y);
    cout << x << " " << y << endl;
    return 0;
}