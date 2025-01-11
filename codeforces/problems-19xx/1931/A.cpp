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

// Codeforces - Codeforces Round 925 (Div. 3)
// A. Recovering a Small String

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        if (n <= 27)
        {
            cout << "aa" << (char)('a' + n - 3) << nl;
        }
        else if (n <= 53)
        {
            cout << "a" << (char)('a' + n - 28) << "z" << nl;
        }
        else
        {
            cout << (char)('a' + n - 53) << "zz" << nl;
        }
    }
    return 0;
}
