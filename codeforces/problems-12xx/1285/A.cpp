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

// Codeforces - Codeforces Round 613 (Div. 2)
// A. Mezo Playing Zoma

int main()
{
    int n;
    cin >> n;
    string commands;
    cin >> commands;
    int left = (int)count(commands.begin(), commands.end(), 'L');
    int right = (int)commands.size() - left;
    cout << left + right + 1 << nl;
    return 0;
}
