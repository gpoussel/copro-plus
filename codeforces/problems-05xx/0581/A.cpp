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

// Codeforces - Codeforces Round 322 (Div. 2)
// A. Vasya the Hipster

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2 << nl;
    return 0;
}
