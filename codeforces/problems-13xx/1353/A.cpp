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

// Codeforces - Codeforces Round 642 (Div. 3)
// A. Most Unstable Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long n;
        cin >> n;
        long long m;
        cin >> m;
        if (n == 1)
        {
            cout << 0 << nl;
        }
        else if (n == 2)
        {
            cout << m << nl;
        }
        else
        {
            cout << 2 * m << nl;
        }
    }
    return 0;
}
