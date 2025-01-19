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

// Codeforces - Codeforces Round 663 (Div. 2)
// B. Fix You

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<string> grid(n);
        for (int j = 0; j < n; j++)
        {
            cin >> grid[j];
        }
        int count = 0;
        for (int j = 0; j < m - 1; ++j)
        {
            if (grid[n - 1][j] != 'R')
            {
                count++;
            }
        }
        for (int j = 0; j < n - 1; ++j)
        {
            if (grid[j][m - 1] != 'D')
            {
                count++;
            }
        }
        cout << count << nl;
    }
    return 0;
}
