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

// Codeforces - COMPFEST 14 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// A. Accumulation of Dominoes

int main()
{
    long long n;
    cin >> n;
    long long m;
    cin >> m;
    if (m == 1)
    {
        cout << n - 1 << nl;
    }
    else
    {
        cout << n * (m - 1) << nl;
    }
    return 0;
}
