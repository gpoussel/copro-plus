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

// Codeforces - Educational Codeforces Round 146 (Rated for Div. 2)
// A. Coins

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long n;
        cin >> n;
        long long k;
        cin >> k;
        bool is_possible = (n - k) % 2 == 0 || n % k == 0 || n % 2 == 0;
        cout << (is_possible ? "YES" : "NO") << nl;
    }
    return 0;
}
