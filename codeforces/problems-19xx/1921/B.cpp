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

// Codeforces - Codeforces Round 920 (Div. 3)
// B. Arranging Cats

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string f;
        cin >> f;

        int cat_to_remove = 0;
        int cat_to_add = 0;
        for (int j = 0; j < n; ++j)
        {
            if (s[j] == '1' && f[j] == '0')
            {
                cat_to_remove++;
            }
            else if (s[j] == '0' && f[j] == '1')
            {
                cat_to_add++;
            }
        }
        cout << max(cat_to_remove, cat_to_add) << nl;
    }
    return 0;
}
