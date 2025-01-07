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

vector<int> z_function(string s)
{
    int n = (int)s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i)
    {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}

// Codeforces - Codeforces Beta Round 93 (Div. 1 Only)
// B. Password

int main()
{
    string str;
    cin >> str;
    vector<int> z = z_function(str);

    int n = (int)str.size();
    int maxz = 0;
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (z[i] == n - i && maxz >= n - i)
        {
            res = n - i;
            break;
        }
        maxz = max(maxz, z[i]);
    }
    cout << (res == 0 ? "Just a legend" : str.substr(0, res)) << nl;
    return 0;
}
