#include <algorithm>
#include <array>
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

// Codeforces - Codeforces Beta Round 9 (Div. 2 Only)
// A. Die Roll

int main()
{
    int yakko, wakko;
    cin >> yakko >> wakko;
    int max_value = max(yakko, wakko);
    array<string, 6> results = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << results[max_value - 1] << nl;
    return 0;
}
