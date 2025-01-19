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

// Codeforces - Codeforces Round 998 (Div. 3)
// A. Fibonacciness

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int a1;
        cin >> a1;
        int a2;
        cin >> a2;
        int a4;
        cin >> a4;
        int a5;
        cin >> a5;

        set<int> fibs;
        fibs.insert(a1 + a2);
        fibs.insert(a4 - a2);
        fibs.insert(a5 - a4);
        cout << 4 - fibs.size() << nl;
    }
}
