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
// A. Domino piling

int main()
{
    int m, n;
    cin >> m >> n;
    if (n % 2 == 0 || m % 2 == 0)
    {
        cout << (m * n) / 2 << nl;
    }
    else
    {
        cout << (m * n - 1) / 2 << nl;
    }
    return 0;
}
