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

// Codeforces - Codeforces Round 661 (Div. 3)
// B. Gifts Fixing

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<long long> candy_counts(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> candy_counts[j];
        }
        long long min_candy_count = *min_element(candy_counts.begin(), candy_counts.end());
        vector<long long> orange_counts(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> orange_counts[j];
        }
        long long min_orange_count = *min_element(orange_counts.begin(), orange_counts.end());
        long long moves = 0;
        for (int j = 0; j < n; ++j)
        {
            long long candy_diff = candy_counts[j] - min_candy_count;
            long long orange_diff = orange_counts[j] - min_orange_count;
            moves += max(candy_diff, orange_diff);
        }
        cout << moves << nl;
    }
    return 0;
}
