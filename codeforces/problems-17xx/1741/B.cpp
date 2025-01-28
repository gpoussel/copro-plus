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

// Codeforces - Codeforces Round 826 (Div. 3)
// B. Funny Permutation

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << nl;
        }
        else if (n == 2)
        {
            cout << 2 << ' ' << 1 << nl;
        }
        else if (n == 3)
        {
            cout << -1 << nl;
        }
        else if (n == 4)
        {
            cout << 2 << ' ' << 1 << ' ' << 4 << ' ' << 3 << nl;
        }
        else
        {
            for (int j = n; j > n / 2 + 1; j--)
            {
                cout << j << ' ';
            }
            for (int j = 1; j <= n / 2 + 1; ++j)
            {
                cout << j << ' ';
            }
            cout << nl;
        }
    }
    return 0;
}
