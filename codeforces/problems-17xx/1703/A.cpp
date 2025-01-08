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

// Codeforces - Codeforces Round 806 (Div. 4)
// A. YES or YES?

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        string str;
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        if (str == "yes")
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
