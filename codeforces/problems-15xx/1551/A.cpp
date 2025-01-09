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

// Codeforces - Codeforces Round 734 (Div. 3)
// A. Polycarp and Coins

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long burles;
        cin >> burles;
        if (burles % 3 == 0)
        {
            cout << burles / 3 << " " << burles / 3 << nl;
        }
        else if (burles % 3 == 1)
        {
            cout << burles / 3 + 1 << " " << burles / 3 << nl;
        }
        else
        {
            cout << burles / 3 << " " << burles / 3 + 1 << nl;
        }
    }
    return 0;
}
