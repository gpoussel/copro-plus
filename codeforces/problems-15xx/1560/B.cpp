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

// Codeforces - Codeforces Round 739 (Div. 3)
// B. Who's Opposite?

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
        long long c;
        cin >> c;
        if (a > b)
        {
            swap(a, b);
        }
        long long n = 2 * (b - a);
        long long d = (c + n / 2);
        if (d > n)
        {
            d -= n;
        }
        if (a > n || b > n || c > n)
        {
            cout << -1 << nl;
            continue;
        }
        cout << d << nl;
    }
    return 0;
}
