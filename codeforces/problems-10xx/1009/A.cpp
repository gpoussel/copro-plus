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

// Codeforces - Educational Codeforces Round 47 (Rated for Div. 2)
// A. Game Shopping

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> c(n);
    for (int j = 0; j < n; j++)
    {
        cin >> c[j];
    }
    vector<int> a(m);
    for (int j = 0; j < m; j++)
    {
        cin >> a[j];
    }
    int count = 0;
    while (!c.empty() && !a.empty())
    {
        if (a[0] >= c[0])
        {
            count++;
            a.erase(a.begin());
        }
        c.erase(c.begin());
    }
    cout << count << nl;
    return 0;
}
