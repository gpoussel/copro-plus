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

// Codeforces - Codeforces Round 465 (Div. 2)
// A. Fafa and his Company

int main()
{
    int n;
    cin >> n;
    int ways_of_dividing = 0;
    for (int i = 1; i <= n / 2; ++i)
    {
        if ((n - i) % i == 0)
        {
            ways_of_dividing++;
        }
    }
    cout << ways_of_dividing << nl;
    return 0;
}
