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

// Codeforces - Codeforces Round 368 (Div. 2)
// A. Brain's Photos

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    bool colored = false;
    for (int i = 0; i < n * m; i++)
    {
        char c;
        cin >> c;
        if (c == 'C' || c == 'M' || c == 'Y')
        {
            colored = true;
        }
    }
    cout << (colored ? "#Color" : "#Black&White") << nl;
    return 0;
}
