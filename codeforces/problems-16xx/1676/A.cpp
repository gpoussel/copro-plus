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

// Codeforces - Codeforces Round 790 (Div. 4)
// A. Lucky?

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        string str;
        cin >> str;
        auto add_digit = [](int acc, char c)
        { return acc + c - '0'; };
        int left_sum = accumulate(str.begin(), str.begin() + 3, 0, add_digit);
        int right_sum = accumulate(str.begin() + 3, str.begin() + 6, 0, add_digit);
        cout << (left_sum == right_sum ? "YES" : "NO") << nl;
    }
    return 0;
}
