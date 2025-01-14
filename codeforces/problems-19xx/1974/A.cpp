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

// Codeforces - Codeforces Round 946 (Div. 3)
// A. Phone Desktop

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int x;
        cin >> x;
        int y;
        cin >> y;

        int pages_with_two_large_icons = (int)floor(y / 2.0);
        x -= min(x, 7 * pages_with_two_large_icons);
        int page_with_one_large_icon = y % 2 == 0 ? 0 : 1;
        x -= min(x, 11 * page_with_one_large_icon);
        int pages_with_only_small_icons = (int)ceil(x / 15.0);
        cout << pages_with_only_small_icons + pages_with_two_large_icons + page_with_one_large_icon << nl;
    }
    return 0;
}
