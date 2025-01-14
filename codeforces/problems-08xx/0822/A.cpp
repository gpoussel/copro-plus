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

// Codeforces - Codeforces Round 422 (Div. 2)
// A. I'm bored with life

int main()
{
    long long a;
    cin >> a;
    long long b;
    cin >> b;
    long long result = 1;
    for (long long i = 1; i <= min(a, b); i++)
    {
        result *= i;
    }
    cout << result << nl;
    return 0;
}
