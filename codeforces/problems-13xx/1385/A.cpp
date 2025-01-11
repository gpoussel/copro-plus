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

// Codeforces - Codeforces Round 656 (Div. 3)
// A. Three Pairwise Maximums

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
        long long z;
        cin >> z;
        if (x == y && y == z)
        {
            cout << "YES" << nl;
            cout << x << " " << x << " " << x << nl;
        }
        else if (x == y)
        {
            if (z > x)
            {
                cout << "NO" << nl;
            }
            else
            {
                cout << "YES" << nl;
                cout << x << " " << z << " " << z << nl;
            }
        }
        else if (y == z)
        {
            if (x > y)
            {
                cout << "NO" << nl;
            }
            else
            {
                cout << "YES" << nl;
                cout << x << " " << x << " " << y << nl;
            }
        }
        else if (x == z)
        {
            if (y > x)
            {
                cout << "NO" << nl;
            }
            else
            {
                cout << "YES" << nl;
                cout << y << " " << x << " " << y << nl;
            }
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
