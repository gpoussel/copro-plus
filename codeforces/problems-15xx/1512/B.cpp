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

// Codeforces - Codeforces Round 713 (Div. 3)
// B. Almost Rectangle

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int size;
        cin >> size;
        vector<string> grid(size);
        vector<pair<int, int>> existing_points;
        for (int j = 0; j < size; j++)
        {
            cin >> grid[j];
            for (int k = 0; k < size; k++)
            {
                if (grid[j][k] == '*')
                {
                    existing_points.push_back({j, k});
                }
            }
        }
        int min_x = min(existing_points[0].first, existing_points[1].first);
        int max_x = max(existing_points[0].first, existing_points[1].first);
        int min_y = min(existing_points[0].second, existing_points[1].second);
        int max_y = max(existing_points[0].second, existing_points[1].second);
        if (min_x == max_x)
        {
            if (min_x == 0)
            {
                max_x = 1;
            }
            else
            {
                min_x = 0;
            }
        }
        if (min_y == max_y)
        {
            if (min_y == 0)
            {
                max_y = 1;
            }
            else
            {
                min_y = 0;
            }
        }
        set<pair<int, int>> all_points;
        all_points.insert({min_x, min_y});
        all_points.insert({min_x, max_y});
        all_points.insert({max_x, min_y});
        all_points.insert({max_x, max_y});
        for (auto &point : all_points)
        {
            grid[point.first][point.second] = '*';
        }
        for (int j = 0; j < size; j++)
        {
            cout << grid[j] << nl;
        }
    }
    return 0;
}
