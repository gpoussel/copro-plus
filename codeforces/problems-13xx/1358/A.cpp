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

// Codeforces - Codeforces Round 645 (Div. 2)
// A. Park Lighting

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        if (n % 2 == 0 || m % 2 == 0)
        {
            cout << n * m / 2 << nl;
        }
        else
        {
            cout << (m * n + 1) / 2 << nl;
        }
    }
    return 0;
}
