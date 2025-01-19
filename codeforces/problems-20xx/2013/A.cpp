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

// Codeforces - Codeforces Round 973 (Div. 2)
// A. Zhan's Blender

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long n;
        cin >> n;
        long long x;
        cin >> x;
        long long y;
        cin >> y;
        long long iteration_size = min(x, y);
        cout << (long long)ceil((double)n / (double)iteration_size) << nl;
    }
    return 0;
}
