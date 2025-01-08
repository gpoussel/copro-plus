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

// Codeforces - Codeforces Round 270
// A. Design Tutorial: Learn from Math

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "4 " << n - 4 << nl;
    }
    else
    {
        cout << "9 " << n - 9 << nl;
    }
    return 0;
}
