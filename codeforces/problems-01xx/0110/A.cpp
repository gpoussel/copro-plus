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

// Codeforces - Codeforces Beta Round 84 (Div. 2 Only)
// A. Nearly Lucky Number

int main()
{
    string s;
    cin >> s;

    size_t lucky_numbers = count_if(s.begin(), s.end(), [](char c)
                                    { return c == '4' || c == '7'; });
    cout << (lucky_numbers == 4 || lucky_numbers == 7 ? "YES" : "NO") << nl;
    return 0;
}
