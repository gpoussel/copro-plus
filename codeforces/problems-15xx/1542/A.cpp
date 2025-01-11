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

// Codeforces - Codeforces Round 729 (Div. 2)
// A. Odd Set

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int odd = 0, even = 0;
        for (int j = 0; j < 2 * n; ++j)
        {
            int number;
            cin >> number;
            if (number % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout << (odd == even ? "Yes" : "No") << nl;
    }
    return 0;
}
