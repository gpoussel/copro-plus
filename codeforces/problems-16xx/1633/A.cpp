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

// Codeforces - Educational Codeforces Round 122 (Rated for Div. 2)
// A. Div. 7

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << nl;
            continue;
        }
        for (int digit = 0; digit <= 9; ++digit)
        {
            int new_number = (n / 10) * 10 + digit;
            if (new_number % 7 == 0)
            {
                cout << new_number << nl;
                break;
            }
        }
    }
    return 0;
}
