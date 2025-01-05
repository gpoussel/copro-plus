#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Educational Codeforces Round 93 (Rated for Div. 2)
// A. Bad Triangle

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<int> array(n);
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }
        if (array[0] + array[1] <= array[n - 1])
        {
            cout << "1 2 " << n << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }
    return 0;
}
