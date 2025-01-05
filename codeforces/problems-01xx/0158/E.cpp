#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - VK Cup 2012 Qualification Round 1
// E. Phone Talks

int main()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> values(n);
    for (int i = 0; i < n; i++)
    {
        cin >> values[i].first >> values[i].second;
    }

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 86401));
    dp[0][0] = 1;
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (j != k)
            {
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);
            }
            if (dp[i][j] < values[i].first)
            {
                answer = max(values[i].first - dp[i][j], answer);
                dp[i + 1][j] = min(dp[i + 1][j], values[i].first + values[i].second);
            }
            else
            {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + values[i].second);
            }
        }
    }
    answer = max(answer, 86401 - dp[n][k]);
    cout << answer << nl;
    return 0;
}
