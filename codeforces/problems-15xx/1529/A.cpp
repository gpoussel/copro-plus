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

// Codeforces - Codeforces Round 722 (Div. 2)
// A. Eshag Loves Big Arrays

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int min_value = INT_MAX;
        int min_value_count = 0;
        for (int j = 0; j < length; j++)
        {
            int number;
            cin >> number;
            if (number < min_value)
            {
                min_value = number;
                min_value_count = 1;
            }
            else if (number == min_value)
            {
                min_value_count++;
            }
        }
        cout << length - min_value_count << nl;
    }
    return 0;
}
