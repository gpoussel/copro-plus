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

// Codeforces - Codeforces Round 786 (Div. 3)
// A. Number Transformation

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int x;
        cin >> x;
        int y;
        cin >> y;
        if (x > y || y % x != 0)
        {
            cout << 0 << ' ' << 0 << nl;
            continue;
        }
        cout << 1 << ' ' << y / x << endl;
    }
    return 0;
}
