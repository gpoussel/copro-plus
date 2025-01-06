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

// Codeforces - Codeforces Round 405 (rated, Div. 2, based on VK Cup 2017 Round 1)
// A. Bear and Big Brother

int main()
{
    long long a, b;
    cin >> a >> b;
    long long i = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        i++;
    }
    cout << i << nl;
    return 0;
}
