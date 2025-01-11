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

// Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// A. LCM Problem

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long left;
        cin >> left;
        long long right;
        cin >> right;
        if (left * 2 > right)
        {
            cout << -1 << " " << -1 << nl;
        }
        else
        {
            cout << left << " " << left * 2 << nl;
        }
    }
    return 0;
}
