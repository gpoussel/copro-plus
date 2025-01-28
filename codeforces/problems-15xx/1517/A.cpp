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

// Codeforces - Contest 2050 and Codeforces Round 718 (Div. 1 + Div. 2)
// A. Sum of 2050

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long number;
        cin >> number;
        if (number % 2050 != 0)
        {
            cout << -1 << nl;
            continue;
        }
        long long solution = 0;
        number /= 2050;
        while (number > 0)
        {
            solution += number % 10;
            number /= 10;
        }
        cout << solution << nl;
    }
    return 0;
}
