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
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Beta Round 85 (Div. 2 Only)
// A. Petya and Strings

int main()
{
    string string1, string2;
    cin >> string1 >> string2;
    transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
    transform(string2.begin(), string2.end(), string2.begin(), ::tolower);
    if (string1 < string2)
    {
        cout << -1 << nl;
    }
    else if (string1 > string2)
    {
        cout << 1 << nl;
    }
    else
    {
        cout << 0 << nl;
    }
    return 0;
}
