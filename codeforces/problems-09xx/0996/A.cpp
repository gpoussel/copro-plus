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

// Codeforces - Codeforces Round 492 (Div. 2) [Thanks, uDebug!]
// A. Hit the Lottery

int main()
{
    long long n;
    cin >> n;
    long long bills = 0;
    bills += n / 100;
    n %= 100;
    bills += n / 20;
    n %= 20;
    bills += n / 10;
    n %= 10;
    bills += n / 5;
    n %= 5;
    bills += n;
    cout << bills << nl;
    return 0;
}
