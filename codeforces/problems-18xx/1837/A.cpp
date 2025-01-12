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

// Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// A. Grasshopper on a Line

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int x;
        cin >> x;
        int k;
        cin >> k;
        if (x % k == 0)
        {
            cout << 2 << nl;
            cout << x - 1 << " " << 1 << nl;
        }
        else
        {
            cout << 1 << nl;
            cout << x << nl;
        }
    }
    return 0;
}
