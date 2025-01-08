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

// Codeforces - Codeforces Round 667 (Div. 3)
// A. Yet Another Two Integers Problem

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long max_number = max(a, b);
        long long min_number = min(a, b);
        long long diff = max_number - min_number;
        cout << diff / 10 + (diff % 10 != 0) << nl;
    }
    return 0;
}
