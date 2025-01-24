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

// Codeforces - Codeforces Round 917 (Div. 2)
// A. Least Product

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int positive_count = 0;
        int zero_count = 0;
        int negative_count = 0;
        int index_of_non_zero_number = -1;
        for (int j = 0; j < n; j++)
        {
            long long number;
            cin >> number;
            if (number > 0)
            {
                positive_count++;
                index_of_non_zero_number = j + 1;
            }
            else if (number == 0)
            {
                zero_count++;
            }
            else
            {
                negative_count++;
                index_of_non_zero_number = j + 1;
            }
        }
        if (zero_count > 0)
        {
            cout << 0 << nl;
        }
        else if (negative_count % 2 == 0)
        {
            if (index_of_non_zero_number > 0)
            {
                cout << 1 << nl;
                cout << index_of_non_zero_number << ' ' << 0 << nl;
            }
            else
            {
                cout << 0 << nl;
            }
        }
        else
        {
            cout << 0 << nl;
        }
    }
    return 0;
}
