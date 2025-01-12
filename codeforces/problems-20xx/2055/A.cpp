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

// Codeforces - Codeforces Round 996 (Div. 2)
// A. Two Frogs

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int a;
        cin >> a;
        int b;
        cin >> b;

        int winner = 0;
        int dir_a = b - a > 0 ? 1 : -1;
        int dir_b = -dir_a;
        while (winner == 0)
        {
            if ((a == 1 && b == 2) || (a == n && b == n - 1))
            {
                winner = 2;
                continue;
            }
            if (a + dir_a == b)
            {
                a -= dir_a;
            }
            else
            {
                a += dir_a;
            }
            if ((b == 1 && a == 2) || (b == n && a == n - 1))
            {
                winner = 1;
                continue;
            }
            if (b + dir_b == a)
            {
                b -= dir_b;
            }
            else
            {
                b += dir_b;
            }
        }
        cout << (winner == 1 ? "YES" : "NO") << nl;
    }
    return 0;
}
