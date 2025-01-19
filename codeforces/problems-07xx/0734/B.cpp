#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9

// Codeforces - Codeforces Round 379 (Div. 2)
// B. Anton and Digits

int main()
{
    int k2;
    cin >> k2;
    int k3;
    cin >> k3;
    int k5;
    cin >> k5;
    int k6;
    cin >> k6;
    int count_256 = min(k2, min(k5, k6));
    int count_32 = min(k2 - count_256, k3);
    cout << 256 * count_256 + 32 * count_32 << nl;
    return 0;
}
