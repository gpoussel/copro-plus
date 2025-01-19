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

// Codeforces - Codeforces Round 998 (Div. 3)
// D. Subtract Min Sort

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        long long max_so_far = 0;
        bool possible = true;
        for (int j = 0; j < n; ++j)
        {
            long long number;
            cin >> number;
            if (max_so_far > number)
            {
                possible = false;
            }
            max_so_far = number - max_so_far;
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
