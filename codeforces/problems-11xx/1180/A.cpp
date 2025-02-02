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

// Codeforces - Codeforces Round 569 (Div. 2)
// A. Alex and a Rhombus

int main()
{
    long long number;
    cin >> number;
    if (number == 1)
    {
        cout << 1 << nl;
    }
    else
    {
        cout << pow(number, 2) + pow(number - 1, 2) << nl;
    }
    return 0;
}
