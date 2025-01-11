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

// Codeforces - Codeforces Round 893 (Div. 2)
// A. Buttons

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
        if (a + (c % 2) > b)
        {
            cout << "First" << nl;
        }
        else
        {
            cout << "Second" << nl;
        }
    }
    return 0;
}
