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

// Codeforces - Codeforces Round 927 (Div. 3)
// A. Thorns and Coins

int evaluate_coins(string strip)
{
    int n = (int)strip.size();
    vector<int> coins(n);
    if (strip[1] == '@')
    {
        coins[1] = 1;
    }
    for (int j = 2; j < n; ++j)
    {
        if (strip[j] == '*' && strip[j - 1] == '*')
        {
            return coins[j - 2];
        }
        int coins_at_j = strip[j] == '@' ? 1 : 0;
        coins[j] = max(coins[j - 1], coins[j - 2]) + coins_at_j;
    }
    return coins[n - 1];
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string strip;
        cin >> strip;
        cout << evaluate_coins(strip) << nl;
    }
    return 0;
}
