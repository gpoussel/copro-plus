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

// Codeforces - Codeforces Round 811 (Div. 3)
// C. Minimum Varied Number

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int s;
        cin >> s;
        long long result = 0;
        for (int digit = 9; digit >= 1; --digit)
        {
            if (s >= digit)
            {
                int exponent = (int)floor(log10(result)) + 1;
                result += digit * (result == 0 ? 1 : (long long)pow(10, exponent));
                s -= digit;
            }
        }
        cout << result << nl;
    }
    return 0;
}
