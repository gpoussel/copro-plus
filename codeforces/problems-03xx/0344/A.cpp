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

// Codeforces - Codeforces Round 200 (Div. 2)
// A. Magnets

int main()
{
    int n;
    cin >> n;
    int groups = 0;
    char last_character;
    for (int i = 0; i < n; i++)
    {
        string magnet;
        cin >> magnet;
        if (i == 0)
        {
            groups++;
        }
        else if (last_character == magnet[0])
        {
            groups++;
        }

        last_character = magnet[1];
    }
    cout << groups << nl;
    return 0;
}
