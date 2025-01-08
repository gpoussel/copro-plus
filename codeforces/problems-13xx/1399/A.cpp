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

// Codeforces - Codeforces Round 661 (Div. 3)
// A. Remove Smallest

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        vector<int> array(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> array[j];
        }
        sort(array.begin(), array.end());
        bool possible = true;
        for (int j = 1; j < n; ++j)
        {
            if (array[j] - array[j - 1] > 1)
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
