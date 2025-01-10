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

// Codeforces - Codeforces Round 473 (Div. 2)
// A. Mahmoud and Ehab and the even-odd game

int main()
{
    long long n;
    cin >> n;
    cout << (n % 2 == 0 ? "Mahmoud" : "Ehab") << nl;
    return 0;
}
