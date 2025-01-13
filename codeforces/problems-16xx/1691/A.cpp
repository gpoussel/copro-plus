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

// Codeforces - CodeCraft-22 and Codeforces Round 795 (Div. 2)
// A. Beat The Odds

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int count_odd = 0;
        int count_even = 0;
        for (int j = 0; j < length; j++)
        {
            long long number;
            cin >> number;
            if (number % 2 == 0)
            {
                ++count_even;
            }
            else
            {
                ++count_odd;
            }
        }
        cout << min(count_odd, count_even) << nl;
    }
    return 0;
}
