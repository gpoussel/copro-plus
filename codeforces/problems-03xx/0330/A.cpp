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

// Codeforces - Codeforces Round 192 (Div. 2)
// A. Cakeminator

int main()
{
    int r;
    cin >> r;
    int c;
    cin >> c;
    vector<string> cake(r);
    for (int i = 0; i < r; i++)
    {
        cin >> cake[i];
    }
    sort(cake.begin(), cake.end());
    int row_start_index = 0;
    while (row_start_index < r && cake[row_start_index].find('S') == string::npos)
    {
        row_start_index++;
    }
    int empty_columns = 0;
    for (int col_index = 0; row_start_index < r && col_index < c; ++col_index)
    {
        bool is_column_empty = true;
        for (int row_index = row_start_index; row_index < r; ++row_index)
        {
            if (cake[row_index][col_index] == 'S')
            {
                is_column_empty = false;
                break;
            }
        }
        if (is_column_empty)
        {
            empty_columns++;
        }
    }
    int cells_eaten = row_start_index * c + empty_columns * (r - row_start_index);
    cout << cells_eaten << nl;
    return 0;
}
