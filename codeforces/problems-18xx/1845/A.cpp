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

// Codeforces - Educational Codeforces Round 151 (Rated for Div. 2)
// A. Forbidden Integer

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int x;
        cin >> x;
        if (x == 1 && (k == 1 || (k == 2 && n % 2 == 1)))
        {
            cout << "NO" << nl;
        }
        else if (x != 1)
        {
            cout << "YES" << nl;
            cout << n << nl;
            for (int j = 0; j < n; ++j)
            {
                cout << (j > 0 ? " " : "") << 1;
            }
            cout << nl;
        }
        else if (n % 2 == 0)
        {
            cout << "YES" << nl;
            cout << n / 2 << nl;
            for (int j = 0; j < n / 2; ++j)
            {
                cout << (j > 0 ? " " : "") << 2;
            }
            cout << nl;
        }
        else
        {
            cout << "YES" << nl;
            cout << (n - 1) / 2 << nl;
            cout << 3;
            for (int j = 0; j < (n - 3) / 2; ++j)
            {
                cout << ' ' << 2;
            }
            cout << nl;
        }
    }
    return 0;
}
