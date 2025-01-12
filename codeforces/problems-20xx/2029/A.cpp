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

// Codeforces - Refact.ai Match 1 (Codeforces Round 985)
// A. Set

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long left;
        cin >> left;
        long long right;
        cin >> right;
        long long k;
        cin >> k;
        cout << max(0LL, (right / k) - left + 1) << nl;
    }
    return 0;
}
