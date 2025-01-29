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

// Codeforces - Educational Codeforces Round 113 (Rated for Div. 2)
// A. Balanced Substring

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool found = false;
        for (int j = 0; j < n - 1; ++j)
        {
            if (str[j] != str[j + 1])
            {
                cout << j + 1 << " " << j + 2 << nl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << -1 << ' ' << -1 << nl;
        }
    }
    return 0;
}
