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

// Codeforces - Codeforces Round 883 (Div. 3)
// A. Rudolph and Cut the Rope

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int j = 0; j < n; ++j)
        {
            int a;
            cin >> a;
            int b;
            cin >> b;
            if (a > b)
            {
                ++count;
            }
        }
        cout << count << nl;
    }
    return 0;
}
