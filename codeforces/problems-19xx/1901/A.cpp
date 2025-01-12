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

// Codeforces - Educational Codeforces Round 158 (Rated for Div. 2)
// A. Line Trip

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        int previous = 0;
        int max_distance = -1;
        for (int j = 0; j < n; ++j)
        {
            int a;
            cin >> a;
            int distance = a - previous;
            if (distance > max_distance)
            {
                max_distance = distance;
            }
            previous = a;
        }
        max_distance = max(max_distance, 2 * (x - previous));
        cout << max_distance << nl;
    }
    return 0;
}
