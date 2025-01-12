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

// Codeforces - Codeforces Round 468 (Div. 2, based on Technocup 2018 Final Round)
// A. Friends Meeting

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    if (a > b)
    {
        swap(a, b);
    }
    int steps_a = (int)ceil((b - a) / 2.0);
    int steps_b = (b - a) - steps_a;
    int total = steps_a * (steps_a + 1) / 2 + steps_b * (steps_b + 1) / 2;
    cout << total << nl;
    return 0;
}
