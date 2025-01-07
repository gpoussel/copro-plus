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

// Codeforces - Codeforces Round 266 (Div. 2)
// C. Number of Ways

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> prefix_sum(n + 1);
    prefix_sum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }
    if (prefix_sum[n] % 3 != 0)
    {
        cout << 0 << nl;
        return 0;
    }

    long long target = prefix_sum[n] / 3;
    long long target2 = 2 * target;
    long long count_target = 0;
    long long count_split = 0;
    for (int i = 1; i < n; ++i)
    {
        if (prefix_sum[i] == target2)
        {
            count_split += count_target;
        }
        if (prefix_sum[i] == target)
        {
            count_target++;
        }
    }

    cout << count_split << nl;
    return 0;
}
