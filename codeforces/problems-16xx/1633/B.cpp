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

// Codeforces - Educational Codeforces Round 122 (Rated for Div. 2)
// B. Minority

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        int count_0 = (int)count(str.begin(), str.end(), '0');
        int count_1 = (int)str.size() - count_0;
        if (count_0 != count_1)
        {
            cout << min(count_0, count_1) << nl;
        }
        else
        {
            cout << count_0 - 1 << nl;
        }
    }
    return 0;
}
