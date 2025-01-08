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

// Codeforces - Codeforces Round 290 (Div. 2)
// A. Fox And Snake

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else if ((i % 4 == 1 && j == m - 1) || (i % 4 == 3 && j == 0))
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << nl;
    }
    return 0;
}
