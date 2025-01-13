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

// Codeforces - Codeforces Round 993 (Div. 4)
// C. Hard Problem

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long m;
        cin >> m;
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long c;
        cin >> c;

        long long first_row_seated = min(a, m);
        long long second_row_seated = min(b, m);
        long long c_in_first_row = min(c, m - first_row_seated);
        first_row_seated += c_in_first_row;
        c -= c_in_first_row;
        long long c_in_second_row = min(c, m - second_row_seated);
        second_row_seated += c_in_second_row;
        c -= c_in_second_row;
        cout << first_row_seated + second_row_seated << nl;
    }
    return 0;
}
