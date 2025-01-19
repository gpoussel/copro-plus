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

// Codeforces - Educational Codeforces Round 137 (Rated for Div. 2)
// A. Password

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> unused_digits(length);
        for (int j = 0; j < length; j++)
        {
            cin >> unused_digits[j];
        }
        int remaining_digits = 10 - length;
        cout << 3 * remaining_digits * (remaining_digits - 1) << nl;
    }
    return 0;
}
