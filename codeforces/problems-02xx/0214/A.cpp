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

// Codeforces - Codeforces Round 131 (Div. 2)
// A. System of Equations

int main()
{
    map<int, pair<int, int>> solutions;
    int n;
    cin >> n;
    int m;
    cin >> m;

    int count = 0;
    for (int a = 0; a <= 1000; ++a)
    {
        if (a * a > n || a > m)
        {
            break;
        }
        for (int b = 0; b <= 1000; ++b)
        {
            if (b * b > m || b > n)
            {
                break;
            }
            if (a * a + b == n && a + b * b == m)
            {
                count++;
            }
        }
    }
    cout << count << nl;
    return 0;
}
