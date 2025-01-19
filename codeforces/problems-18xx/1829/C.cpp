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

// Codeforces - Codeforces Round 871 (Div. 4)
// C. Mr. Perfectly Fine

#define DEFAULT (long long)1e7

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        long long dp[3] = {DEFAULT, DEFAULT, DEFAULT};
        for (int j = 0; j < n; j++)
        {
            long long time;
            cin >> time;
            string skills;
            cin >> skills;
            if (skills == "01")
            {
                dp[0] = min(dp[0], time);
            }
            else if (skills == "10")
            {
                dp[1] = min(dp[1], time);
            }
            else if (skills == "11")
            {
                dp[2] = min(dp[2], time);
            }
        }
        long long result = min(dp[0] + dp[1], dp[2]);
        if (result >= DEFAULT)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << result << nl;
        }
    }
    return 0;
}
