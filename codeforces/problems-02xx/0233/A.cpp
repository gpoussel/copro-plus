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

// Codeforces - Codeforces Round 144 (Div. 2)
// A. Perfect Permutation

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1 << nl;
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            cout << (i % 2 == 0 ? i - 1 : i + 1) << " ";
        }
        cout << nl;
    }
    return 0;
}
