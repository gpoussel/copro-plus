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

// Codeforces - Codeforces Round 304 (Div. 2)
// A. Soldier and Bananas

int main()
{
    int cost_of_first;
    cin >> cost_of_first;

    int initial_money;
    cin >> initial_money;

    long long wanted_bananas;
    cin >> wanted_bananas;

    long long total_cost = wanted_bananas * (wanted_bananas + 1) / 2 * cost_of_first;
    cout << max(0LL, total_cost - initial_money) << nl;
    return 0;
}
