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

// Codeforces - Codeforces Round 970 (Div. 3)
// A. Sakurako's Exam

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int ones;
        cin >> ones;
        int twos;
        cin >> twos;
        if (twos % 2 == 0)
        {
            cout << (ones % 2 == 0 ? "YES" : "NO") << nl;
        }
        else
        {
            cout << (ones >= 2 && ones % 2 == 0 ? "YES" : "NO") << nl;
        }
    }
    return 0;
}
