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

// Codeforces - Codeforces Round 923 (Div. 3)
// A. Make it White

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
        int first_b = (int)strip.find_first_of('B');
        int last_b = (int)strip.find_last_of('B');
        cout << (last_b - first_b + 1) << nl;
    }
    return 0;
}
