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

// Codeforces - Codeforces Beta Round 14 (Div. 2)
// A. Letter

int main()
{
    int n, m;
    cin >> n >> m;
    array<string, 50> lines;
    for (int i = 0; i < n; i++)
    {
        cin >> lines[i];
    }
    int start_row = 0;
    while (lines[start_row].find('*') == string::npos)
    {
        start_row++;
    }
    int end_row = n - 1;
    while (lines[end_row].find('*') == string::npos)
    {
        end_row--;
    }
    cerr << "start_row: " << start_row << nl;
    cerr << "end_row: " << end_row << nl;
    int start_col = 50;
    int end_col = 0;
    for (int i = start_row; i <= end_row; i++)
    {
        size_t pos = lines[i].find('*');
        if (pos != string::npos)
        {
            start_col = min(start_col, (int)pos);
            end_col = max(end_col, (int)lines[i].rfind('*'));
        }
    }

    for (int i = start_row; i <= end_row; i++)
    {
        cout << lines[i].substr(start_col, end_col - start_col + 1) << endl;
    }
    return 0;
}
