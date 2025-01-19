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

// Codeforces - Codeforces Round 974 (Div. 3)
// B. Robin Hood and the Major Oak

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

        long long first_value = n - k + 1;
        long long end_value = n;
        long long parity = ((end_value + 1) / 2) - first_value / 2;
        cout << (parity % 2 == 0 ? "YES" : "NO") << nl;
    }
    return 0;
}
