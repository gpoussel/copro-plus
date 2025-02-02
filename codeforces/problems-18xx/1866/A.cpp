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

// Codeforces - COMPFEST 15 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// A. Ambitious Kid

int main()
{
    int length;
    cin >> length;
    int min_absolute = INT_MAX;
    for (int j = 0; j < length; j++)
    {
        int value;
        cin >> value;
        min_absolute = min(min_absolute, abs(value));
    }
    cout << min_absolute << nl;
    return 0;
}
