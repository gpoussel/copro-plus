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

// Codeforces - Codeforces Round 739 (Div. 3)
// C. Infinity Table

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long k;
        cin >> k;

        if (k == 1)
        {
            cout << "1 1" << nl;
            continue;
        }
        long long column_height = 2;
        long long side_length = 1;
        long long start = 1;
        bool found = false;
        while (!found)
        {
            start += side_length;
            side_length += 2;

            long long last_of_iteration = start + (2 * column_height) - 2;
            if (k <= last_of_iteration)
            {
                long long column_end = start + column_height - 1;
                if (k <= column_end)
                {
                    cout << (k - start + 1) << ' ' << column_height << nl;
                }
                else
                {
                    cout << column_height << ' ' << column_height - (k - column_end) << nl;
                }
                found = true;
            }
            column_height++;
        }
    }
    return 0;
}
