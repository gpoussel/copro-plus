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

// Codeforces - Testing Round 14 (Unrated)
// A. The Way to Home

#define DEFAULT_DISTANCE 1e4

int main()
{
    int n;
    cin >> n;
    int d;
    cin >> d;
    string s;
    cin >> s;

    vector<int> distance(n, DEFAULT_DISTANCE);
    distance[0] = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            for (int j = 0; j <= d; ++j)
            {
                if (i + j < n && s[i + j] == '1')
                {
                    distance[i + j] = min(distance[i + j], distance[i] + 1);
                }
            }
        }
    }

    cout << (distance[n - 1] < DEFAULT_DISTANCE ? distance[n - 1] : -1) << nl;
    return 0;
}
