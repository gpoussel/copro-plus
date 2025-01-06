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

// Codeforces - Codeforces Round 340 (Div. 2)
// A. Elephant

int main()
{
    int x;
    cin >> x;
    cout << (x / 5) + (x % 5 == 0 ? 0 : 1) << nl;
    return 0;
}
