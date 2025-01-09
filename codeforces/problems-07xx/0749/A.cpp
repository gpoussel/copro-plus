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

// Codeforces - Codeforces Round 388 (Div. 2)
// A. Bachgold Problem

int main()
{
    int n;
    cin >> n;
    cout << n / 2 << nl;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << 3 << " ";
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << 2 << " ";
        }
    }
    cout << nl;
    return 0;
}
