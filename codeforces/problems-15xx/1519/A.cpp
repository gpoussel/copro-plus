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

// Codeforces - Educational Codeforces Round 108 (Rated for Div. 2)
// A. Red and Blue Beans

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long red;
        cin >> red;
        long long blue;
        cin >> blue;
        long long difference;
        cin >> difference;
        cout << (min(red, blue) * (difference + 1) >= max(red, blue) ? "YES" : "NO") << nl;
    }
    return 0;
}
