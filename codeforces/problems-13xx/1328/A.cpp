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

// Codeforces - Codeforces Round 629 (Div. 3)
// A. Divisibility Problem

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;

        if (a % b == 0)
        {
            cout << 0 << nl;
        }
        else
        {
            cout << b - a % b << nl;
        }
    }

    return 0;
}
