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

// Codeforces - Codeforces Round 858 (Div. 2)
// A. Walking Master

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        int d;
        cin >> d;
        int moves_on_y = d - b;
        if (moves_on_y < 0)
        {
            cout << -1 << nl;
            continue;
        }
        int new_x = a + moves_on_y;
        if (new_x < c)
        {
            cout << -1 << nl;
            continue;
        }
        cout << moves_on_y + (new_x - c) << nl;
    }
    return 0;
}
