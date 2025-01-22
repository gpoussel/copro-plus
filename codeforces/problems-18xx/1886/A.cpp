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

// Codeforces - Educational Codeforces Round 156 (Rated for Div. 2)
// A. Sum of Three

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long n;
        cin >> n;
        if (n % 3 == 0 && n >= 12)
        {
            cout << "YES" << nl;
            cout << 1 << ' ' << 4 << ' ' << n - 5 << nl;
        }
        else if (n % 3 > 0 && n >= 7)
        {
            cout << "YES" << nl;
            cout << 1 << ' ' << 2 << ' ' << n - 3 << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
