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

// Codeforces - Technocup 2019 - Elimination Round 1
// A. In Search of an Easy Problem

int main()
{
    int n;
    cin >> n;
    bool hard = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            hard = true;
            break;
        }
    }
    cout << (hard ? "HARD" : "EASY") << nl;
    return 0;
}
