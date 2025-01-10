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

// Codeforces - Codeforces Round 674 (Div. 3)
// A. Floor Number

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        if (n <= 2)
        {
            cout << 1 << nl;
        }
        else
        {
            n -= 2;
            cout << (n + x - 1) / x + 1 << nl;
        }
    }
    return 0;
}
