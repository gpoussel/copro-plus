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

// Codeforces - Codeforces Round 769 (Div. 2)
// A. ABC

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        if (n <= 1)
        {
            cout << "YES" << nl;
            continue;
        }
        if (n == 2)
        {
            cout << (str[0] != str[1] ? "YES" : "NO") << nl;
            continue;
        }
        cout << "NO" << nl;
    }
    return 0;
}
