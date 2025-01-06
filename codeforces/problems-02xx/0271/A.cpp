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

// Codeforces - Codeforces Round 166 (Div. 2)
// A. Beautiful Year

bool are_digit_distinct(int n)
{
    string s = to_string(n);
    set<char> digits(s.begin(), s.end());
    return digits.size() == s.size();
}

int main()
{
    int y;
    cin >> y;

    while (!are_digit_distinct(++y))
        ;

    cout << y << nl;
    return 0;
}
