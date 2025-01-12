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

// Codeforces - Codeforces Round 536 (Div. 2)
// A. Lunar New Year and Cross Counting

int main()
{
    int m;
    cin >> m;
    int count = 0;
    vector<string> grid(m);
    for (int i = 0; i < m; i++)
    {
        cin >> grid[i];
    }
    for (int i = 1; i < m - 1; ++i)
    {
        for (int j = 1; j < m - 1; ++j)
        {
            if (grid[i][j] == 'X' && grid[i - 1][j - 1] == 'X' && grid[i - 1][j + 1] == 'X' && grid[i + 1][j - 1] == 'X' && grid[i + 1][j + 1] == 'X')
            {
                count++;
            }
        }
    }
    cout << count << nl;
    return 0;
}
