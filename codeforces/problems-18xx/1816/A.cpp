#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Round 865 (Div. 2)
// A. Ian Visits Mary

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int a, b;
        cin >> a >> b;

        if (a > 1)
        {
            cout << 2 << nl;
            cout << a - 1 << " " << 1 << nl;
            cout << a << " " << b << nl;
        }
        else
        {
            cout << 1 << nl;
            cout << a << " " << b << nl;
        }
    }
    return 0;
}
