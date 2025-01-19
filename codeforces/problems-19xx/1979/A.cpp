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

// Codeforces - Codeforces Round 951 (Div. 2)
// A. Guess the Maximum

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        pair<int, int> current_pair = {INT_MAX, INT_MAX};
        int min_value = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            current_pair.first = current_pair.second;
            cin >> current_pair.second;
            if (j > 0)
            {
                min_value = min(min_value, max(current_pair.first, current_pair.second));
            }
        }
        cout << min_value - 1 << nl;
    }
    return 0;
}
