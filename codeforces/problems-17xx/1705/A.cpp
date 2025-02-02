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

// Codeforces - Codeforces Round 807 (Div. 2)
// A. Mark the Photographer

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
        vector<int> heights(2 * n);
        for (int j = 0; j < 2 * n; j++)
        {
            cin >> heights[j];
        }
        sort(heights.begin(), heights.end());

        bool possible = true;
        for (int j = 0; j < n; ++j)
        {
            if (heights[n + j] - heights[j] < x)
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
