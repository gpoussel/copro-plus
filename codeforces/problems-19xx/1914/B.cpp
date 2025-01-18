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

// Codeforces - Codeforces Round 916 (Div. 3)
// B. Preparing for the Contest

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        if (k == 0)
        {
            for (int i = n; i >= 1; --i)
            {
                cout << (i < n ? " " : "") << i;
            }
            cout << nl;
        }
        else
        {
            cout << 1;
            for (int i = 1; i < n; ++i)
            {
                if (i >= k)
                {
                    cout << ' ' << n - i + k;
                }
                else
                {
                    cout << ' ' << (i + 1);
                }
            }
            cout << nl;
        }
    }
    return 0;
}
