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

// Codeforces - Codeforces Round 865 (Div. 2)
// B. Grid Reconstruction

void print_row(const vector<int> &row)
{
    for (size_t i = 0; i < row.size(); ++i)
    {
        cout << row[i] << " ";
    }
    cout << nl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;

        vector<int> row1;
        vector<int> row2;

        row1.push_back(2 * n);
        for (int i = 0; i < n - 1; ++i)
        {
            if (i % 2 == 0)
            {
                row1.push_back(i + 2);
                row2.push_back(i + 1);
            }
            else
            {
                row1.push_back(2 * n - i - 1);
                row2.push_back(2 * n - i - 2);
            }
        }
        row2.push_back(2 * n - 1);

        print_row(row1);
        print_row(row2);
    }

    return 0;
}
