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

// Codeforces - Codeforces Round 615 (Div. 3)
// A. Collecting Coins

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        int n;
        cin >> n;

        int max_value = max(a, max(b, c));
        int sum_of_diff = 3 * max_value - a - b - c;
        if (sum_of_diff > n)
        {
            cout << "NO" << nl;
        }
        else
        {
            int remaining = n - sum_of_diff;
            if (remaining % 3 == 0)
            {
                cout << "YES" << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
    }
    return 0;
}
