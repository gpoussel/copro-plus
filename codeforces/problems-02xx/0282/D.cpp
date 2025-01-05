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

// Codeforces - Codeforces Round 173 (Div. 2)
// D. Yet Another Number Game

const int MAX_N = 305;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    if (n == 1)
    {
        cout << (numbers[0] >= 1 ? "BitLGM" : "BitAryo") << nl;
    }
    else if (n == 2)
    {
        vector<vector<bool>> dp(305, vector<bool>(305, false));
        for (int i = 0; i < 305; ++i)
        {
            for (int j = 0; j < 305; ++j)
            {
                if (!dp[i][j])
                {
                    for (int k = 1; i + k < 305; ++k)
                    {
                        dp[i + k][j] = true;
                    }
                    for (int k = 1; j + k < 305; ++k)
                    {
                        dp[i][j + k] = true;
                    }
                    for (int k = 1; i + k < 305 && j + k < 305; ++k)
                    {
                        dp[i + k][j + k] = true;
                    }
                }
            }
        }
        cout << ((dp[numbers[0]][numbers[1]]) ? "BitLGM" : "BitAryo") << nl;
    }
    else if (n == 3)
    {
        cout << ((numbers[0] ^ numbers[1] ^ numbers[2]) ? "BitLGM" : "BitAryo") << nl;
    }
    return 0;
}
