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

// Codeforces - Codeforces Round 964 (Div. 4)
// C. Showering

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        long long s;
        cin >> s;
        long long m;
        cin >> m;
        bool possible = false;
        long long previous_time = 0;
        for (int j = 0; j < n; ++j)
        {
            long long l;
            cin >> l;
            long long r;
            cin >> r;

            if (l - previous_time >= s)
            {
                possible = true;
            }
            previous_time = r;
        }
        if (m - previous_time >= s)
        {
            possible = true;
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
