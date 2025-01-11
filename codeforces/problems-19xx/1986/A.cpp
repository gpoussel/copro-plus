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

// Codeforces - Codeforces Round 954 (Div. 3)
// A. X Axis

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int x1;
        cin >> x1;
        int x2;
        cin >> x2;
        int x3;
        cin >> x3;
        int min_value = min(min(x1, x2), x3);
        int max_value = max(max(x1, x2), x3);
        int lowest_sum = INT_MAX;
        for (int j = min_value; j <= max_value; j++)
        {
            int sum = abs(x1 - j) + abs(x2 - j) + abs(x3 - j);
            lowest_sum = min(lowest_sum, sum);
        }
        cout << lowest_sum << nl;
    }
    return 0;
}
