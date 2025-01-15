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

// Codeforces - Codeforces Round 760 (Div. 3)
// A. Polycarp and Sums of Subsequences

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        vector<long long> array(7);
        for (int j = 0; j < 7; ++j)
        {
            cin >> array[j];
        }
        long long a = array[0];
        long long sum_of_b_c = array[6] - array[0];
        long long b = -1;
        long long c = -1;
        for (int j = 1; j < 7; ++j)
        {
            for (int k = j + 1; k < 7; ++k)
            {
                if (array[j] + array[k] == sum_of_b_c)
                {
                    b = array[j];
                    c = array[k];
                    break;
                }
            }
        }
        cout << a << " " << b << " " << c << nl;
    }
    return 0;
}
