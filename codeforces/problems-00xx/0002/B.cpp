#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
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

// Codeforces - Codeforces Beta Round 2
// B. The least round way

int countFactors(int m, int x)
{
    if (m == 0)
        return 0;
    int n = 0;
    int k = x;
    while (m % k == 0)
    {
        k *= x;
        n++;
    }
    return n;
}

int main()
{
    int n;
    cin >> n;

    // grid stores the number of factors of 2 and 5 of the number in the cell
    array<array<pair<int, int>, 1000>, 1000> grid;

    int zeroflag = 0;
    int zeroi;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> grid[i][j].first;

            if (grid[i][j].first == 0)
            {
                zeroflag = 1;
                zeroi = i;
            }
            grid[i][j].second = countFactors(grid[i][j].first, 5);
            grid[i][j].first = countFactors(grid[i][j].first, 2);
            if (i == 0 && j > 0)
            {
                grid[i][j].first += grid[i][j - 1].first;
                grid[i][j].second += grid[i][j - 1].second;
            }
            else if (j == 0 && i > 0)
            {
                grid[i][j].first += grid[i - 1][j].first;
                grid[i][j].second += grid[i - 1][j].second;
            }
            else
            {

                grid[i][j].first += min(grid[i - 1][j].first, grid[i][j - 1].first);
                grid[i][j].second += min(grid[i - 1][j].second, grid[i][j - 1].second);
            }
        }
    }

    // To find the path, we need to check if the last cell has more factors of 2 or 5. If the last cell has more factors
    // of 2, we need to find the path with the least number of factors of 2. Otherwise, we need to find the path with
    // the least number of factors of 5.
    bool multiple_of_two = grid[n - 1][n - 1].first > grid[n - 1][n - 1].second;
    if (zeroflag && grid[n - 1][n - 1].first > 0 && grid[n - 1][n - 1].second > 0)
    {
        // If there is a zero in the grid, we must go through it
        cout << 1 << nl;
        for (int i = 0; i < zeroi; ++i)
            cout << "D";
        for (int i = 0; i < n - 1; ++i)
            cout << "R";
        for (int i = zeroi; i < n - 1; ++i)
            cout << "D";
        cout << nl;
        return 0;
    }
    cout << (multiple_of_two ? grid[n - 1][n - 1].second : grid[n - 1][n - 1].first) << nl;
    int x = n - 1;
    int y = n - 1;
    string path;
    while (x > 0 || y > 0)
    {
        if (x == 0)
        {
            path += 'R';
            y--;
        }
        else if (y == 0)
        {
            path += 'D';
            x--;
        }
        else
        {
            auto up_value = (multiple_of_two ? grid[x - 1][y].second : grid[x - 1][y].first);
            auto left_value = (multiple_of_two ? grid[x][y - 1].second : grid[x][y - 1].first);
            if (up_value < left_value)
            {
                path += 'D';
                x--;
            }
            else
            {
                path += 'R';
                y--;
            }
        }
    }
    reverse(path.begin(), path.end());
    cout << path << nl;
    return 0;
}
