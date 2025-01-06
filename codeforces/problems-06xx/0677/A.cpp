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

// Codeforces - Codeforces Round 355 (Div. 2)
// A. Vanya and Fence

int main()
{
    int n;
    cin >> n;
    int h;
    cin >> h;
    int width_required = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        width_required++;
        if (a > h)
        {
            width_required++;
        }
    }
    cout << width_required << nl;
    return 0;
}
