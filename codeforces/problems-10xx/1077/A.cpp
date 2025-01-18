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

// Codeforces - Codeforces Round 521 (Div. 3)
// A. Frog Jumping

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long k;
        cin >> k;
        if (k % 2 == 0)
        {
            cout << (a - b) * (k / 2) << nl;
        }
        else
        {
            cout << (a - b) * (k / 2) + a << nl;
        }
    }
    return 0;
}
