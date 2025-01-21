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

// Codeforces - Educational Codeforces Round 167 (Rated for Div. 2)
// A. Catch the Coin

int main()
{
    int number_of_coins;
    cin >> number_of_coins;
    for (int i = 0; i < number_of_coins; ++i)
    {
        int x_i;
        cin >> x_i;
        int y_i;
        cin >> y_i;
        cout << (y_i >= -1 ? "YES" : "NO") << nl;
    }
    return 0;
}
