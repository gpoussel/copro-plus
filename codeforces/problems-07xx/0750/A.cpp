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

// Codeforces - Good Bye 2016
// A. New Year and Hurry

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    int problems_solved = 0;
    int available_time = 240 - k;
    while (available_time >= 5 * (problems_solved + 1) && problems_solved < n)
    {
        available_time -= 5 * ++problems_solved;
    }
    cout << problems_solved << nl;
    return 0;
}
