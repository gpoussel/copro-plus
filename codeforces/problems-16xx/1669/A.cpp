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

// Codeforces - Codeforces Round 784 (Div. 4)
// A. Division?

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        if (n <= 1399)
        {
            cout << "Division 4" << nl;
        }
        else if (n <= 1599)
        {
            cout << "Division 3" << nl;
        }
        else if (n <= 1899)
        {
            cout << "Division 2" << nl;
        }
        else
        {
            cout << "Division 1" << nl;
        }
    }
    return 0;
}
