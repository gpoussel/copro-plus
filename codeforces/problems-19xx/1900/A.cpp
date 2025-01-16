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

// Codeforces - Codeforces Round 911 (Div. 2)
// A. Cover in Water

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string strip;
        cin >> strip;
        bool has_infinite_generator = strip.contains("...");
        if (has_infinite_generator)
        {
            cout << 2 << nl;
        }
        else
        {
            cout << count(strip.begin(), strip.end(), '.') << nl;
        }
    }
    return 0;
}
