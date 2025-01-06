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

// Codeforces - Codeforces Round 277 (Div. 2)
// A. Calculating Function

int main()
{
    // OEIS A130472
    // A permutation of the integers: a(n) = (-1)^n * floor( (n+1)/2 ).
    long long n;
    cin >> n;
    cout << fixed << setprecision(0) << pow(-1LL, n) * floor((n + 1) / 2) << nl;
    return 0;
}
