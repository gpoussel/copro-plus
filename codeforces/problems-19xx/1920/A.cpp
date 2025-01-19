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

// Codeforces - Codeforces Round 919 (Div. 2)
// A. Satisfying Constraints

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int number_of_constraints;
        cin >> number_of_constraints;
        long long min_value = 0;
        long long max_value = LLONG_MAX;
        set<long long> invalid_numbers;
        for (int j = 0; j < number_of_constraints; j++)
        {
            int type;
            cin >> type;
            long long x;
            cin >> x;
            if (type == 1)
            {
                min_value = max(min_value, x);
            }
            else if (type == 2)
            {
                max_value = min(max_value, x);
            }
            else
            {
                invalid_numbers.insert(x);
            }
        }
        if (min_value > max_value)
        {
            cout << 0 << nl;
            continue;
        }
        deb(min_value);
        deb(max_value);
        deb(invalid_numbers.size());
        long long invalid_count = count_if(invalid_numbers.begin(), invalid_numbers.end(), [min_value, max_value](long long x)
                                           { return x >= min_value && x <= max_value; });
        cout << max_value - min_value + 1 - invalid_count << nl;
    }
    return 0;
}
