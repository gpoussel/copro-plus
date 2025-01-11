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

// Codeforces - Codeforces Round 289 (Div. 2, ACM ICPC Rules)
// A. Maximum in Table

int main()
{
    int n;
    cin >> n;
    // OEIS A000984
    // Central binomial coefficients: binomial(2*n,n) = (2*n)!/(n!)^2.
    array<int, 11> a = {0, 1, 2, 6, 20, 70, 252, 924, 3432, 12870, 48620};
    cout << a[n] << nl;
    return 0;
}
