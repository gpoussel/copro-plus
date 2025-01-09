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

// Codeforces - Codeforces Round 859 (Div. 4)
// A. Plus or Minus

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        if (a + b == c)
        {
            cout << "+" << nl;
        }
        else
        {
            cout << "-" << nl;
        }
    }
    return 0;
}