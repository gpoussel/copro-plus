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

// Codeforces - Codeforces Round 764 (Div. 3)
// A. Plus One on the Subset

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        long long max_element = -1;
        long long min_element = 1e9 + 1;
        for (int j = 0; j < length; j++)
        {
            long long value;
            cin >> value;
            if (value > max_element)
            {
                max_element = value;
            }
            if (value < min_element)
            {
                min_element = value;
            }
        }
        cout << (max_element - min_element) << nl;
    }
    return 0;
}
