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

// Codeforces - Codeforces Round 379 (Div. 2)
// A. Anton and Danik

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = accumulate(s.begin(), s.end(), 0, [](int acc, char c)
                            { return acc + (c == 'A' ? 1 : -1); });
    if (result == 0)
    {
        cout << "Friendship" << nl;
    }
    else if (result > 0)
    {
        cout << "Anton" << nl;
    }
    else
    {
        cout << "Danik" << nl;
    }
    return 0;
}
