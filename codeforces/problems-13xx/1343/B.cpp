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

// Codeforces - Codeforces Round 636 (Div. 3)
// B. Balanced Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int c;
        cin >> c;
        if (c % 4 == 0)
        {
            cout << "YES" << nl;
            int middle = c / 2;
            for (int j = 1; j <= middle; ++j)
            {
                cout << 2 * j << " ";
            }
            for (int j = 1; j < middle; ++j)
            {
                cout << 2 * j - 1 << " ";
            }
            cout << 3 * middle - 1 << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
