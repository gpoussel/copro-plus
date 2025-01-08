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

// Codeforces - Codeforces Round 366 (Div. 2)
// A. Hulk

int main()
{
    int n;
    cin >> n;

    cout << "I hate";
    for (int i = 1; i < n; ++i)
    {
        if (i % 2 == 1)
        {
            cout << " that I love";
        }
        else
        {
            cout << " that I hate";
        }
    }

    cout << " it" << nl;

    return 0;
}
