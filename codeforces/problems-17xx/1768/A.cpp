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

// Codeforces - Codeforces Round 842 (Div. 2)
// A. Greatest Convex

using ll = long long;

vector<ll> get_divisors(ll n)
{
    vector<ll> divs;
    for (int i = 1; 1LL * i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (i != n / i)
            {
                divs.push_back(n / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    return divs;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        // x! + (x - 1)! = (x - 1)! * (1 + x)
        long long number;
        cin >> number;
        cout << number - 1 << nl;
    }
    return 0;
}
