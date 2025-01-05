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

// Codeforces - Codeforces Round 163 (Div. 2)
// C. Below the Diagonal

int main()
{
    int n;
    cin >> n;

    vector<vector<bool>> matrix(n, vector<bool>(1000));
    vector<int> rows(n, 0); // number of 1s in each row
    vector<int> cols(n, 0); // number of 1s in each column

    vector<string> output_operations;

    for (int i = 0; i < n - 1; ++i)
    {
        // Each line is the location of a 1
        int x;
        cin >> x;
        --x;
        int y;
        cin >> y;
        --y;

        matrix[x][y] = true;
        rows[x]++;
        cols[y]++;
    }

    for (int i = 0; i < n - 1; ++i)
    {
        int index_of_last_cell = n - i - 1;
        // Considering the grid [0-i] instead of [0-n] (recursion)
        // We are moving an empty cell to the last row and last column
        int index_of_empty_column = -1;
        for (int j = 0; j <= index_of_last_cell; ++j)
        {
            if (cols[j] == 0)
            {
                index_of_empty_column = j;
                break;
            }
        }
        if (index_of_empty_column != index_of_last_cell)
        {
            // Move this column to the end
            output_operations.push_back("2 " + to_string(index_of_empty_column + 1) + " " + to_string(index_of_last_cell + 1));
            swap(cols[index_of_empty_column], cols[index_of_last_cell]);
            for (int j = 0; j < n; ++j)
            {
                swap(matrix[j][index_of_empty_column], matrix[j][index_of_last_cell]);
            }
        }

        // Then, moving the heaviest line to the last one
        int index_of_heaviest_row = -1;
        int value_of_heaviest_row = -1;
        for (int j = 0; j <= index_of_last_cell; ++j)
        {
            if (rows[j] >= value_of_heaviest_row)
            {
                index_of_heaviest_row = j;
                value_of_heaviest_row = rows[j];
            }
        }

        if (index_of_heaviest_row != index_of_last_cell)
        {
            // Move this row to the end
            output_operations.push_back("1 " + to_string(index_of_heaviest_row + 1) + " " + to_string(index_of_last_cell + 1));
            swap(rows[index_of_heaviest_row], rows[index_of_last_cell]);
            for (int j = 0; j < n; ++j)
            {
                swap(matrix[index_of_heaviest_row][j], matrix[index_of_last_cell][j]);
            }
        }
        for (int j = 0; j <= index_of_last_cell; ++j)
        {
            if (matrix[index_of_last_cell][j])
            {
                cols[j]--;
            }
            if (matrix[j][index_of_last_cell])
            {
                rows[j]--;
            }
        }
    }
    cout << output_operations.size() << nl;
    for (auto &operation : output_operations)
    {
        cout << operation << nl;
    }
    return 0;
}
