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

// Codeforces - Educational Codeforces Round 133 (Rated for Div. 2)
// A. 2-3 Moves

long long get_number_of_steps(long long n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 2;
    }
    if (n == 2 || n == 3)
    {
        return 1;
    }
    if (n % 3 == 0)
    {
        return n / 3;
    }
    return n / 3 + 1;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long n;
        cin >> n;
        cout << get_number_of_steps(n) << nl;
    }
    return 0;
}
