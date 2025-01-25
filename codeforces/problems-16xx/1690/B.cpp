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

// Codeforces - Codeforces Round 797 (Div. 3)
// B. Array Decrements

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        vector<long long> b(n);
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        long long difference = -1;
        long long min_difference_to_zero = -1;
        bool failed = false;
        for (int j = 0; j < n && !failed; ++j)
        {
            if (b[j] == 0)
            {
                min_difference_to_zero = max(min_difference_to_zero, a[j]);
            }
            else if (difference < 0)
            {
                difference = a[j] - b[j];
                if (difference < 0)
                {
                    failed = true;
                }
            }
            else if (a[j] - b[j] != difference)
            {
                failed = true;
            }
        }
        cout << (!failed && (difference < 0 || min_difference_to_zero <= difference) ? "YES" : "NO") << nl;
    }
    return 0;
}
