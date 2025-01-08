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

// Codeforces - Codeforces Round 244 (Div. 2)
// A. Police Recruits

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int untreated_crimes = 0;
    for (int i = 0; i < n; ++i)
    {
        int number;
        cin >> number;
        if (number < 0 && sum <= 0)
        {
            untreated_crimes++;
        }
        else
        {
            sum += number;
        }
    }
    cout << untreated_crimes << nl;
    return 0;
}
