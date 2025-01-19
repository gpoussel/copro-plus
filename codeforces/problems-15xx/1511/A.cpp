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

// Codeforces - Educational Codeforces Round 107 (Rated for Div. 2)
// A. Review Site

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> types_count(3);
        for (int j = 0; j < length; j++)
        {
            int type;
            cin >> type;
            types_count[type - 1]++;
        }
        cout << types_count[0] + types_count[2] << nl;
    }
    return 0;
}
