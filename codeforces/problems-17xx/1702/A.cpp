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

// Codeforces - Codeforces Round 805 (Div. 3)
// A. Round Down the Price

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long m;
        cin >> m;
        int closest_power_of_ten = (int)floor(log10(m));
        long long result = m - (long long)pow(10, closest_power_of_ten);
        cout << result << nl;
    }
    return 0;
}
