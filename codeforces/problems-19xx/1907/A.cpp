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

// Codeforces - Codeforces Round 913 (Div. 3)
// A. Rook

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string position;
        cin >> position;
        for (int j = 1; j <= 8; ++j)
        {
            if (j == position[1] - '0')
            {
                continue;
            }
            cout << position[0] << j << nl;
        }
        for (char j = 'a'; j <= 'h'; ++j)
        {
            if (j == position[0])
            {
                continue;
            }
            cout << j << position[1] << nl;
        }
    }
    return 0;
}
