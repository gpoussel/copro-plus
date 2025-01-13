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

// Codeforces - Codeforces Round 797 (Div. 3)
// A. Print a Pedestal (Codeforces logo?)

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int h1 = (int)ceil(n / 3.0);
        int h2 = h1 + 1;
        int h3 = n - h1 - h2;
        if (h3 == 0)
        {
            h1--;
            h3++;
        }
        cout << h1 << " " << h2 << " " << h3 << nl;
    }
    return 0;
}
