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

// Codeforces - Codeforces Round 653 (Div. 3)
// A. Required Remainder

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long x;
        cin >> x;
        long long y;
        cin >> y;
        long long z;
        cin >> z;
        long long current_mod = z % x;
        if (current_mod == y)
        {
            cout << z << nl;
        }
        else if (current_mod > y)
        {
            cout << z - current_mod + y << nl;
        }
        else
        {
            cout << z - current_mod - (x - y) << nl;
        }
    }
    return 0;
}
