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

// Codeforces - Codeforces Round 955 (Div. 2, with prizes from NEAR!)
// A. Soccer

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long x1;
        cin >> x1;
        long long y1;
        cin >> y1;
        long long x2;
        cin >> x2;
        long long y2;
        cin >> y2;
        cout << ((x1 - y1) * (x2 - y2) > 0 ? "YES" : "NO") << nl;
    }
    return 0;
}
