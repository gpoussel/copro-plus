#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Beta Round 47
// C. Happy Farm 5

const long long INF = 1e9;

int main()
{
    int rmax = -INF;
    int rmin = INF;
    int lmax = -INF;
    int lmin = INF;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        rmax = max(rmax, x + y);
        rmin = min(rmin, x + y);
        lmax = max(lmax, x - y);
        lmin = min(lmin, x - y);
    }
    cout << rmax - rmin + lmax - lmin + 4 << nl;
    return 0;
}
