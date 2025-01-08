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

// Codeforces - Codeforces Round 713 (Div. 3)
// A. Spy Detected!

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> a[j];
        }
        map<int, int> frequencies;
        for (int j = 0; j < n; ++j)
        {
            frequencies[a[j]]++;
        }
        for (auto &[key, value] : frequencies)
        {
            if (value == 1)
            {
                cout << (find(a.begin(), a.end(), key) - a.begin()) + 1 << nl;
                break;
            }
        }
    }
    return 0;
}
