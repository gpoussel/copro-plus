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

// Codeforces - Codeforces Round 926 (Div. 2)
// A. Sasha and the Beautiful Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        long long min_value = LLONG_MAX;
        long long max_value = LLONG_MIN;
        for (int j = 0; j < length; j++)
        {
            long long number;
            cin >> number;
            min_value = min(min_value, number);
            max_value = max(max_value, number);
        }
        cout << max_value - min_value << nl;
    }
    return 0;
}
