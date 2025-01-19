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

// Codeforces - Educational Codeforces Round 152 (Rated for Div. 2)
// A. Morning Sandwich

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int bread;
        cin >> bread;
        int cheese;
        cin >> cheese;
        int ham;
        cin >> ham;
        int layers_for_content = cheese + ham;
        int layers_for_bread = bread - 1;
        cout << min(layers_for_content, layers_for_bread) * 2 + 1 << nl;
    }
    return 0;
}
