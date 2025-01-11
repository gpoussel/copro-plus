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

// Codeforces - Codeforces Round 624 (Div. 3)
// A. Add Odd or Subtract Even

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        if (a == b)
        {
            cout << 0 << nl;
        }
        else if (a < b)
        {
            cout << 2 - (b - a) % 2 << nl;
        }
        else if (a > b)
        {
            cout << 1 + (a - b) % 2 << nl;
        }
    }
    return 0;
}
