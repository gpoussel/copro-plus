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

// Codeforces - Codeforces Round 820 (Div. 3)
// A. Two Elevators

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
        long long c;
        cin >> c;
        long long distance_first = abs(a - 1);
        long long distance_second = abs(b - c) + abs(c - 1);
        if (distance_first == distance_second)
        {
            cout << 3 << nl;
        }
        else if (distance_first > distance_second)
        {
            cout << 2 << nl;
        }
        else
        {
            cout << 1 << nl;
        }
    }
    return 0;
}
