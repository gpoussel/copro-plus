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

// Codeforces - Codeforces Round 634 (Div. 3)
// A. Candies and Two Sisters

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;

        cout << n / 2 - (1 - n % 2) << nl;
    }
    return 0;
}
