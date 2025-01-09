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

// Codeforces - Codeforces Round 898 (Div. 4)
// A. Short Sort

bool is_abc_swappable(const string str)
{
    return str[0] == 'a' || str[1] == 'b' || str[2] == 'c';
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        cout << (is_abc_swappable(str) ? "YES" : "NO") << nl;
    }
    return 0;
}
