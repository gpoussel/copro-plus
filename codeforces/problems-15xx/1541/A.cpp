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

// Codeforces - Codeforces Round 728 (Div. 2)
// A. Pretty Permutations

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int j = 1; j <= n; j += 2)
            {
                cout << (j > 1 ? " " : "") << j + 1 << " " << j;
            }
            cout << nl;
        }
        else
        {
            cout << "3 1 2";
            for (int j = 4; j <= n; j += 2)
            {
                cout << " " << j + 1 << " " << j;
            }
            cout << nl;
        }
    }
    return 0;
}
