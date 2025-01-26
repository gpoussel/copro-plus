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

// Codeforces - Codeforces Round 620 (Div. 2)
// A. Two Rabbits

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
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        y -= x;
        if (y % (a + b) == 0)
        {
            cout << y / (a + b) << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }
    return 0;
}
