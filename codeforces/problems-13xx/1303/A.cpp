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

// Codeforces - Educational Codeforces Round 82 (Rated for Div. 2)
// A. Erasing Zeroes

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        size_t first_one = str.find_first_of('1');
        size_t last_one = str.find_last_of('1');
        if (first_one == str.npos || first_one == last_one)
        {
            cout << 0 << nl;
            continue;
        }
        cout << count(str.begin() + first_one, str.begin() + last_one, '0') << nl;
    }
    return 0;
}
