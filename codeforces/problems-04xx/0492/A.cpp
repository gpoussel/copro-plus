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

// Codeforces - Codeforces Round 280 (Div. 2)
// A. Vanya and Cubes

int main()
{
    int n;
    cin >> n;

    int height = 0;
    int cubes_used = 0;
    while (true)
    {
        int cubes_on_level = height * (height + 1) / 2;
        if (cubes_used + cubes_on_level <= n)
        {
            cubes_used += cubes_on_level;
            height++;
        }
        else
        {
            break;
        }
    }
    cout << height - 1 << nl;
    return 0;
}
